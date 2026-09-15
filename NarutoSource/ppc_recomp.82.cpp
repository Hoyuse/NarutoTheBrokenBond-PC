#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824BF738"))) PPC_WEAK_FUNC(sub_824BF738);
PPC_FUNC_IMPL(__imp__sub_824BF738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824BF740;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r25,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r25.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r26,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r26.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r19,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r19.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r24,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r24.u32);
	// stw r22,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r22.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// bl 0x823d03f0
	ctx.lr = 0x824BF788;
	sub_823D03F0(ctx, base);
	// lwz r18,652(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x824bf7b4
	if (!ctx.cr6.eq) goto loc_824BF7B4;
	// stw r19,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r19.u32);
	// addi r18,r1,256
	ctx.r18.s64 = ctx.r1.s64 + 256;
	// stw r24,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r24.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
loc_824BF7B4:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r8,12(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bne cr6,0x824bf7e0
	if (!ctx.cr6.eq) goto loc_824BF7E0;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
loc_824BF7E0:
	// lwz r23,660(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// rlwinm. r10,r23,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824bf7f8
	if (!ctx.cr0.eq) goto loc_824BF7F8;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_824BF7F8:
	// lwz r16,644(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// clrlwi r14,r22,26
	ctx.r14.u64 = ctx.r22.u32 & 0x3F;
	// clrlwi r27,r16,26
	ctx.r27.u64 = ctx.r16.u32 & 0x3F;
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// beq cr6,0x824bfca4
	if (ctx.cr6.eq) goto loc_824BFCA4;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// beq cr6,0x824bfca4
	if (ctx.cr6.eq) goto loc_824BFCA4;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824ad258
	ctx.lr = 0x824BF824;
	sub_824AD258(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r20,1
	ctx.r20.s64 = 1;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r20,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r20.u32);
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r20.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// beq cr6,0x824bf940
	if (ctx.cr6.eq) goto loc_824BF940;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x824bf940
	if (ctx.cr6.eq) goto loc_824BF940;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x824bf934
	if (ctx.cr6.eq) goto loc_824BF934;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x824bf934
	if (ctx.cr6.eq) goto loc_824BF934;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x824bf928
	if (ctx.cr6.eq) goto loc_824BF928;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x824bf928
	if (ctx.cr6.eq) goto loc_824BF928;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// bne cr6,0x824bf8cc
	if (!ctx.cr6.eq) goto loc_824BF8CC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF8CC:
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// bne cr6,0x824bf8e0
	if (!ctx.cr6.eq) goto loc_824BF8E0;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,123
	ctx.r11.u64 = ctx.r11.u64 | 123;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF8E0:
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// bne cr6,0x824bf904
	if (!ctx.cr6.eq) goto loc_824BF904;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bf8fc
	if (ctx.cr0.eq) goto loc_824BF8FC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_824BF8F4:
	// ori r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 75;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF8FC:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x824bf8f4
	goto loc_824BF8F4;
loc_824BF904:
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x824bf94c
	if (!ctx.cr6.eq) goto loc_824BF94C;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bf920
	if (ctx.cr0.eq) goto loc_824BF920;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_824BF918:
	// ori r11,r11,76
	ctx.r11.u64 = ctx.r11.u64 | 76;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF920:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x824bf918
	goto loc_824BF918;
loc_824BF928:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,84
	ctx.r11.u64 = ctx.r11.u64 | 84;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF934:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// b 0x824bf948
	goto loc_824BF948;
loc_824BF940:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,82
	ctx.r11.u64 = ctx.r11.u64 | 82;
loc_824BF948:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_824BF94C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r7,12(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r15,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r15.u32);
	// stw r17,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r17.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stw r20,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r20.u32);
	// bl 0x82219130
	ctx.lr = 0x824BF994;
	sub_82219130(ctx, base);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// bne cr6,0x824bf9b4
	if (!ctx.cr6.eq) goto loc_824BF9B4;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x824bf9bc
	goto loc_824BF9BC;
loc_824BF9B4:
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43686
	ctx.r11.u64 = ctx.r11.u64 | 43686;
loc_824BF9BC:
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// rlwinm r11,r16,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 26) & 0x3;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r16,0,26,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824bfa08
	if (ctx.cr6.eq) goto loc_824BFA08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bf9e8
	if (!ctx.cr6.eq) goto loc_824BF9E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824bf9f8
	goto loc_824BF9F8;
loc_824BF9E8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x824bf9f8
	if (ctx.cr6.eq) goto loc_824BF9F8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824BF9F8:
	// rlwinm r10,r29,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_824BFA08:
	// rlwinm r11,r16,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r16,14,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 14) & 0xFFF;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bne cr6,0x824bfa44
	if (!ctx.cr6.eq) goto loc_824BFA44;
	// cmplwi cr6,r10,1546
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1546, ctx.xer);
	// beq cr6,0x824bfa7c
	if (ctx.cr6.eq) goto loc_824BFA7C;
	// rlwinm r10,r16,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 11) & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// rlwinm r8,r16,8,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0x7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x824bfa70
	goto loc_824BFA70;
loc_824BFA44:
	// cmplwi cr6,r10,1672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1672, ctx.xer);
	// beq cr6,0x824bfa7c
	if (ctx.cr6.eq) goto loc_824BFA7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r8,r16,11,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 11) & 0x7;
	// rlwinm r7,r16,8,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lfs f0,9184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9184);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_824BFA70:
	// rlwinm r11,r16,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 5) & 0x7;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_824BFA7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824bfa8c
	if (!ctx.cr6.eq) goto loc_824BFA8C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824bfbac
	if (ctx.cr6.eq) goto loc_824BFBAC;
loc_824BFA8C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-23512
	ctx.r11.s64 = ctx.r11.s64 + -23512;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r22,r11,29,3,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r26,r22,r19
	ctx.r26.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// rlwinm r25,r22,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r30,r26,r24
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// bl 0x821fd940
	ctx.lr = 0x824BFAAC;
	sub_821FD940(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821fc4a0
	ctx.lr = 0x824BFAB8;
	sub_821FC4A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824bfda0
	if (ctx.cr0.eq) goto loc_824BFDA0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231788
	ctx.lr = 0x824BFAE0;
	sub_82231788(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824bfb90
	if (ctx.cr6.eq) goto loc_824BFB90;
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bfb90
	if (ctx.cr6.eq) goto loc_824BFB90;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_824BFAFC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x824bfb84
	if (ctx.cr6.eq) goto loc_824BFB84;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_824BFB0C:
	// addi r31,r1,384
	ctx.r31.s64 = ctx.r1.s64 + 384;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// li r29,4
	ctx.r29.s64 = 4;
loc_824BFB18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x824bfb38
	if (!ctx.cr6.eq) goto loc_824BFB38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x824BFB34;
	sub_82218A80(ctx, base);
	// b 0x824bfb58
	goto loc_824BFB58;
loc_824BFB38:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x824bfb48
	if (!ctx.cr6.eq) goto loc_824BFB48;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// b 0x824bfb54
	goto loc_824BFB54;
loc_824BFB48:
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_824BFB54:
	// bl 0x82219130
	ctx.lr = 0x824BFB58;
	sub_82219130(ctx, base);
loc_824BFB58:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bne 0x824bfb18
	if (!ctx.cr0.eq) goto loc_824BFB18;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x824BFB78;
	sub_82219130(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// bne 0x824bfb0c
	if (!ctx.cr0.eq) goto loc_824BFB0C;
loc_824BFB84:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r23,r23,r26
	ctx.r23.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bne 0x824bfafc
	if (!ctx.cr0.eq) goto loc_824BFAFC;
loc_824BFB90:
	// stw r26,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r26.u32);
	// lwz r22,612(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r24,604(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r25,580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r26,588(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r23,660(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
loc_824BFBAC:
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,12732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12732, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,-3044(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + -3044, temp.u32);
	// bl 0x82578e68
	ctx.lr = 0x824BFBD4;
	sub_82578E68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824bfbf0
	if (ctx.cr6.eq) goto loc_824BFBF0;
	// bl 0x821fd940
	ctx.lr = 0x824BFBE4;
	sub_821FD940(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821fcd70
	ctx.lr = 0x824BFBF0;
	sub_821FCD70(ctx, base);
loc_824BFBF0:
	// rlwinm r11,r22,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// beq cr6,0x824bfc44
	if (ctx.cr6.eq) goto loc_824BFC44;
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x824bfc94
	if (!ctx.cr6.eq) goto loc_824BFC94;
loc_824BFC44:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824bfc94
	if (ctx.cr6.eq) goto loc_824BFC94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bfc5c
	if (!ctx.cr6.eq) goto loc_824BFC5C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x824bfc6c
	goto loc_824BFC6C;
loc_824BFC5C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_824BFC6C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r22,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82231788
	ctx.lr = 0x824BFC94;
	sub_82231788(ctx, base);
loc_824BFC94:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82575918
	ctx.lr = 0x824BFC9C;
	sub_82575918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824bffac
	goto loc_824BFFAC;
loc_824BFCA4:
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r11,r17
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,-23512
	ctx.r8.s64 = ctx.r8.s64 + -23512;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// lbzx r4,r27,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// lbzx r8,r14,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r8.u32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rotlwi r23,r8,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r3,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 2;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r5,r23
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// subf. r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r22,r10,r15
	ctx.r22.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// add r19,r9,r25
	ctx.r19.u64 = ctx.r9.u64 + ctx.r25.u64;
	// bne 0x824bfd38
	if (!ctx.cr0.eq) goto loc_824BFD38;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824bfd38
	if (!ctx.cr0.eq) goto loc_824BFD38;
	// clrlwi. r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824bfd38
	if (!ctx.cr0.eq) goto loc_824BFD38;
	// clrlwi. r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq 0x824bfd3c
	if (ctx.cr0.eq) goto loc_824BFD3C;
loc_824BFD38:
	// li r10,1
	ctx.r10.s64 = 1;
loc_824BFD3C:
	// lis r9,11554
	ctx.r9.s64 = 757202944;
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// ori r24,r9,43685
	ctx.r24.u64 = ctx.r9.u64 | 43685;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmpw cr6,r16,r24
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x824bfd60
	if (!ctx.cr6.eq) goto loc_824BFD60;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bfed0
	if (ctx.cr0.eq) goto loc_824BFED0;
loc_824BFD60:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r28,r11,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821f61f8
	ctx.lr = 0x824BFD98;
	sub_821F61F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x824bfdb4
	if (!ctx.cr0.eq) goto loc_824BFDB4;
loc_824BFDA0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82575918
	ctx.lr = 0x824BFDA8;
	sub_82575918(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824bffac
	goto loc_824BFFAC;
loc_824BFDB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,14620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14620);
	ctx.f31.f64 = double(temp.f32);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// beq 0x824bfe6c
	if (ctx.cr0.eq) goto loc_824BFE6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r4,612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824b19f0
	ctx.lr = 0x824BFE40;
	sub_824B19F0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824bfe58
	if (!ctx.cr6.gt) goto loc_824BFE58;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_824BFE58:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824bfe6c
	if (!ctx.cr6.gt) goto loc_824BFE6C;
	// subf r21,r10,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_824BFE6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824b19f0
	ctx.lr = 0x824BFED0;
	sub_824B19F0(ctx, base);
loc_824BFED0:
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// twllei r23,0
	// divwu r8,r11,r23
	ctx.r8.u32 = ctx.r11.u32 / ctx.r23.u32;
	// beq cr6,0x824bff10
	if (ctx.cr6.eq) goto loc_824BFF10;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// bne cr6,0x824bff30
	if (!ctx.cr6.eq) goto loc_824BFF30;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82575810
	ctx.lr = 0x824BFF0C;
	sub_82575810(ctx, base);
	// b 0x824bff30
	goto loc_824BFF30;
loc_824BFF10:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82575160
	ctx.lr = 0x824BFF30;
	sub_82575160(ctx, base);
loc_824BFF30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824bff44
	if (ctx.cr6.eq) goto loc_824BFF44;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821f6290
	ctx.lr = 0x824BFF44;
	sub_821F6290(ctx, base);
loc_824BFF44:
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824bffa0
	if (ctx.cr6.eq) goto loc_824BFFA0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bff6c
	if (!ctx.cr6.eq) goto loc_824BFF6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,6,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x824bff84
	goto loc_824BFF84;
loc_824BFF6C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824bff7c
	if (!ctx.cr6.eq) goto loc_824BFF7C;
	// ori r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 192;
	// b 0x824bff84
	goto loc_824BFF84;
loc_824BFF7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,7,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
loc_824BFF84:
	// lwz r6,588(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82231788
	ctx.lr = 0x824BFFA0;
	sub_82231788(ctx, base);
loc_824BFFA0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82575918
	ctx.lr = 0x824BFFA8;
	sub_82575918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BFFAC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BFFB8"))) PPC_WEAK_FUNC(sub_824BFFB8);
PPC_FUNC_IMPL(__imp__sub_824BFFB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x821f61f8
	sub_821F61F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BFFC4"))) PPC_WEAK_FUNC(sub_824BFFC4);
PPC_FUNC_IMPL(__imp__sub_824BFFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BFFC8"))) PPC_WEAK_FUNC(sub_824BFFC8);
PPC_FUNC_IMPL(__imp__sub_824BFFC8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x821f6290
	sub_821F6290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824BFFD4"))) PPC_WEAK_FUNC(sub_824BFFD4);
PPC_FUNC_IMPL(__imp__sub_824BFFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824BFFD8"))) PPC_WEAK_FUNC(sub_824BFFD8);
PPC_FUNC_IMPL(__imp__sub_824BFFD8) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c0074
	if (ctx.cr6.gt) goto loc_824C0074;
	// beq cr6,0x824c006c
	if (ctx.cr6.eq) goto loc_824C006C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c00f0
	if (ctx.cr6.eq) goto loc_824C00F0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c0060
	if (ctx.cr6.eq) goto loc_824C0060;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c0058
	if (ctx.cr6.eq) goto loc_824C0058;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c0050
	if (ctx.cr6.eq) goto loc_824C0050;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c0048
	if (ctx.cr6.eq) goto loc_824C0048;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c00bc
	if (!ctx.cr6.eq) goto loc_824C00BC;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x824c0064
	goto loc_824C0064;
loc_824C0048:
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C0050:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x824c0064
	goto loc_824C0064;
loc_824C0058:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C0060:
	// lis r31,0
	ctx.r31.s64 = 0;
loc_824C0064:
	// ori r31,r31,34952
	ctx.r31.u64 = ctx.r31.u64 | 34952;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C006C:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C0074:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00ec
	if (ctx.cr6.eq) goto loc_824C00EC;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00e4
	if (ctx.cr6.eq) goto loc_824C00E4;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00dc
	if (ctx.cr6.eq) goto loc_824C00DC;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00d4
	if (ctx.cr6.eq) goto loc_824C00D4;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00cc
	if (ctx.cr6.eq) goto loc_824C00CC;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c00c4
	if (ctx.cr6.eq) goto loc_824C00C4;
loc_824C00BC:
	// bl 0x8222e960
	ctx.lr = 0x824C00C0;
	sub_8222E960(ctx, base);
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C00C4:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x824c0064
	goto loc_824C0064;
loc_824C00CC:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C00D4:
	// lis r31,96
	ctx.r31.s64 = 6291456;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C00DC:
	// lis r31,64
	ctx.r31.s64 = 4194304;
	// b 0x824c00f0
	goto loc_824C00F0;
loc_824C00E4:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x824c0064
	goto loc_824C0064;
loc_824C00EC:
	// lis r31,4
	ctx.r31.s64 = 262144;
loc_824C00F0:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c010c
	if (ctx.cr0.eq) goto loc_824C010C;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c010c
	if (ctx.cr0.eq) goto loc_824C010C;
	// bl 0x8222e960
	ctx.lr = 0x824C010C;
	sub_8222E960(ctx, base);
loc_824C010C:
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

__attribute__((alias("__imp__sub_824C0124"))) PPC_WEAK_FUNC(sub_824C0124);
PPC_FUNC_IMPL(__imp__sub_824C0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0128"))) PPC_WEAK_FUNC(sub_824C0128);
PPC_FUNC_IMPL(__imp__sub_824C0128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C0130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c0210
	if (ctx.cr6.eq) goto loc_824C0210;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x824c01d4
	if (ctx.cr6.eq) goto loc_824C01D4;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x824c0178
	if (ctx.cr6.eq) goto loc_824C0178;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x824c0208
	if (!ctx.cr6.eq) goto loc_824C0208;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// b 0x824c0218
	goto loc_824C0218;
loc_824C0178:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x824c0190
	if (!ctx.cr6.lt) goto loc_824C0190;
	// bl 0x8222e960
	ctx.lr = 0x824C0190;
	sub_8222E960(ctx, base);
loc_824C0190:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x824c019c
	if (ctx.cr6.lt) goto loc_824C019C;
	// bl 0x8222e960
	ctx.lr = 0x824C019C;
	sub_8222E960(ctx, base);
loc_824C019C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x824c01cc
	if (!ctx.cr6.eq) goto loc_824C01CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,4
	ctx.r9.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,35
	ctx.r31.s64 = ctx.r31.s64 + 35;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x824c0218
	goto loc_824C0218;
loc_824C01CC:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x824c0214
	goto loc_824C0214;
loc_824C01D4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c01ec
	if (ctx.cr6.lt) goto loc_824C01EC;
	// bl 0x8222e960
	ctx.lr = 0x824C01EC;
	sub_8222E960(ctx, base);
loc_824C01EC:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c0218
	if (!ctx.cr6.eq) goto loc_824C0218;
loc_824C0208:
	// bl 0x8222e960
	ctx.lr = 0x824C020C;
	sub_8222E960(ctx, base);
	// b 0x824c0218
	goto loc_824C0218;
loc_824C0210:
	// li r11,4
	ctx.r11.s64 = 4;
loc_824C0214:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_824C0218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0224"))) PPC_WEAK_FUNC(sub_824C0224);
PPC_FUNC_IMPL(__imp__sub_824C0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0228"))) PPC_WEAK_FUNC(sub_824C0228);
PPC_FUNC_IMPL(__imp__sub_824C0228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C0230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x824c0258
	if (ctx.cr6.eq) goto loc_824C0258;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x824c0258
	if (ctx.cr6.eq) goto loc_824C0258;
	// bl 0x8222e960
	ctx.lr = 0x824C0258;
	sub_8222E960(ctx, base);
loc_824C0258:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824c027c
	if (!ctx.cr6.eq) goto loc_824C027C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x824c0280
	goto loc_824C0280;
loc_824C027C:
	// rlwinm r10,r11,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_824C0280:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824c02fc
	if (ctx.cr6.eq) goto loc_824C02FC;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r8,-32055
	ctx.r8.s64 = -2100756480;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,-3008
	ctx.r8.s64 = ctx.r8.s64 + -3008;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r6,r11,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// lis r4,68
	ctx.r4.s64 = 4456448;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x824c030c
	goto loc_824C030C;
loc_824C02FC:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824C030C:
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0330"))) PPC_WEAK_FUNC(sub_824C0330);
PPC_FUNC_IMPL(__imp__sub_824C0330) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x8222e960
	ctx.lr = 0x824C0354;
	sub_8222E960(ctx, base);
	// b 0x824c035c
	goto loc_824C035C;
loc_824C0358:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C035C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c0358
	if (!ctx.cr0.eq) goto loc_824C0358;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_824C0384"))) PPC_WEAK_FUNC(sub_824C0384);
PPC_FUNC_IMPL(__imp__sub_824C0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0388"))) PPC_WEAK_FUNC(sub_824C0388);
PPC_FUNC_IMPL(__imp__sub_824C0388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C0390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c03b4
	if (ctx.cr6.eq) goto loc_824C03B4;
	// bl 0x8222e960
	ctx.lr = 0x824C03B4;
	sub_8222E960(ctx, base);
loc_824C03B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c03f0
	if (ctx.cr0.eq) goto loc_824C03F0;
	// bl 0x8222e960
	ctx.lr = 0x824C03F0;
	sub_8222E960(ctx, base);
loc_824C03F0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,257
	ctx.r8.s64 = 257;
	// rlwimi r31,r10,18,0,20
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFFF800) | (ctx.r31.u64 & 0xFFFFFFFF000007FF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,12816
	ctx.r10.u64 = ctx.r10.u64 | 12816;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0438"))) PPC_WEAK_FUNC(sub_824C0438);
PPC_FUNC_IMPL(__imp__sub_824C0438) {
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
	// bne cr6,0x824c0460
	if (!ctx.cr6.eq) goto loc_824C0460;
	// bl 0x8222e960
	ctx.lr = 0x824C0460;
	sub_8222E960(ctx, base);
loc_824C0460:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c0474
	if (ctx.cr6.lt) goto loc_824C0474;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c0484
	goto loc_824C0484;
loc_824C0474:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824C0484:
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

__attribute__((alias("__imp__sub_824C049C"))) PPC_WEAK_FUNC(sub_824C049C);
PPC_FUNC_IMPL(__imp__sub_824C049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C04A0"))) PPC_WEAK_FUNC(sub_824C04A0);
PPC_FUNC_IMPL(__imp__sub_824C04A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c04c8
	if (!ctx.cr6.eq) goto loc_824C04C8;
	// bl 0x8222e960
	ctx.lr = 0x824C04C8;
	sub_8222E960(ctx, base);
loc_824C04C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_824C04F0"))) PPC_WEAK_FUNC(sub_824C04F0);
PPC_FUNC_IMPL(__imp__sub_824C04F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C04F8;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x824c0510
	if (!ctx.cr6.eq) goto loc_824C0510;
	// bl 0x8222e960
	ctx.lr = 0x824C0510;
	sub_8222E960(ctx, base);
loc_824C0510:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c0520
	if (!ctx.cr6.eq) goto loc_824C0520;
	// bl 0x8222e960
	ctx.lr = 0x824C0520;
	sub_8222E960(ctx, base);
loc_824C0520:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c05c8
	if (ctx.cr6.lt) goto loc_824C05C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c0548
	if (ctx.cr6.eq) goto loc_824C0548;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x824c054c
	goto loc_824C054C;
loc_824C0548:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_824C054C:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// b 0x824c055c
	goto loc_824C055C;
loc_824C0554:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c05d4
	if (ctx.cr0.eq) goto loc_824C05D4;
loc_824C055C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824c0554
	if (ctx.cr6.lt) goto loc_824C0554;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f61f8
	ctx.lr = 0x824C0580;
	sub_821F61F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824c05d4
	if (ctx.cr0.eq) goto loc_824C05D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c05b4
	if (ctx.cr6.eq) goto loc_824C05B4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82219130
	ctx.lr = 0x824C05A8;
	sub_82219130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x821f6290
	ctx.lr = 0x824C05B4;
	sub_821F6290(ctx, base);
loc_824C05B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// twllei r11,0
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_824C05C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824C05CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_824C05D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c05cc
	goto loc_824C05CC;
}

__attribute__((alias("__imp__sub_824C05DC"))) PPC_WEAK_FUNC(sub_824C05DC);
PPC_FUNC_IMPL(__imp__sub_824C05DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C05E0"))) PPC_WEAK_FUNC(sub_824C05E0);
PPC_FUNC_IMPL(__imp__sub_824C05E0) {
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
	// bne cr6,0x824c0608
	if (!ctx.cr6.eq) goto loc_824C0608;
	// bl 0x8222e960
	ctx.lr = 0x824C0608;
	sub_8222E960(ctx, base);
loc_824C0608:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c04a0
	ctx.lr = 0x824C0614;
	sub_824C04A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x824c0648
	if (!ctx.cr0.eq) goto loc_824C0648;
	// bl 0x824c04f0
	ctx.lr = 0x824C0628;
	sub_824C04F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c0640
	if (ctx.cr0.eq) goto loc_824C0640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0438
	ctx.lr = 0x824C063C;
	sub_824C0438(ctx, base);
	// b 0x824c0660
	goto loc_824C0660;
loc_824C0640:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c0660
	goto loc_824C0660;
loc_824C0648:
	// bl 0x824c0438
	ctx.lr = 0x824C064C;
	sub_824C0438(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x824C065C;
	sub_82218A80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824C0660:
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

__attribute__((alias("__imp__sub_824C0678"))) PPC_WEAK_FUNC(sub_824C0678);
PPC_FUNC_IMPL(__imp__sub_824C0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C0680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r3,21
	ctx.r31.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x824c06c4
	if (ctx.cr6.eq) goto loc_824C06C4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x824c06bc
	if (ctx.cr6.eq) goto loc_824C06BC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x824c06c8
	if (!ctx.cr6.eq) goto loc_824C06C8;
	// addi r31,r31,6144
	ctx.r31.s64 = ctx.r31.s64 + 6144;
	// b 0x824c06c8
	goto loc_824C06C8;
loc_824C06BC:
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x824c06c8
	goto loc_824C06C8;
loc_824C06C4:
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
loc_824C06C8:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x824c06dc
	if (ctx.cr6.lt) goto loc_824C06DC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x824c06dc
	if (ctx.cr6.gt) goto loc_824C06DC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_824C06DC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824c07e0
	if (ctx.cr6.lt) goto loc_824C07E0;
	// beq cr6,0x824c078c
	if (ctx.cr6.eq) goto loc_824C078C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824c0784
	if (ctx.cr6.lt) goto loc_824C0784;
	// beq cr6,0x824c0740
	if (ctx.cr6.eq) goto loc_824C0740;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824c0738
	if (ctx.cr6.eq) goto loc_824C0738;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x824c0730
	if (ctx.cr6.eq) goto loc_824C0730;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x824c07d8
	if (!ctx.cr6.eq) goto loc_824C07D8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x824c0720
	if (ctx.cr6.lt) goto loc_824C0720;
	// bne cr6,0x824c0728
	if (!ctx.cr6.eq) goto loc_824C0728;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x824c0724
	goto loc_824C0724;
loc_824C0720:
	// li r11,22
	ctx.r11.s64 = 22;
loc_824C0724:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_824C0728:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x824c07e8
	goto loc_824C07E8;
loc_824C0730:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824c07e4
	goto loc_824C07E4;
loc_824C0738:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824c07e4
	goto loc_824C07E4;
loc_824C0740:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c077c
	if (ctx.cr6.eq) goto loc_824C077C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c076c
	if (ctx.cr6.lt) goto loc_824C076C;
	// bl 0x8222e960
	ctx.lr = 0x824C076C;
	sub_8222E960(ctx, base);
loc_824C076C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x824c07e8
	goto loc_824C07E8;
loc_824C077C:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x824c07e4
	goto loc_824C07E4;
loc_824C0784:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824c07e4
	goto loc_824C07E4;
loc_824C078C:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c07b4
	if (ctx.cr6.lt) goto loc_824C07B4;
	// bl 0x8222e960
	ctx.lr = 0x824C07B4;
	sub_8222E960(ctx, base);
loc_824C07B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x824c07e8
	if (ctx.cr6.eq) goto loc_824C07E8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x824c07e8
	if (ctx.cr6.eq) goto loc_824C07E8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x824c07e8
	if (ctx.cr6.eq) goto loc_824C07E8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824c07e8
	if (ctx.cr6.eq) goto loc_824C07E8;
loc_824C07D8:
	// bl 0x8222e960
	ctx.lr = 0x824C07DC;
	sub_8222E960(ctx, base);
	// b 0x824c07e8
	goto loc_824C07E8;
loc_824C07E0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_824C07E4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_824C07E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C07F4"))) PPC_WEAK_FUNC(sub_824C07F4);
PPC_FUNC_IMPL(__imp__sub_824C07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C07F8"))) PPC_WEAK_FUNC(sub_824C07F8);
PPC_FUNC_IMPL(__imp__sub_824C07F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C0800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r7,r10,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r10,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xF;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824c083c
	if (ctx.cr0.eq) goto loc_824C083C;
	// li r9,256
	ctx.r9.s64 = 256;
loc_824C083C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c0878
	if (ctx.cr6.eq) goto loc_824C0878;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c0864
	if (ctx.cr0.eq) goto loc_824C0864;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-3024
	ctx.r10.s64 = ctx.r10.s64 + -3024;
	// b 0x824c086c
	goto loc_824C086C;
loc_824C0864:
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
loc_824C086C:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824C0878:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C0888;
	sub_824C0128(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c08b4
	if (!ctx.cr6.eq) goto loc_824C08B4;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c08b4
	if (!ctx.cr6.eq) goto loc_824C08B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x824c0910
	goto loc_824C0910;
loc_824C08B4:
	// rlwinm. r10,r29,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824c08c4
	if (ctx.cr0.eq) goto loc_824C08C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824C08C4:
	// rlwinm. r10,r29,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c08d0
	if (ctx.cr0.eq) goto loc_824C08D0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824C08D0:
	// rlwinm. r10,r29,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c08dc
	if (ctx.cr0.eq) goto loc_824C08DC;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824C08DC:
	// rlwinm. r10,r29,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c08e8
	if (ctx.cr0.eq) goto loc_824C08E8;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824C08E8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C0910:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C091C"))) PPC_WEAK_FUNC(sub_824C091C);
PPC_FUNC_IMPL(__imp__sub_824C091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0920"))) PPC_WEAK_FUNC(sub_824C0920);
PPC_FUNC_IMPL(__imp__sub_824C0920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C0928;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c09a0
	if (ctx.cr6.eq) goto loc_824C09A0;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-3008
	ctx.r9.s64 = ctx.r9.s64 + -3008;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824c09a4
	goto loc_824C09A4;
loc_824C09A0:
	// li r25,12816
	ctx.r25.s64 = 12816;
loc_824C09A4:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// bl 0x824bffd8
	ctx.lr = 0x824C09AC;
	sub_824BFFD8(ctx, base);
	// or r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 | ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C09C0;
	sub_824C0678(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c0a28
	if (!ctx.cr6.eq) goto loc_824C0A28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x824c0a28
	if (!ctx.cr6.eq) goto loc_824C0A28;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824c0a04
	if (ctx.cr6.eq) goto loc_824C0A04;
	// bl 0x8222e960
	ctx.lr = 0x824C0A00;
	sub_8222E960(ctx, base);
	// b 0x824c0a28
	goto loc_824C0A28;
loc_824C0A04:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r26,21
	ctx.r10.u64 = ctx.r26.u32 & 0x7FF;
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x824c0a24
	if (ctx.cr0.eq) goto loc_824C0A24;
	// bl 0x8222e960
	ctx.lr = 0x824C0A24;
	sub_8222E960(ctx, base);
loc_824C0A24:
	// li r29,1
	ctx.r29.s64 = 1;
loc_824C0A28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x824c0a54
	if (!ctx.cr6.eq) goto loc_824C0A54;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x824c0a54
	if (!ctx.cr6.eq) goto loc_824C0A54;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x824c0a84
	goto loc_824C0A84;
loc_824C0A54:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// or r8,r27,r25
	ctx.r8.u64 = ctx.r27.u64 | ctx.r25.u64;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
loc_824C0A84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824c0a98
	if (ctx.cr6.eq) goto loc_824C0A98;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C0A98:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0AA4"))) PPC_WEAK_FUNC(sub_824C0AA4);
PPC_FUNC_IMPL(__imp__sub_824C0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C0AA8"))) PPC_WEAK_FUNC(sub_824C0AA8);
PPC_FUNC_IMPL(__imp__sub_824C0AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C0AB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r28,21
	ctx.r4.u64 = ctx.r28.u32 & 0x7FF;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x824c0128
	ctx.lr = 0x824C0ADC;
	sub_824C0128(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824c0b50
	if (ctx.cr6.eq) goto loc_824C0B50;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824c0b24
	if (ctx.cr0.eq) goto loc_824C0B24;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824C0B24:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c0b30
	if (ctx.cr0.eq) goto loc_824C0B30;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_824C0B30:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c0b3c
	if (ctx.cr0.eq) goto loc_824C0B3C;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_824C0B3C:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c0b48
	if (ctx.cr0.eq) goto loc_824C0B48;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_824C0B48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c0b60
	goto loc_824C0B60;
loc_824C0B50:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824C0B60:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0B80"))) PPC_WEAK_FUNC(sub_824C0B80);
PPC_FUNC_IMPL(__imp__sub_824C0B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C0B88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r9,r27,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r27,21
	ctx.r4.u64 = ctx.r27.u32 & 0x7FF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x824c0128
	ctx.lr = 0x824C0BC8;
	sub_824C0128(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c0c34
	if (ctx.cr6.eq) goto loc_824C0C34;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x824c0c04
	if (ctx.cr0.eq) goto loc_824C0C04;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824C0C04:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c0c10
	if (ctx.cr0.eq) goto loc_824C0C10;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824C0C10:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c0c1c
	if (ctx.cr0.eq) goto loc_824C0C1C;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824C0C1C:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c0c28
	if (ctx.cr0.eq) goto loc_824C0C28;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_824C0C28:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x824c0c48
	goto loc_824C0C48;
loc_824C0C34:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824C0C48:
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// beq cr6,0x824c0c64
	if (ctx.cr6.eq) goto loc_824C0C64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824C0C64:
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-3008
	ctx.r11.s64 = ctx.r11.s64 + -3008;
	// bne cr6,0x824c0c94
	if (!ctx.cr6.eq) goto loc_824C0C94;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824c0c94
	if (!ctx.cr6.eq) goto loc_824C0C94;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x824c0cf0
	goto loc_824C0CF0;
loc_824C0C94:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r31,68
	ctx.r31.s64 = 4456448;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r5,r5,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_824C0CF0:
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824c0d4c
	if (ctx.cr6.eq) goto loc_824C0D4C;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x824c0d54
	goto loc_824C0D54;
loc_824C0D4C:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
loc_824C0D54:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0D68"))) PPC_WEAK_FUNC(sub_824C0D68);
PPC_FUNC_IMPL(__imp__sub_824C0D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C0D70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r9,71
	ctx.r9.s64 = 71;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r3,r8,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// bl 0x824c0128
	ctx.lr = 0x824C0DB4;
	sub_824C0128(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r27,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r27,21
	ctx.r27.u64 = ctx.r27.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c0dd0
	if (ctx.cr0.eq) goto loc_824C0DD0;
	// bl 0x8222e960
	ctx.lr = 0x824C0DD0;
	sub_8222E960(ctx, base);
loc_824C0DD0:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c0e38
	if (ctx.cr6.eq) goto loc_824C0E38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r29,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// beq 0x824c0e08
	if (ctx.cr0.eq) goto loc_824C0E08;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824C0E08:
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824c0e14
	if (ctx.cr0.eq) goto loc_824C0E14;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824C0E14:
	// rlwinm. r9,r29,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824c0e20
	if (ctx.cr0.eq) goto loc_824C0E20;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824C0E20:
	// rlwinm. r9,r29,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824c0e2c
	if (ctx.cr0.eq) goto loc_824C0E2C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824C0E2C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x824c0e4c
	goto loc_824C0E4C;
loc_824C0E38:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r30,r10,16,10,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r30.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r30,10
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_824C0E4C:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r9,-3008
	ctx.r9.s64 = ctx.r9.s64 + -3008;
	// rlwinm r6,r8,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r5,r28,18,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0xC;
	// rlwimi r27,r7,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C0EB8"))) PPC_WEAK_FUNC(sub_824C0EB8);
PPC_FUNC_IMPL(__imp__sub_824C0EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x824C0EC0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r17,r11,0,3,3
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm r16,r11,0,1,1
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824c0f04
	if (!ctx.cr0.eq) goto loc_824C0F04;
	// bl 0x8222e960
	ctx.lr = 0x824C0F04;
	sub_8222E960(ctx, base);
loc_824C0F04:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// ori r23,r11,512
	ctx.r23.u64 = ctx.r11.u64 | 512;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x824c0f74
	if (!ctx.cr6.lt) goto loc_824C0F74;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824c0f74
	if (!ctx.cr6.eq) goto loc_824C0F74;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c0f54
	if (!ctx.cr6.eq) goto loc_824C0F54;
	// bl 0x8222e960
	ctx.lr = 0x824C0F54;
	sub_8222E960(ctx, base);
loc_824C0F54:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x824c0f60
	if (ctx.cr6.eq) goto loc_824C0F60;
	// bl 0x8222e960
	ctx.lr = 0x824C0F60;
	sub_8222E960(ctx, base);
loc_824C0F60:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
loc_824C0F74:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x824c0fa8
	if (ctx.cr6.eq) goto loc_824C0FA8;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	ctx.r27.u64 = ctx.r27.u64 | 33;
	// bge cr6,0x824c0fac
	if (!ctx.cr6.lt) goto loc_824C0FAC;
	// bl 0x8222e960
	ctx.lr = 0x824C0FA4;
	sub_8222E960(ctx, base);
	// b 0x824c0fac
	goto loc_824C0FAC;
loc_824C0FA8:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C0FAC:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x824c0fd0
	if (!ctx.cr6.eq) goto loc_824C0FD0;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x824c0fc8
	if (ctx.cr6.eq) goto loc_824C0FC8;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_824C0FC8:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x824c10d0
	goto loc_824C10D0;
loc_824C0FD0:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// bne cr6,0x824c1044
	if (!ctx.cr6.eq) goto loc_824C1044;
	// li r31,69
	ctx.r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 20, ctx.xer);
	// beq cr6,0x824c1030
	if (ctx.cr6.eq) goto loc_824C1030;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 21, ctx.xer);
	// beq cr6,0x824c1024
	if (ctx.cr6.eq) goto loc_824C1024;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 22, ctx.xer);
	// beq cr6,0x824c101c
	if (ctx.cr6.eq) goto loc_824C101C;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 23, ctx.xer);
	// beq cr6,0x824c1014
	if (ctx.cr6.eq) goto loc_824C1014;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 24, ctx.xer);
	// beq cr6,0x824c100c
	if (ctx.cr6.eq) goto loc_824C100C;
	// bl 0x8222e960
	ctx.lr = 0x824C1008;
	sub_8222E960(ctx, base);
	// b 0x824c1034
	goto loc_824C1034;
loc_824C100C:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x824c1028
	goto loc_824C1028;
loc_824C1014:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x824c1028
	goto loc_824C1028;
loc_824C101C:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x824c1028
	goto loc_824C1028;
loc_824C1024:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_824C1028:
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x824c1034
	goto loc_824C1034;
loc_824C1030:
	// li r31,69
	ctx.r31.s64 = 69;
loc_824C1034:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824c10dc
	goto loc_824C10DC;
loc_824C1044:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 61, ctx.xer);
	// beq cr6,0x824c10cc
	if (ctx.cr6.eq) goto loc_824C10CC;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// beq cr6,0x824c10cc
	if (ctx.cr6.eq) goto loc_824C10CC;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// beq cr6,0x824c10cc
	if (ctx.cr6.eq) goto loc_824C10CC;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 81, ctx.xer);
	// beq cr6,0x824c10b8
	if (ctx.cr6.eq) goto loc_824C10B8;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 85, ctx.xer);
	// beq cr6,0x824c10b8
	if (ctx.cr6.eq) goto loc_824C10B8;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 37, ctx.xer);
	// beq cr6,0x824c107c
	if (ctx.cr6.eq) goto loc_824C107C;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bne cr6,0x824c10cc
	if (!ctx.cr6.eq) goto loc_824C10CC;
loc_824C107C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c1094
	if (!ctx.cr6.eq) goto loc_824C1094;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824c10a4
	goto loc_824C10A4;
loc_824C1094:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x824c10a4
	if (ctx.cr6.eq) goto loc_824C10A4;
	// rlwinm r11,r19,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 10) & 0x1;
loc_824C10A4:
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x824c10dc
	goto loc_824C10DC;
loc_824C10B8:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwimi r30,r25,17,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 17) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x824c10dc
	goto loc_824C10DC;
loc_824C10CC:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
loc_824C10D0:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_824C10DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C10EC;
	sub_824C07F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c10fc
	if (!ctx.cr0.eq) goto loc_824C10FC;
	// bl 0x8222e960
	ctx.lr = 0x824C10FC;
	sub_8222E960(ctx, base);
loc_824C10FC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c112c
	if (!ctx.cr6.eq) goto loc_824C112C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1124
	if (!ctx.cr0.eq) goto loc_824C1124;
	// bl 0x8222e960
	ctx.lr = 0x824C1124;
	sub_8222E960(ctx, base);
loc_824C1124:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C112C:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x824c1154
	if (ctx.cr6.eq) goto loc_824C1154;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 15, ctx.xer);
	// beq cr6,0x824c1154
	if (ctx.cr6.eq) goto loc_824C1154;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x824c1154
	if (ctx.cr6.eq) goto loc_824C1154;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 37, ctx.xer);
	// beq cr6,0x824c11ec
	if (ctx.cr6.eq) goto loc_824C11EC;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 79, ctx.xer);
	// bne cr6,0x824c11c8
	if (!ctx.cr6.eq) goto loc_824C11C8;
loc_824C1154:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c1238
	if (ctx.cr6.eq) goto loc_824C1238;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c1230
	if (ctx.cr6.eq) goto loc_824C1230;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c1224
	if (ctx.cr6.eq) goto loc_824C1224;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c1218
	if (ctx.cr6.eq) goto loc_824C1218;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824c123c
	if (!ctx.cr6.eq) goto loc_824C123C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x824c121c
	goto loc_824C121C;
loc_824C119C:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c11c8
	if (!ctx.cr6.eq) goto loc_824C11C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c11c0
	if (!ctx.cr0.eq) goto loc_824C11C0;
	// bl 0x8222e960
	ctx.lr = 0x824C11C0;
	sub_8222E960(ctx, base);
loc_824C11C0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C11C8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C11DC;
	sub_824C0920(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c119c
	if (!ctx.cr0.eq) goto loc_824C119C;
	// b 0x824c12bc
	goto loc_824C12BC;
loc_824C11EC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C1200;
	sub_824C0920(ctx, base);
	// b 0x824c1208
	goto loc_824C1208;
loc_824C1204:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C1208:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1204
	if (!ctx.cr0.eq) goto loc_824C1204;
	// b 0x824c12bc
	goto loc_824C12BC;
loc_824C1218:
	// li r11,7
	ctx.r11.s64 = 7;
loc_824C121C:
	// rlwimi r30,r11,24,4,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF000000) | (ctx.r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x824c123c
	goto loc_824C123C;
loc_824C1224:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	ctx.r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x824c123c
	goto loc_824C123C;
loc_824C1230:
	// rlwimi r30,r25,25,6,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0x3000000) | (ctx.r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x824c123c
	goto loc_824C123C;
loc_824C1238:
	// rlwinm r30,r30,0,8,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_824C123C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C1250;
	sub_824C0920(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bne cr6,0x824c12ac
	if (!ctx.cr6.eq) goto loc_824C12AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1268
	if (!ctx.cr0.eq) goto loc_824C1268;
	// bl 0x8222e960
	ctx.lr = 0x824C1268;
	sub_8222E960(ctx, base);
loc_824C1268:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c1298
	if (!ctx.cr6.eq) goto loc_824C1298;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1290
	if (!ctx.cr0.eq) goto loc_824C1290;
	// bl 0x8222e960
	ctx.lr = 0x824C1290;
	sub_8222E960(ctx, base);
loc_824C1290:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C1298:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C12AC;
	sub_824C0920(ctx, base);
loc_824C12AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c12bc
	if (ctx.cr0.eq) goto loc_824C12BC;
	// bl 0x8222e960
	ctx.lr = 0x824C12BC;
	sub_8222E960(ctx, base);
loc_824C12BC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x824c12dc
	if (ctx.cr6.eq) goto loc_824C12DC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x824c0b80
	ctx.lr = 0x824C12DC;
	sub_824C0B80(ctx, base);
loc_824C12DC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x824c1330
	if (ctx.cr6.eq) goto loc_824C1330;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x824c12f0
	if (ctx.cr6.lt) goto loc_824C12F0;
	// bl 0x8222e960
	ctx.lr = 0x824C12F0;
	sub_8222E960(ctx, base);
loc_824C12F0:
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824c0aa8
	ctx.lr = 0x824C1314;
	sub_824C0AA8(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c1330
	if (!ctx.cr6.gt) goto loc_824C1330;
	// bl 0x8222e960
	ctx.lr = 0x824C1330;
	sub_8222E960(ctx, base);
loc_824C1330:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1344"))) PPC_WEAK_FUNC(sub_824C1344);
PPC_FUNC_IMPL(__imp__sub_824C1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1348"))) PPC_WEAK_FUNC(sub_824C1348);
PPC_FUNC_IMPL(__imp__sub_824C1348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x824C1350;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c137c
	if (!ctx.cr6.lt) goto loc_824C137C;
	// bl 0x8222e960
	ctx.lr = 0x824C137C;
	sub_8222E960(ctx, base);
loc_824C137C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x824c13b8
	if (!ctx.cr6.eq) goto loc_824C13B8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824c13b4
	if (!ctx.cr6.eq) goto loc_824C13B4;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x824c13c4
	goto loc_824C13C4;
loc_824C13B4:
	// li r28,83
	ctx.r28.s64 = 83;
loc_824C13B8:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x824c1824
	if (ctx.cr6.gt) goto loc_824C1824;
	// beq cr6,0x824c17e4
	if (ctx.cr6.eq) goto loc_824C17E4;
loc_824C13C4:
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x824c1824
	if (ctx.cr6.gt) goto loc_824C1824;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-10680
	ctx.r12.s64 = ctx.r12.s64 + -10680;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,5112
	ctx.r12.s64 = ctx.r12.s64 + 5112;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824C13F8;
	case 1:
		goto loc_824C1460;
	case 2:
		goto loc_824C164C;
	case 3:
		goto loc_824C163C;
	case 4:
		goto loc_824C163C;
	case 5:
		goto loc_824C16D8;
	case 6:
		goto loc_824C1824;
	case 7:
		goto loc_824C1824;
	case 8:
		goto loc_824C1824;
	case 9:
		goto loc_824C1824;
	case 10:
		goto loc_824C1824;
	case 11:
		goto loc_824C1824;
	case 12:
		goto loc_824C1824;
	case 13:
		goto loc_824C1678;
	case 14:
		goto loc_824C163C;
	case 15:
		goto loc_824C1740;
	case 16:
		goto loc_824C1824;
	case 17:
		goto loc_824C159C;
	case 18:
		goto loc_824C15F4;
	case 19:
		goto loc_824C163C;
	default:
		__builtin_unreachable();
	}
loc_824C13F8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r10,4608
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4608, ctx.xer);
	// beq cr6,0x824c1428
	if (ctx.cr6.eq) goto loc_824C1428;
	// bl 0x8222e960
	ctx.lr = 0x824C1428;
	sub_8222E960(ctx, base);
loc_824C1428:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x824c1434
	if (ctx.cr6.lt) goto loc_824C1434;
	// bl 0x8222e960
	ctx.lr = 0x824C1434;
	sub_8222E960(ctx, base);
loc_824C1434:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c1450
	if (ctx.cr6.lt) goto loc_824C1450;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c1450
	if (!ctx.cr6.lt) goto loc_824C1450;
	// bl 0x8222e960
	ctx.lr = 0x824C1450;
	sub_8222E960(ctx, base);
loc_824C1450:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C1460:
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r29,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r10,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x824c1490
	if (ctx.cr6.eq) goto loc_824C1490;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x824c1490
	if (ctx.cr6.eq) goto loc_824C1490;
	// bl 0x8222e960
	ctx.lr = 0x824C1490;
	sub_8222E960(ctx, base);
loc_824C1490:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c14a0
	if (!ctx.cr6.eq) goto loc_824C14A0;
	// bl 0x8222e960
	ctx.lr = 0x824C14A0;
	sub_8222E960(ctx, base);
loc_824C14A0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r30,r28,21
	ctx.r30.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824c14bc
	if (ctx.cr6.eq) goto loc_824C14BC;
	// bl 0x8222e960
	ctx.lr = 0x824C14BC;
	sub_8222E960(ctx, base);
loc_824C14BC:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x824c14c8
	if (ctx.cr6.lt) goto loc_824C14C8;
	// bl 0x8222e960
	ctx.lr = 0x824C14C8;
	sub_8222E960(ctx, base);
loc_824C14C8:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x824c14e4
	if (ctx.cr6.lt) goto loc_824C14E4;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c14e4
	if (!ctx.cr6.lt) goto loc_824C14E4;
	// bl 0x8222e960
	ctx.lr = 0x824C14E4;
	sub_8222E960(ctx, base);
loc_824C14E4:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x824c1520
	if (!ctx.cr6.eq) goto loc_824C1520;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0228
	ctx.lr = 0x824C14FC;
	sub_824C0228(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824c1590
	goto loc_824C1590;
loc_824C1520:
	// rlwinm r10,r29,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r29,21
	ctx.r11.u64 = ctx.r29.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824c1580
	if (!ctx.cr6.eq) goto loc_824C1580;
	// li r9,53
	ctx.r9.s64 = 53;
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,41
	ctx.r7.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C1580:
	// li r9,9
	ctx.r9.s64 = 9;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_824C1590:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C159C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c15ac
	if (!ctx.cr6.eq) goto loc_824C15AC;
	// bl 0x8222e960
	ctx.lr = 0x824C15AC;
	sub_8222E960(ctx, base);
loc_824C15AC:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x824c0438
	ctx.lr = 0x824C15B8;
	sub_824C0438(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c163c
	if (ctx.cr0.eq) goto loc_824C163C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c163c
	if (ctx.cr6.eq) goto loc_824C163C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r10,41
	ctx.r10.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C15F4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c1604
	if (!ctx.cr6.eq) goto loc_824C1604;
	// bl 0x8222e960
	ctx.lr = 0x824C1604;
	sub_8222E960(ctx, base);
loc_824C1604:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x824c0438
	ctx.lr = 0x824C1610;
	sub_824C0438(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c1630
	if (ctx.cr0.eq) goto loc_824C1630;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c1630
	if (ctx.cr6.eq) goto loc_824C1630;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_824C1630:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_824C163C:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x824c1828
	goto loc_824C1828;
loc_824C164C:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824c166c
	if (ctx.cr6.eq) goto loc_824C166C;
	// bl 0x8222e960
	ctx.lr = 0x824C166C;
	sub_8222E960(ctx, base);
loc_824C166C:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c1678
	if (ctx.cr0.eq) goto loc_824C1678;
	// bl 0x8222e960
	ctx.lr = 0x824C1678;
	sub_8222E960(ctx, base);
loc_824C1678:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x824c1698
	if (ctx.cr6.eq) goto loc_824C1698;
	// bl 0x8222e960
	ctx.lr = 0x824C1698;
	sub_8222E960(ctx, base);
loc_824C1698:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824c16a8
	if (ctx.cr6.lt) goto loc_824C16A8;
	// bl 0x8222e960
	ctx.lr = 0x824C16A8;
	sub_8222E960(ctx, base);
loc_824C16A8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C16D0;
	sub_824C0920(ctx, base);
loc_824C16D0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C16D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824c16fc
	if (ctx.cr6.eq) goto loc_824C16FC;
	// bl 0x8222e960
	ctx.lr = 0x824C16FC;
	sub_8222E960(ctx, base);
loc_824C16FC:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x824c1708
	if (ctx.cr6.lt) goto loc_824C1708;
	// bl 0x8222e960
	ctx.lr = 0x824C1708;
	sub_8222E960(ctx, base);
loc_824C1708:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x824c1724
	if (ctx.cr6.lt) goto loc_824C1724;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c1724
	if (!ctx.cr6.lt) goto loc_824C1724;
	// bl 0x8222e960
	ctx.lr = 0x824C1724;
	sub_8222E960(ctx, base);
loc_824C1724:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x824c1828
	goto loc_824C1828;
loc_824C1740:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c1764
	if (!ctx.cr6.eq) goto loc_824C1764;
	// bl 0x8222e960
	ctx.lr = 0x824C1764;
	sub_8222E960(ctx, base);
loc_824C1764:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x824c1784
	if (ctx.cr6.eq) goto loc_824C1784;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x824c178c
	if (ctx.cr6.eq) goto loc_824C178C;
	// bl 0x8222e960
	ctx.lr = 0x824C1784;
	sub_8222E960(ctx, base);
loc_824C1784:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x824c1798
	if (!ctx.cr6.eq) goto loc_824C1798;
loc_824C178C:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824c1818
	goto loc_824C1818;
loc_824C1798:
	// li r10,53
	ctx.r10.s64 = 53;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824c1828
	if (!ctx.cr6.eq) goto loc_824C1828;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x824c05e0
	ctx.lr = 0x824C17D8;
	sub_824C05E0(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// b 0x824c1828
	goto loc_824C1828;
loc_824C17E4:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x824c1804
	if (ctx.cr6.eq) goto loc_824C1804;
	// bl 0x8222e960
	ctx.lr = 0x824C1804;
	sub_8222E960(ctx, base);
loc_824C1804:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c1810
	if (ctx.cr0.eq) goto loc_824C1810;
	// bl 0x8222e960
	ctx.lr = 0x824C1810;
	sub_8222E960(ctx, base);
loc_824C1810:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C1818:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x824c0228
	ctx.lr = 0x824C1820;
	sub_824C0228(ctx, base);
	// b 0x824c16d0
	goto loc_824C16D0;
loc_824C1824:
	// bl 0x8222e960
	ctx.lr = 0x824C1828;
	sub_8222E960(ctx, base);
loc_824C1828:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1838"))) PPC_WEAK_FUNC(sub_824C1838);
PPC_FUNC_IMPL(__imp__sub_824C1838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C1840;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824c18cc
	if (ctx.cr6.eq) goto loc_824C18CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824c18c4
	if (ctx.cr6.eq) goto loc_824C18C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824c18bc
	if (ctx.cr6.eq) goto loc_824C18BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824c18b4
	if (ctx.cr6.eq) goto loc_824C18B4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x824c18ac
	if (ctx.cr6.eq) goto loc_824C18AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x824c18a4
	if (ctx.cr6.eq) goto loc_824C18A4;
	// bl 0x8222e960
	ctx.lr = 0x824C18A0;
	sub_8222E960(ctx, base);
	// b 0x824c18d4
	goto loc_824C18D4;
loc_824C18A4:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x824c18d4
	goto loc_824C18D4;
loc_824C18AC:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x824c18d4
	goto loc_824C18D4;
loc_824C18B4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x824c18d0
	goto loc_824C18D0;
loc_824C18BC:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x824c18d4
	goto loc_824C18D4;
loc_824C18C4:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x824c18d4
	goto loc_824C18D4;
loc_824C18CC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_824C18D0:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_824C18D4:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// bne cr6,0x824c1984
	if (!ctx.cr6.eq) goto loc_824C1984;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x824c190c
	if (ctx.cr6.eq) goto loc_824C190C;
	// bl 0x8222e960
	ctx.lr = 0x824C190C;
	sub_8222E960(ctx, base);
loc_824C190C:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c1930
	if (!ctx.cr6.eq) goto loc_824C1930;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x824c197c
	goto loc_824C197C;
loc_824C1930:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824c1950
	if (ctx.cr0.eq) goto loc_824C1950;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_824C1950:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c195c
	if (ctx.cr0.eq) goto loc_824C195C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824C195C:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c1968
	if (ctx.cr0.eq) goto loc_824C1968;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824C1968:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c1974
	if (ctx.cr0.eq) goto loc_824C1974;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824C1974:
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_824C197C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x824c1998
	goto loc_824C1998;
loc_824C1984:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x824c1998
	if (!ctx.cr6.eq) goto loc_824C1998;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_824C1998:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c19f4
	if (ctx.cr0.eq) goto loc_824C19F4;
loc_824C19A4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c19d0
	if (!ctx.cr6.eq) goto loc_824C19D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c19c8
	if (!ctx.cr0.eq) goto loc_824C19C8;
	// bl 0x8222e960
	ctx.lr = 0x824C19C8;
	sub_8222E960(ctx, base);
loc_824C19C8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_824C19D0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C19E4;
	sub_824C0920(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c19a4
	if (!ctx.cr0.eq) goto loc_824C19A4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C19F4:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1A04"))) PPC_WEAK_FUNC(sub_824C1A04);
PPC_FUNC_IMPL(__imp__sub_824C1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C1A08"))) PPC_WEAK_FUNC(sub_824C1A08);
PPC_FUNC_IMPL(__imp__sub_824C1A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C1A10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c1a38
	if (ctx.cr6.lt) goto loc_824C1A38;
	// bl 0x8222e960
	ctx.lr = 0x824C1A38;
	sub_8222E960(ctx, base);
loc_824C1A38:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// bgt cr6,0x824c1b20
	if (ctx.cr6.gt) goto loc_824C1B20;
	// rlwinm. r9,r31,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// li r10,256
	ctx.r10.s64 = 256;
	// beq 0x824c1a74
	if (ctx.cr0.eq) goto loc_824C1A74;
	// li r10,257
	ctx.r10.s64 = 257;
loc_824C1A74:
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824c1a80
	if (ctx.cr0.eq) goto loc_824C1A80;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824C1A80:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c1a8c
	if (ctx.cr0.eq) goto loc_824C1A8C;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824C1A8C:
	// ori r9,r10,192
	ctx.r9.u64 = ctx.r10.u64 | 192;
	// rlwinm. r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824c1acc
	if (ctx.cr0.eq) goto loc_824C1ACC;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c1ab8
	if (ctx.cr0.eq) goto loc_824C1AB8;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-3024
	ctx.r10.s64 = ctx.r10.s64 + -3024;
	// b 0x824c1ac0
	goto loc_824C1AC0;
loc_824C1AB8:
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
loc_824C1AC0:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824C1ACC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// or r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824c1ae8
	if (ctx.cr6.eq) goto loc_824C1AE8;
	// bl 0x8222e960
	ctx.lr = 0x824C1AE8;
	sub_8222E960(ctx, base);
loc_824C1AE8:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// oris r8,r10,81
	ctx.r8.u64 = ctx.r10.u64 | 5308416;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// oris r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 1114112;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824c1b8c
	goto loc_824C1B8C;
loc_824C1B20:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824c1b40
	if (ctx.cr6.eq) goto loc_824C1B40;
	// bl 0x8222e960
	ctx.lr = 0x824C1B40;
	sub_8222E960(ctx, base);
loc_824C1B40:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C1B60;
	sub_824C07F8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C1B78;
	sub_824C0920(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c1b8c
	if (ctx.cr6.eq) goto loc_824C1B8C;
	// bl 0x8222e960
	ctx.lr = 0x824C1B8C;
	sub_8222E960(ctx, base);
loc_824C1B8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1BA0"))) PPC_WEAK_FUNC(sub_824C1BA0);
PPC_FUNC_IMPL(__imp__sub_824C1BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x824C1BA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r27,r11,0,3,3
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x824c1be0
	if (!ctx.cr0.eq) goto loc_824C1BE0;
	// bl 0x8222e960
	ctx.lr = 0x824C1BE0;
	sub_8222E960(ctx, base);
loc_824C1BE0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x824c1c20
	if (ctx.cr6.eq) goto loc_824C1C20;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1c08
	if (!ctx.cr0.eq) goto loc_824C1C08;
	// bl 0x8222e960
	ctx.lr = 0x824C1C08;
	sub_8222E960(ctx, base);
loc_824C1C08:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824c1c14
	if (!ctx.cr6.lt) goto loc_824C1C14;
	// bl 0x8222e960
	ctx.lr = 0x824C1C14;
	sub_8222E960(ctx, base);
loc_824C1C14:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x824c1c24
	goto loc_824C1C24;
loc_824C1C20:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C1C24:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c1c40
	if (ctx.cr6.gt) goto loc_824C1C40;
	// clrlwi r3,r29,21
	ctx.r3.u64 = ctx.r29.u32 & 0x7FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x824c1c54
	goto loc_824C1C54;
loc_824C1C40:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C1C50;
	sub_824C0678(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C1C54:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824c1c8c
	if (!ctx.cr6.lt) goto loc_824C1C8C;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r10,r9,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,55
	ctx.r8.s64 = 55;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,21008
	ctx.r9.s64 = 21008;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c1dac
	goto loc_824C1DAC;
loc_824C1C8C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x824c1d94
	if (ctx.cr6.eq) goto loc_824C1D94;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// ori r8,r10,33
	ctx.r8.u64 = ctx.r10.u64 | 33;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r25,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824c1d28
	if (ctx.cr6.eq) goto loc_824C1D28;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r7,-32055
	ctx.r7.s64 = -2100756480;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// addi r7,r7,-3008
	ctx.r7.s64 = ctx.r7.s64 + -3008;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x824c1d38
	goto loc_824C1D38;
loc_824C1D28:
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C1D38:
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xF000000;
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r8,21845
	ctx.r8.s64 = 21845;
	// bne cr6,0x824c1d70
	if (!ctx.cr6.eq) goto loc_824C1D70;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x824c1d88
	goto loc_824C1D88;
loc_824C1D70:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824C1D88:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824C1D94:
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r10,55
	ctx.r10.s64 = 55;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_824C1DAC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C1DC0"))) PPC_WEAK_FUNC(sub_824C1DC0);
PPC_FUNC_IMPL(__imp__sub_824C1DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824C1DC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r14,r11,0,3,3
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x824c1e04
	if (!ctx.cr0.eq) goto loc_824C1E04;
	// bl 0x8222e960
	ctx.lr = 0x824C1E04;
	sub_8222E960(ctx, base);
loc_824C1E04:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c1e28
	if (!ctx.cr6.eq) goto loc_824C1E28;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x824c1e38
	goto loc_824C1E38;
loc_824C1E28:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x824c1e38
	if (ctx.cr6.eq) goto loc_824C1E38;
	// rlwinm r29,r24,10,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0x1;
loc_824C1E38:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r22,r11,512
	ctx.r22.u64 = ctx.r11.u64 | 512;
	// ori r18,r10,33
	ctx.r18.u64 = ctx.r10.u64 | 33;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x824c1e88
	if (ctx.cr6.eq) goto loc_824C1E88;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1e60
	if (!ctx.cr0.eq) goto loc_824C1E60;
	// bl 0x8222e960
	ctx.lr = 0x824C1E60;
	sub_8222E960(ctx, base);
loc_824C1E60:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x824c1e6c
	if (!ctx.cr6.lt) goto loc_824C1E6C;
	// bl 0x8222e960
	ctx.lr = 0x824C1E6C;
	sub_8222E960(ctx, base);
loc_824C1E6C:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
	// b 0x824c1e8c
	goto loc_824C1E8C;
loc_824C1E88:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C1E8C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq 0x824c1f20
	if (ctx.cr0.eq) goto loc_824C1F20;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_824C1EAC:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x824c1eb8
	if (ctx.cr6.lt) goto loc_824C1EB8;
	// bl 0x8222e960
	ctx.lr = 0x824C1EB8;
	sub_8222E960(ctx, base);
loc_824C1EB8:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c1f08
	if (!ctx.cr6.eq) goto loc_824C1F08;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x824c1eec
	if (ctx.cr6.gt) goto loc_824C1EEC;
	// bl 0x8222e960
	ctx.lr = 0x824C1EEC;
	sub_8222E960(ctx, base);
loc_824C1EEC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1efc
	if (!ctx.cr0.eq) goto loc_824C1EFC;
	// bl 0x8222e960
	ctx.lr = 0x824C1EFC;
	sub_8222E960(ctx, base);
loc_824C1EFC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_824C1F08:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c1eac
	if (!ctx.cr0.eq) goto loc_824C1EAC;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C1F20:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x824c1f50
	if (ctx.cr6.lt) goto loc_824C1F50;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x824c1f3c
	if (!ctx.cr6.lt) goto loc_824C1F3C;
	// bl 0x8222e960
	ctx.lr = 0x824C1F3C;
	sub_8222E960(ctx, base);
loc_824C1F3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x824c1f54
	goto loc_824C1F54;
loc_824C1F50:
	// clrlwi r31,r15,21
	ctx.r31.u64 = ctx.r15.u32 & 0x7FF;
loc_824C1F54:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// rlwinm. r27,r26,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x824c1f78
	if (ctx.cr0.eq) goto loc_824C1F78;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x824c1f7c
	goto loc_824C1F7C;
loc_824C1F78:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_824C1F7C:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// bne cr6,0x824c1fe8
	if (!ctx.cr6.eq) goto loc_824C1FE8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824c1f98
	if (ctx.cr6.eq) goto loc_824C1F98;
	// bl 0x8222e960
	ctx.lr = 0x824C1F98;
	sub_8222E960(ctx, base);
loc_824C1F98:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c1fac
	if (ctx.cr6.lt) goto loc_824C1FAC;
	// bl 0x8222e960
	ctx.lr = 0x824C1FAC;
	sub_8222E960(ctx, base);
loc_824C1FAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C1FBC;
	sub_824C07F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r9,12816
	ctx.r10.u64 = ctx.r9.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824c213c
	goto loc_824C213C;
loc_824C1FE8:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x824c203c
	if (!ctx.cr6.eq) goto loc_824C203C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c2004
	if (ctx.cr6.eq) goto loc_824C2004;
	// bl 0x8222e960
	ctx.lr = 0x824C2004;
	sub_8222E960(ctx, base);
loc_824C2004:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824c2010
	if (ctx.cr6.eq) goto loc_824C2010;
	// bl 0x8222e960
	ctx.lr = 0x824C2010;
	sub_8222E960(ctx, base);
loc_824C2010:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C2020;
	sub_824C07F8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C2038;
	sub_824C0920(ctx, base);
	// b 0x824c213c
	goto loc_824C213C;
loc_824C203C:
	// rlwinm r29,r30,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x824c2050
	if (ctx.cr6.eq) goto loc_824C2050;
	// bl 0x8222e960
	ctx.lr = 0x824C2050;
	sub_8222E960(ctx, base);
loc_824C2050:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x824c205c
	if (!ctx.cr6.lt) goto loc_824C205C;
	// bl 0x8222e960
	ctx.lr = 0x824C205C;
	sub_8222E960(ctx, base);
loc_824C205C:
	// lis r28,228
	ctx.r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824c2084
	if (ctx.cr6.eq) goto loc_824C2084;
	// oris r24,r24,15
	ctx.r24.u64 = ctx.r24.u64 | 983040;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x824c2084
	if (!ctx.cr6.eq) goto loc_824C2084;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
loc_824C2084:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c2090
	if (ctx.cr0.eq) goto loc_824C2090;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_824C2090:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C20A0;
	sub_824C07F8(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C20BC;
	sub_824C0920(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824c20f8
	if (ctx.cr6.eq) goto loc_824C20F8;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c20d4
	if (ctx.cr0.eq) goto loc_824C20D4;
	// bl 0x8222e960
	ctx.lr = 0x824C20D4;
	sub_8222E960(ctx, base);
loc_824C20D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c20e0
	if (ctx.cr6.eq) goto loc_824C20E0;
	// bl 0x8222e960
	ctx.lr = 0x824C20E0;
	sub_8222E960(ctx, base);
loc_824C20E0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C20F8;
	sub_824C0920(ctx, base);
loc_824C20F8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x824c211c
	if (ctx.cr6.eq) goto loc_824C211C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824c0b80
	ctx.lr = 0x824C2118;
	sub_824C0B80(ctx, base);
	// b 0x824c213c
	goto loc_824C213C;
loc_824C211C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824c213c
	if (ctx.cr6.eq) goto loc_824C213C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824c0d68
	ctx.lr = 0x824C213C;
	sub_824C0D68(ctx, base);
loc_824C213C:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r20,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C2158"))) PPC_WEAK_FUNC(sub_824C2158);
PPC_FUNC_IMPL(__imp__sub_824C2158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x824C2160;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c2188
	if (!ctx.cr6.eq) goto loc_824C2188;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x824c2194
	goto loc_824C2194;
loc_824C2188:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824C2194:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824c21a8
	if (!ctx.cr6.lt) goto loc_824C21A8;
	// bl 0x8222e960
	ctx.lr = 0x824C21A8;
	sub_8222E960(ctx, base);
loc_824C21A8:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r20,r11,0,3,3
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824c21d0
	if (!ctx.cr0.eq) goto loc_824C21D0;
	// bl 0x8222e960
	ctx.lr = 0x824C21D0;
	sub_8222E960(ctx, base);
loc_824C21D0:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// beq cr6,0x824c2224
	if (ctx.cr6.eq) goto loc_824C2224;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c21fc
	if (!ctx.cr0.eq) goto loc_824C21FC;
	// bl 0x8222e960
	ctx.lr = 0x824C21FC;
	sub_8222E960(ctx, base);
loc_824C21FC:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x824c2208
	if (ctx.cr6.gt) goto loc_824C2208;
	// bl 0x8222e960
	ctx.lr = 0x824C2208;
	sub_8222E960(ctx, base);
loc_824C2208:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x824c2228
	goto loc_824C2228;
loc_824C2224:
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C2228:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c22a0
	if (ctx.cr0.eq) goto loc_824C22A0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_824C223C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824c2280
	if (!ctx.cr6.eq) goto loc_824C2280;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c2274
	if (!ctx.cr0.eq) goto loc_824C2274;
	// bl 0x8222e960
	ctx.lr = 0x824C2274;
	sub_8222E960(ctx, base);
loc_824C2274:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_824C2280:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c223c
	if (!ctx.cr0.eq) goto loc_824C223C;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x824c22a0
	if (!ctx.cr6.gt) goto loc_824C22A0;
	// bl 0x8222e960
	ctx.lr = 0x824C22A0;
	sub_8222E960(ctx, base);
loc_824C22A0:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x824c22c8
	if (!ctx.cr6.eq) goto loc_824C22C8;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x824c22d0
	goto loc_824C22D0;
loc_824C22C8:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_824C22D0:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824c2304
	if (ctx.cr6.eq) goto loc_824C2304;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x824c2304
	if (!ctx.cr6.eq) goto loc_824C2304;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_824C2304:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C2314;
	sub_824C07F8(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C2334;
	sub_824C0920(ctx, base);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// bne cr6,0x824c2358
	if (!ctx.cr6.eq) goto loc_824C2358;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c234c
	if (ctx.cr0.eq) goto loc_824C234C;
	// bl 0x8222e960
	ctx.lr = 0x824C234C;
	sub_8222E960(ctx, base);
loc_824C234C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824c2384
	goto loc_824C2384;
loc_824C2358:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x824c2364
	if (ctx.cr6.eq) goto loc_824C2364;
	// bl 0x8222e960
	ctx.lr = 0x824C2364;
	sub_8222E960(ctx, base);
loc_824C2364:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824c0920
	ctx.lr = 0x824C237C;
	sub_824C0920(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_824C2384:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824c0920
	ctx.lr = 0x824C2394;
	sub_824C0920(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x824c23b8
	if (ctx.cr6.eq) goto loc_824C23B8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824c0b80
	ctx.lr = 0x824C23B4;
	sub_824C0B80(ctx, base);
	// b 0x824c23d8
	goto loc_824C23D8;
loc_824C23B8:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824c23d8
	if (ctx.cr6.eq) goto loc_824C23D8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824c0d68
	ctx.lr = 0x824C23D8;
	sub_824C0D68(ctx, base);
loc_824C23D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C23EC"))) PPC_WEAK_FUNC(sub_824C23EC);
PPC_FUNC_IMPL(__imp__sub_824C23EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C23F0"))) PPC_WEAK_FUNC(sub_824C23F0);
PPC_FUNC_IMPL(__imp__sub_824C23F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824C23F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c2424
	if (!ctx.cr6.eq) goto loc_824C2424;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x824c2430
	goto loc_824C2430;
loc_824C2424:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r17,r11,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824C2430:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c2444
	if (ctx.cr6.lt) goto loc_824C2444;
	// bl 0x8222e960
	ctx.lr = 0x824C2444;
	sub_8222E960(ctx, base);
loc_824C2444:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c2464
	if (!ctx.cr0.eq) goto loc_824C2464;
	// bl 0x8222e960
	ctx.lr = 0x824C2464;
	sub_8222E960(ctx, base);
loc_824C2464:
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi r30,r20,21
	ctx.r30.u64 = ctx.r20.u32 & 0x7FF;
	// rlwimi r10,r20,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r15,r11,4
	ctx.r15.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x824c2490
	if (ctx.cr6.eq) goto loc_824C2490;
	// bl 0x8222e960
	ctx.lr = 0x824C2490;
	sub_8222E960(ctx, base);
loc_824C2490:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C24A4;
	sub_824C0128(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// li r9,80
	ctx.r9.s64 = 80;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r7,r23,16,10,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3F0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r23,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r9,r30,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// or r22,r7,r8
	ctx.r22.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r9,r10,12816
	ctx.r9.u64 = ctx.r10.u64 | 12816;
	// li r25,33
	ctx.r25.s64 = 33;
	// rlwinm r10,r27,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824c256c
	if (ctx.cr6.eq) goto loc_824C256C;
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-3008
	ctx.r9.s64 = ctx.r9.s64 + -3008;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824c2570
	goto loc_824C2570;
loc_824C256C:
	// li r24,12816
	ctx.r24.s64 = 12816;
loc_824C2570:
	// rlwinm r3,r27,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF000000;
	// bl 0x824bffd8
	ctx.lr = 0x824C2578;
	sub_824BFFD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C258C;
	sub_824C0678(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c25bc
	if (!ctx.cr6.eq) goto loc_824C25BC;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x824c25bc
	if (!ctx.cr6.eq) goto loc_824C25BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x824c25e8
	goto loc_824C25E8;
loc_824C25BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// or r9,r28,r24
	ctx.r9.u64 = ctx.r28.u64 | ctx.r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C25E8:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// oris r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 65536;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824c2650
	if (!ctx.cr6.eq) goto loc_824C2650;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x824c2650
	if (!ctx.cr6.eq) goto loc_824C2650;
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x824c266c
	goto loc_824C266C;
loc_824C2650:
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_824C266C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r27,4369
	ctx.r27.s64 = 4369;
	// li r7,93
	ctx.r7.s64 = 93;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// rlwimi r10,r17,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r17.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x824c26c8
	if (ctx.cr6.eq) goto loc_824C26C8;
	// bl 0x8222e960
	ctx.lr = 0x824C26C8;
	sub_8222E960(ctx, base);
loc_824C26C8:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 67, ctx.xer);
	// bne cr6,0x824c26ec
	if (!ctx.cr6.eq) goto loc_824C26EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C26E0;
	sub_824C07F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x824c2858
	goto loc_824C2858;
loc_824C26EC:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 68, ctx.xer);
	// bne cr6,0x824c285c
	if (!ctx.cr6.eq) goto loc_824C285C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// li r8,272
	ctx.r8.s64 = 272;
	// ori r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 | 15;
	// rlwinm r7,r26,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r7,64
	ctx.r9.u64 = ctx.r7.u64 | 4194304;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// or r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 | ctx.r29.u64;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r5,73
	ctx.r5.s64 = 73;
	// oris r4,r9,65
	ctx.r4.u64 = ctx.r9.u64 | 4259840;
	// rlwinm. r3,r20,0,8,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824c2794
	if (ctx.cr0.eq) goto loc_824C2794;
	// li r9,256
	ctx.r9.s64 = 256;
loc_824C2794:
	// rlwinm. r8,r20,8,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// beq 0x824c27d0
	if (ctx.cr0.eq) goto loc_824C27D0;
	// rlwinm. r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824c27bc
	if (ctx.cr0.eq) goto loc_824C27BC;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// lis r7,-32055
	ctx.r7.s64 = -2100756480;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,-3024
	ctx.r7.s64 = ctx.r7.s64 + -3024;
	// b 0x824c27c4
	goto loc_824C27C4;
loc_824C27BC:
	// lis r7,-32055
	ctx.r7.s64 = -2100756480;
	// addi r7,r7,-3040
	ctx.r7.s64 = ctx.r7.s64 + -3040;
loc_824C27C4:
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
loc_824C27D0:
	// or. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824c27f4
	if (!ctx.cr0.eq) goto loc_824C27F4;
	// rlwinm r9,r20,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824c27f4
	if (!ctx.cr6.eq) goto loc_824C27F4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824c2840
	goto loc_824C2840;
loc_824C27F4:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r20,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r20,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// beq 0x824c2810
	if (ctx.cr0.eq) goto loc_824C2810;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824C2810:
	// rlwinm. r6,r8,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824c281c
	if (ctx.cr0.eq) goto loc_824C281C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824C281C:
	// rlwinm. r6,r8,0,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824c2828
	if (ctx.cr0.eq) goto loc_824C2828;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824C2828:
	// rlwinm. r8,r8,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c2834
	if (ctx.cr0.eq) goto loc_824C2834;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824C2834:
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_824C2840:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,8738
	ctx.r9.s64 = 8738;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_824C2858:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_824C285C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C2870"))) PPC_WEAK_FUNC(sub_824C2870);
PPC_FUNC_IMPL(__imp__sub_824C2870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824C2878;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c289c
	if (ctx.cr6.eq) goto loc_824C289C;
	// bl 0x8222e960
	ctx.lr = 0x824C289C;
	sub_8222E960(ctx, base);
loc_824C289C:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c28b8
	if (!ctx.cr0.eq) goto loc_824C28B8;
	// bl 0x8222e960
	ctx.lr = 0x824C28B8;
	sub_8222E960(ctx, base);
loc_824C28B8:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// clrlwi r27,r28,21
	ctx.r27.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r10,r28,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// bl 0x824c0128
	ctx.lr = 0x824C28E8;
	sub_824C0128(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r19,33
	ctx.r19.s64 = 33;
	// or r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// rlwinm. r7,r28,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x824c2920
	if (ctx.cr0.eq) goto loc_824C2920;
	// li r8,256
	ctx.r8.s64 = 256;
loc_824C2920:
	// rlwinm. r11,r28,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824c295c
	if (ctx.cr0.eq) goto loc_824C295C;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c2948
	if (ctx.cr0.eq) goto loc_824C2948;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-3024
	ctx.r10.s64 = ctx.r10.s64 + -3024;
	// b 0x824c2950
	goto loc_824C2950;
loc_824C2948:
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
loc_824C2950:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824C295C:
	// rlwinm. r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r29,r9,4
	ctx.r29.s64 = ctx.r9.s64 + 4;
	// beq 0x824c2978
	if (ctx.cr0.eq) goto loc_824C2978;
	// ori r11,r18,1
	ctx.r11.u64 = ctx.r18.u64 | 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x824c297c
	goto loc_824C297C;
loc_824C2978:
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
loc_824C297C:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r31,r10,-3008
	ctx.r31.s64 = ctx.r10.s64 + -3008;
	// beq cr6,0x824c29d8
	if (ctx.cr6.eq) goto loc_824C29D8;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x824c29dc
	goto loc_824C29DC;
loc_824C29D8:
	// li r20,12816
	ctx.r20.s64 = 12816;
loc_824C29DC:
	// rlwinm r26,r30,0,4,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824bffd8
	ctx.lr = 0x824C29E8;
	sub_824BFFD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C29FC;
	sub_824C0678(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x824c2a2c
	if (!ctx.cr6.eq) goto loc_824C2A2C;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x824c2a2c
	if (!ctx.cr6.eq) goto loc_824C2A2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x824c2a58
	goto loc_824C2A58;
loc_824C2A2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// or r9,r22,r20
	ctx.r9.u64 = ctx.r22.u64 | ctx.r20.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C2A58:
	// rlwinm r10,r30,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3F;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r8,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r7,r30,18,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xC;
	// oris r6,r27,1
	ctx.r6.u64 = ctx.r27.u64 | 65536;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r14,r31,29
	ctx.r14.u64 = ctx.r31.u32 & 0x7;
	// bl 0x824bffd8
	ctx.lr = 0x824C2AB8;
	sub_824BFFD8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C2ACC;
	sub_824C0678(ctx, base);
	// rlwinm r11,r31,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// or r8,r11,r14
	ctx.r8.u64 = ctx.r11.u64 | ctx.r14.u64;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// or r10,r8,r14
	ctx.r10.u64 = ctx.r8.u64 | ctx.r14.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 | ctx.r26.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r14
	ctx.r9.u64 = ctx.r7.u64 | ctx.r14.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm. r8,r28,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824c2b30
	if (ctx.cr0.eq) goto loc_824C2B30;
	// ori r9,r18,4
	ctx.r9.u64 = ctx.r18.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c2b34
	goto loc_824C2B34;
loc_824C2B30:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_824C2B34:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x824c2b58
	if (!ctx.cr6.eq) goto loc_824C2B58;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x824c2b58
	if (!ctx.cr6.eq) goto loc_824C2B58;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c2b74
	goto loc_824C2B74;
loc_824C2B58:
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r22,r20
	ctx.r8.u64 = ctx.r22.u64 | ctx.r20.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_824C2B74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r27,65
	ctx.r9.u64 = ctx.r27.u64 | 4259840;
	// rlwinm r8,r31,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x7;
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r31,0,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// stw r17,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C2BD0"))) PPC_WEAK_FUNC(sub_824C2BD0);
PPC_FUNC_IMPL(__imp__sub_824C2BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x824C2BD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c2bfc
	if (!ctx.cr6.eq) goto loc_824C2BFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x824c2c08
	goto loc_824C2C08;
loc_824C2BFC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824C2C08:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c2c1c
	if (ctx.cr6.lt) goto loc_824C2C1C;
	// bl 0x8222e960
	ctx.lr = 0x824C2C1C;
	sub_8222E960(ctx, base);
loc_824C2C1C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824c2c58
	if (ctx.cr6.eq) goto loc_824C2C58;
	// bl 0x8222e960
	ctx.lr = 0x824C2C58;
	sub_8222E960(ctx, base);
loc_824C2C58:
	// rlwimi r29,r25,8,23,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = ctx.r29.u32 & 0x1FF;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C2C84;
	sub_824C07F8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824c2c9c
	if (ctx.cr6.eq) goto loc_824C2C9C;
	// bl 0x8222e960
	ctx.lr = 0x824C2C9C;
	sub_8222E960(ctx, base);
loc_824C2C9C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C2CAC;
	sub_824C0678(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// bl 0x824bffd8
	ctx.lr = 0x824C2CB8;
	sub_824BFFD8(ctx, base);
	// rlwinm r31,r30,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c2d1c
	if (ctx.cr6.eq) goto loc_824C2D1C;
	// bl 0x8222e960
	ctx.lr = 0x824C2CD0;
	sub_8222E960(ctx, base);
	// rlwinm r11,r31,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-3008
	ctx.r10.s64 = ctx.r10.s64 + -3008;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r31,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x824c2d20
	goto loc_824C2D20;
loc_824C2D1C:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_824C2D20:
	// cmplwi cr6,r26,82
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 82, ctx.xer);
	// bne cr6,0x824c2d54
	if (!ctx.cr6.eq) goto loc_824C2D54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c2d54
	if (!ctx.cr6.eq) goto loc_824C2D54;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x824c2d54
	if (!ctx.cr6.eq) goto loc_824C2D54;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r10,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824c2db0
	goto loc_824C2DB0;
loc_824C2D54:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplwi cr6,r26,69
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 69, ctx.xer);
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x824c2d90
	if (!ctx.cr6.eq) goto loc_824C2D90;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x824c2da4
	goto loc_824C2DA4;
loc_824C2D90:
	// cmplwi cr6,r26,70
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 70, ctx.xer);
	// bne cr6,0x824c2da4
	if (!ctx.cr6.eq) goto loc_824C2DA4;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_824C2DA4:
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824C2DB0:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C2DC0"))) PPC_WEAK_FUNC(sub_824C2DC0);
PPC_FUNC_IMPL(__imp__sub_824C2DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C2DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c2dec
	if (ctx.cr6.lt) goto loc_824C2DEC;
	// bl 0x8222e960
	ctx.lr = 0x824C2DEC;
	sub_8222E960(ctx, base);
loc_824C2DEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r31,r10,21
	ctx.r31.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x824c2e24
	if (ctx.cr6.eq) goto loc_824C2E24;
	// bl 0x8222e960
	ctx.lr = 0x824C2E24;
	sub_8222E960(ctx, base);
loc_824C2E24:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C2E38;
	sub_824C0128(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,34
	ctx.r10.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C2E98;
	sub_824C0920(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C2EAC"))) PPC_WEAK_FUNC(sub_824C2EAC);
PPC_FUNC_IMPL(__imp__sub_824C2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C2EB0"))) PPC_WEAK_FUNC(sub_824C2EB0);
PPC_FUNC_IMPL(__imp__sub_824C2EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x824C2EB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c2edc
	if (ctx.cr6.lt) goto loc_824C2EDC;
	// bl 0x8222e960
	ctx.lr = 0x824C2EDC;
	sub_8222E960(ctx, base);
loc_824C2EDC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,21
	ctx.r29.u64 = ctx.r10.u32 & 0x7FF;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r28,r9,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r10,r11,-73
	ctx.r10.s64 = ctx.r11.s64 + -73;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824c2f28
	if (!ctx.cr6.eq) goto loc_824C2F28;
	// lhz r11,14(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 14);
loc_824C2F28:
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x824c2f40
	if (ctx.cr6.eq) goto loc_824C2F40;
	// bl 0x8222e960
	ctx.lr = 0x824C2F40;
	sub_8222E960(ctx, base);
loc_824C2F40:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C2F60;
	sub_824C0128(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// li r7,34
	ctx.r7.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// oris r10,r31,17
	ctx.r10.u64 = ctx.r31.u64 | 1114112;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C2FCC;
	sub_824C0920(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x824c3018
	if (ctx.cr6.eq) goto loc_824C3018;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// oris r8,r31,81
	ctx.r8.u64 = ctx.r31.u64 | 5308416;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c301c
	goto loc_824C301C;
loc_824C3018:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C301C:
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C302C"))) PPC_WEAK_FUNC(sub_824C302C);
PPC_FUNC_IMPL(__imp__sub_824C302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C3030"))) PPC_WEAK_FUNC(sub_824C3030);
PPC_FUNC_IMPL(__imp__sub_824C3030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x824C3038;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c305c
	if (!ctx.cr6.eq) goto loc_824C305C;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x824c3068
	goto loc_824C3068;
loc_824C305C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824C3068:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c307c
	if (ctx.cr6.lt) goto loc_824C307C;
	// bl 0x8222e960
	ctx.lr = 0x824C307C;
	sub_8222E960(ctx, base);
loc_824C307C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x824c30a0
	if (ctx.cr6.eq) goto loc_824C30A0;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x824c30a4
	if (!ctx.cr6.eq) goto loc_824C30A4;
loc_824C30A0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_824C30A4:
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r8,34
	ctx.r8.s64 = 34;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// clrlwi r27,r23,21
	ctx.r27.u64 = ctx.r23.u32 & 0x7FF;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwimi r9,r23,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwinm r24,r9,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x824c30dc
	if (ctx.cr6.eq) goto loc_824C30DC;
	// bl 0x8222e960
	ctx.lr = 0x824C30DC;
	sub_8222E960(ctx, base);
loc_824C30DC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C30F0;
	sub_824C0128(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x824c3104
	if (ctx.cr6.eq) goto loc_824C3104;
	// bl 0x8222e960
	ctx.lr = 0x824C3104;
	sub_8222E960(ctx, base);
loc_824C3104:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r31,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r20,r31,26
	ctx.r20.u64 = ctx.r31.u32 & 0x3F;
	// or r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 | ctx.r22.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x824c3148
	if (ctx.cr6.eq) goto loc_824C3148;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x824c3140
	if (ctx.cr6.eq) goto loc_824C3140;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x824c3140
	if (ctx.cr6.eq) goto loc_824C3140;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x824c314c
	goto loc_824C314C;
loc_824C3140:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x824c314c
	goto loc_824C314C;
loc_824C3148:
	// li r10,228
	ctx.r10.s64 = 228;
loc_824C314C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C3180;
	sub_824C0920(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r26,93
	ctx.r26.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x824c3230
	if (ctx.cr6.eq) goto loc_824C3230;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x824c3230
	if (ctx.cr6.eq) goto loc_824C3230;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x824c31f4
	if (ctx.cr6.eq) goto loc_824C31F4;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x824c3278
	if (!ctx.cr6.eq) goto loc_824C3278;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r10.u32);
	// lis r10,88
	ctx.r10.s64 = 5767168;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,257
	ctx.r8.s64 = 257;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r9,r7,12816
	ctx.r9.u64 = ctx.r7.u64 | 12816;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824c3404
	goto loc_824C3404;
loc_824C31F4:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x824c3288
	goto loc_824C3288;
loc_824C3230:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwimi r10,r19,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C3264;
	sub_824C07F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C3278:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x824c3288
	if (ctx.cr6.eq) goto loc_824C3288;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x824c3408
	if (!ctx.cr6.eq) goto loc_824C3408;
loc_824C3288:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824c32a4
	if (ctx.cr6.eq) goto loc_824C32A4;
	// bl 0x8222e960
	ctx.lr = 0x824C32A4;
	sub_8222E960(ctx, base);
loc_824C32A4:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824c32d4
	if (!ctx.cr6.eq) goto loc_824C32D4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r10,r10,47768
	ctx.r10.u64 = ctx.r10.u64 | 47768;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x824c33bc
	goto loc_824C33BC;
loc_824C32D4:
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c3338
	if (ctx.cr6.eq) goto loc_824C3338;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-3008
	ctx.r9.s64 = ctx.r9.s64 + -3008;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824c333c
	goto loc_824C333C;
loc_824C3338:
	// li r28,12816
	ctx.r28.s64 = 12816;
loc_824C333C:
	// rlwinm r3,r29,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// bl 0x824bffd8
	ctx.lr = 0x824C3344;
	sub_824BFFD8(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x824c3360
	if (!ctx.cr6.eq) goto loc_824C3360;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r30,r3,r12
	ctx.r30.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x824c3364
	goto loc_824C3364;
loc_824C3360:
	// ori r30,r3,34952
	ctx.r30.u64 = ctx.r3.u64 | 34952;
loc_824C3364:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0678
	ctx.lr = 0x824C3374;
	sub_824C0678(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c339c
	if (!ctx.cr6.eq) goto loc_824C339C;
	// cmplwi cr6,r28,12816
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12816, ctx.xer);
	// bne cr6,0x824c339c
	if (!ctx.cr6.eq) goto loc_824C339C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x824c33c4
	goto loc_824C33C4;
loc_824C339C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 | ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_824C33BC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C33C4:
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r27,r19,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// or r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 | ctx.r22.u64;
	// clrlwi r10,r27,23
	ctx.r10.u64 = ctx.r27.u32 & 0x1FF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r26,r10,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C33FC;
	sub_824C07F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_824C3404:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C3408:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C3418"))) PPC_WEAK_FUNC(sub_824C3418);
PPC_FUNC_IMPL(__imp__sub_824C3418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x824C3420;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c3444
	if (!ctx.cr6.eq) goto loc_824C3444;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x824c3450
	goto loc_824C3450;
loc_824C3444:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824C3450:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c3474
	if (ctx.cr6.eq) goto loc_824C3474;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c3474
	if (ctx.cr6.eq) goto loc_824C3474;
	// bl 0x8222e960
	ctx.lr = 0x824C3474;
	sub_8222E960(ctx, base);
loc_824C3474:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,0(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x824c34b0
	if (ctx.cr6.eq) goto loc_824C34B0;
	// bl 0x8222e960
	ctx.lr = 0x824C34B0;
	sub_8222E960(ctx, base);
loc_824C34B0:
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r25,r28,4
	ctx.r25.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,85
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 85, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x824c34e4
	if (!ctx.cr6.eq) goto loc_824C34E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C34D8;
	sub_824C07F8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824c3534
	goto loc_824C3534;
loc_824C34E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c0128
	ctx.lr = 0x824C34F8;
	sub_824C0128(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x824c350c
	if (ctx.cr6.eq) goto loc_824C350C;
	// bl 0x8222e960
	ctx.lr = 0x824C350C;
	sub_8222E960(ctx, base);
loc_824C350C:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r10,r28,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824C3534:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824c354c
	if (ctx.cr6.eq) goto loc_824C354C;
	// bl 0x8222e960
	ctx.lr = 0x824C354C;
	sub_8222E960(ctx, base);
loc_824C354C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c0920
	ctx.lr = 0x824C3564;
	sub_824C0920(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r26,83
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 83, ctx.xer);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824c35c4
	if (!ctx.cr6.eq) goto loc_824C35C4;
	// rlwimi r30,r20,8,23,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = ctx.r30.u32 & 0x1FF;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c07f8
	ctx.lr = 0x824C35B0;
	sub_824C07F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r28,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824C35C4:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C35D4"))) PPC_WEAK_FUNC(sub_824C35D4);
PPC_FUNC_IMPL(__imp__sub_824C35D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C35D8"))) PPC_WEAK_FUNC(sub_824C35D8);
PPC_FUNC_IMPL(__imp__sub_824C35D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x824C35E0;
	__savegprlr_15(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r15,r9,12752
	ctx.r15.s64 = ctx.r9.s64 + 12752;
	// addi r10,r10,816
	ctx.r10.s64 = ctx.r10.s64 + 816;
	// li r11,75
	ctx.r11.s64 = 75;
	// lis r27,-32180
	ctx.r27.s64 = -2108948480;
	// stw r11,12752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12752, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r10.u32);
	// addi r11,r27,3768
	ctx.r11.s64 = ctx.r27.s64 + 3768;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r9.u32);
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// stw r10,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r10.u32);
	// addi r9,r28,3768
	ctx.r9.s64 = ctx.r28.s64 + 3768;
	// addi r10,r29,3768
	ctx.r10.s64 = ctx.r29.s64 + 3768;
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r9,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r9.u32);
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// stw r10,28(r15)
	PPC_STORE_U32(ctx.r15.u32 + 28, ctx.r10.u32);
	// stw r11,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r30,3768
	ctx.r11.s64 = ctx.r30.s64 + 3768;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r9,32(r15)
	PPC_STORE_U32(ctx.r15.u32 + 32, ctx.r9.u32);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// stw r11,36(r15)
	PPC_STORE_U32(ctx.r15.u32 + 36, ctx.r11.u32);
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// stw r10,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r10.u32);
	// addi r9,r31,3768
	ctx.r9.s64 = ctx.r31.s64 + 3768;
	// addi r10,r3,3768
	ctx.r10.s64 = ctx.r3.s64 + 3768;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r9,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r9.u32);
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// stw r10,52(r15)
	PPC_STORE_U32(ctx.r15.u32 + 52, ctx.r10.u32);
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// addi r11,r4,3768
	ctx.r11.s64 = ctx.r4.s64 + 3768;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,56(r15)
	PPC_STORE_U32(ctx.r15.u32 + 56, ctx.r9.u32);
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// stw r11,60(r15)
	PPC_STORE_U32(ctx.r15.u32 + 60, ctx.r11.u32);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stw r10,64(r15)
	PPC_STORE_U32(ctx.r15.u32 + 64, ctx.r10.u32);
	// addi r9,r5,3768
	ctx.r9.s64 = ctx.r5.s64 + 3768;
	// addi r10,r6,3768
	ctx.r10.s64 = ctx.r6.s64 + 3768;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r9,68(r15)
	PPC_STORE_U32(ctx.r15.u32 + 68, ctx.r9.u32);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r10,76(r15)
	PPC_STORE_U32(ctx.r15.u32 + 76, ctx.r10.u32);
	// stw r11,72(r15)
	PPC_STORE_U32(ctx.r15.u32 + 72, ctx.r11.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r11,r7,3768
	ctx.r11.s64 = ctx.r7.s64 + 3768;
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r9,80(r15)
	PPC_STORE_U32(ctx.r15.u32 + 80, ctx.r9.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// stw r11,84(r15)
	PPC_STORE_U32(ctx.r15.u32 + 84, ctx.r11.u32);
	// lis r23,-32180
	ctx.r23.s64 = -2108948480;
	// stw r10,88(r15)
	PPC_STORE_U32(ctx.r15.u32 + 88, ctx.r10.u32);
	// addi r9,r8,3768
	ctx.r9.s64 = ctx.r8.s64 + 3768;
	// li r11,86
	ctx.r11.s64 = 86;
	// addi r10,r23,816
	ctx.r10.s64 = ctx.r23.s64 + 816;
	// stw r9,92(r15)
	PPC_STORE_U32(ctx.r15.u32 + 92, ctx.r9.u32);
	// stw r11,96(r15)
	PPC_STORE_U32(ctx.r15.u32 + 96, ctx.r11.u32);
	// lis r24,-32180
	ctx.r24.s64 = -2108948480;
	// lis r25,-32180
	ctx.r25.s64 = -2108948480;
	// stw r10,100(r15)
	PPC_STORE_U32(ctx.r15.u32 + 100, ctx.r10.u32);
	// lis r26,-32180
	ctx.r26.s64 = -2108948480;
	// lis r27,-32180
	ctx.r27.s64 = -2108948480;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// stw r11,104(r15)
	PPC_STORE_U32(ctx.r15.u32 + 104, ctx.r11.u32);
	// addi r11,r25,3768
	ctx.r11.s64 = ctx.r25.s64 + 3768;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r11.u32);
	// addi r9,r24,816
	ctx.r9.s64 = ctx.r24.s64 + 816;
	// stw r10,112(r15)
	PPC_STORE_U32(ctx.r15.u32 + 112, ctx.r10.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// addi r10,r26,3768
	ctx.r10.s64 = ctx.r26.s64 + 3768;
	// stw r9,108(r15)
	PPC_STORE_U32(ctx.r15.u32 + 108, ctx.r9.u32);
	// stw r11,128(r15)
	PPC_STORE_U32(ctx.r15.u32 + 128, ctx.r11.u32);
	// addi r11,r28,816
	ctx.r11.s64 = ctx.r28.s64 + 816;
	// stw r10,124(r15)
	PPC_STORE_U32(ctx.r15.u32 + 124, ctx.r10.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,140(r15)
	PPC_STORE_U32(ctx.r15.u32 + 140, ctx.r11.u32);
	// stw r9,120(r15)
	PPC_STORE_U32(ctx.r15.u32 + 120, ctx.r9.u32);
	// addi r9,r27,816
	ctx.r9.s64 = ctx.r27.s64 + 816;
	// stw r10,136(r15)
	PPC_STORE_U32(ctx.r15.u32 + 136, ctx.r10.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// addi r10,r29,3768
	ctx.r10.s64 = ctx.r29.s64 + 3768;
	// stw r9,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r9.u32);
	// stw r11,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r11.u32);
	// addi r11,r31,3768
	ctx.r11.s64 = ctx.r31.s64 + 3768;
	// stw r10,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r10.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,164(r15)
	PPC_STORE_U32(ctx.r15.u32 + 164, ctx.r11.u32);
	// stw r9,144(r15)
	PPC_STORE_U32(ctx.r15.u32 + 144, ctx.r9.u32);
	// addi r9,r30,3768
	ctx.r9.s64 = ctx.r30.s64 + 3768;
	// stw r10,160(r15)
	PPC_STORE_U32(ctx.r15.u32 + 160, ctx.r10.u32);
	// li r11,69
	ctx.r11.s64 = 69;
	// addi r10,r3,3768
	ctx.r10.s64 = ctx.r3.s64 + 3768;
	// stw r9,156(r15)
	PPC_STORE_U32(ctx.r15.u32 + 156, ctx.r9.u32);
	// stw r11,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r11.u32);
	// addi r11,r5,3768
	ctx.r11.s64 = ctx.r5.s64 + 3768;
	// stw r10,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,188(r15)
	PPC_STORE_U32(ctx.r15.u32 + 188, ctx.r11.u32);
	// stw r9,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r9.u32);
	// addi r9,r4,3768
	ctx.r9.s64 = ctx.r4.s64 + 3768;
	// stw r10,184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 184, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r6,3768
	ctx.r10.s64 = ctx.r6.s64 + 3768;
	// stw r9,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r9.u32);
	// stw r11,200(r15)
	PPC_STORE_U32(ctx.r15.u32 + 200, ctx.r11.u32);
	// addi r11,r8,4936
	ctx.r11.s64 = ctx.r8.s64 + 4936;
	// stw r10,196(r15)
	PPC_STORE_U32(ctx.r15.u32 + 196, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,212(r15)
	PPC_STORE_U32(ctx.r15.u32 + 212, ctx.r11.u32);
	// stw r9,192(r15)
	PPC_STORE_U32(ctx.r15.u32 + 192, ctx.r9.u32);
	// addi r9,r7,4936
	ctx.r9.s64 = ctx.r7.s64 + 4936;
	// stw r10,208(r15)
	PPC_STORE_U32(ctx.r15.u32 + 208, ctx.r10.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r9,204(r15)
	PPC_STORE_U32(ctx.r15.u32 + 204, ctx.r9.u32);
	// lis r18,-32180
	ctx.r18.s64 = -2108948480;
	// stw r11,216(r15)
	PPC_STORE_U32(ctx.r15.u32 + 216, ctx.r11.u32);
	// lis r19,-32180
	ctx.r19.s64 = -2108948480;
	// lis r20,-32180
	ctx.r20.s64 = -2108948480;
	// lis r21,-32180
	ctx.r21.s64 = -2108948480;
	// lis r22,-32180
	ctx.r22.s64 = -2108948480;
	// lis r23,-32180
	ctx.r23.s64 = -2108948480;
	// lis r24,-32180
	ctx.r24.s64 = -2108948480;
	// lis r25,-32180
	ctx.r25.s64 = -2108948480;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r26,-32180
	ctx.r26.s64 = -2108948480;
	// lis r27,-32180
	ctx.r27.s64 = -2108948480;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// addi r10,r10,4936
	ctx.r10.s64 = ctx.r10.s64 + 4936;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r18,4936
	ctx.r11.s64 = ctx.r18.s64 + 4936;
	// stw r10,220(r15)
	PPC_STORE_U32(ctx.r15.u32 + 220, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r9,224(r15)
	PPC_STORE_U32(ctx.r15.u32 + 224, ctx.r9.u32);
	// addi r9,r19,4936
	ctx.r9.s64 = ctx.r19.s64 + 4936;
	// stw r11,228(r15)
	PPC_STORE_U32(ctx.r15.u32 + 228, ctx.r11.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r10,232(r15)
	PPC_STORE_U32(ctx.r15.u32 + 232, ctx.r10.u32);
	// addi r10,r20,4936
	ctx.r10.s64 = ctx.r20.s64 + 4936;
	// stw r9,236(r15)
	PPC_STORE_U32(ctx.r15.u32 + 236, ctx.r9.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,240(r15)
	PPC_STORE_U32(ctx.r15.u32 + 240, ctx.r11.u32);
	// addi r11,r21,816
	ctx.r11.s64 = ctx.r21.s64 + 816;
	// stw r10,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r9,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r9.u32);
	// addi r9,r22,3768
	ctx.r9.s64 = ctx.r22.s64 + 3768;
	// stw r11,252(r15)
	PPC_STORE_U32(ctx.r15.u32 + 252, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r10,256(r15)
	PPC_STORE_U32(ctx.r15.u32 + 256, ctx.r10.u32);
	// addi r10,r23,3768
	ctx.r10.s64 = ctx.r23.s64 + 3768;
	// stw r9,260(r15)
	PPC_STORE_U32(ctx.r15.u32 + 260, ctx.r9.u32);
	// li r9,87
	ctx.r9.s64 = 87;
	// stw r11,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r11.u32);
	// addi r11,r24,816
	ctx.r11.s64 = ctx.r24.s64 + 816;
	// stw r10,268(r15)
	PPC_STORE_U32(ctx.r15.u32 + 268, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,272(r15)
	PPC_STORE_U32(ctx.r15.u32 + 272, ctx.r9.u32);
	// addi r9,r25,3768
	ctx.r9.s64 = ctx.r25.s64 + 3768;
	// stw r11,276(r15)
	PPC_STORE_U32(ctx.r15.u32 + 276, ctx.r11.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r10,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r10.u32);
	// addi r10,r29,3768
	ctx.r10.s64 = ctx.r29.s64 + 3768;
	// stw r9,284(r15)
	PPC_STORE_U32(ctx.r15.u32 + 284, ctx.r9.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// stw r11,288(r15)
	PPC_STORE_U32(ctx.r15.u32 + 288, ctx.r11.u32);
	// addi r11,r30,3768
	ctx.r11.s64 = ctx.r30.s64 + 3768;
	// stw r10,292(r15)
	PPC_STORE_U32(ctx.r15.u32 + 292, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r9,296(r15)
	PPC_STORE_U32(ctx.r15.u32 + 296, ctx.r9.u32);
	// addi r9,r31,4936
	ctx.r9.s64 = ctx.r31.s64 + 4936;
	// stw r11,300(r15)
	PPC_STORE_U32(ctx.r15.u32 + 300, ctx.r11.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r10,304(r15)
	PPC_STORE_U32(ctx.r15.u32 + 304, ctx.r10.u32);
	// addi r10,r3,4936
	ctx.r10.s64 = ctx.r3.s64 + 4936;
	// stw r9,308(r15)
	PPC_STORE_U32(ctx.r15.u32 + 308, ctx.r9.u32);
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r11,312(r15)
	PPC_STORE_U32(ctx.r15.u32 + 312, ctx.r11.u32);
	// addi r11,r4,4936
	ctx.r11.s64 = ctx.r4.s64 + 4936;
	// stw r10,316(r15)
	PPC_STORE_U32(ctx.r15.u32 + 316, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,320(r15)
	PPC_STORE_U32(ctx.r15.u32 + 320, ctx.r9.u32);
	// addi r9,r5,6200
	ctx.r9.s64 = ctx.r5.s64 + 6200;
	// stw r11,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r11.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r10.u32);
	// addi r10,r6,4936
	ctx.r10.s64 = ctx.r6.s64 + 4936;
	// stw r9,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r9.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r11,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r11.u32);
	// addi r11,r7,4936
	ctx.r11.s64 = ctx.r7.s64 + 4936;
	// stw r10,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r9.u32);
	// addi r9,r8,4936
	ctx.r9.s64 = ctx.r8.s64 + 4936;
	// stw r11,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,352(r15)
	PPC_STORE_U32(ctx.r15.u32 + 352, ctx.r10.u32);
	// addi r10,r26,6200
	ctx.r10.s64 = ctx.r26.s64 + 6200;
	// stw r9,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r9.u32);
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// stw r11,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r11.u32);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// stw r10,364(r15)
	PPC_STORE_U32(ctx.r15.u32 + 364, ctx.r10.u32);
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r27,816
	ctx.r11.s64 = ctx.r27.s64 + 816;
	// stw r9,368(r15)
	PPC_STORE_U32(ctx.r15.u32 + 368, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,372(r15)
	PPC_STORE_U32(ctx.r15.u32 + 372, ctx.r11.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r10,376(r15)
	PPC_STORE_U32(ctx.r15.u32 + 376, ctx.r10.u32);
	// addi r10,r29,816
	ctx.r10.s64 = ctx.r29.s64 + 816;
	// stw r11,384(r15)
	PPC_STORE_U32(ctx.r15.u32 + 384, ctx.r11.u32);
	// addi r9,r28,816
	ctx.r9.s64 = ctx.r28.s64 + 816;
	// stw r10,388(r15)
	PPC_STORE_U32(ctx.r15.u32 + 388, ctx.r10.u32);
	// addi r11,r30,6664
	ctx.r11.s64 = ctx.r30.s64 + 6664;
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r9,380(r15)
	PPC_STORE_U32(ctx.r15.u32 + 380, ctx.r9.u32);
	// stw r11,516(r15)
	PPC_STORE_U32(ctx.r15.u32 + 516, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,520(r15)
	PPC_STORE_U32(ctx.r15.u32 + 520, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r3,7616
	ctx.r10.s64 = ctx.r3.s64 + 7616;
	// stw r9,512(r15)
	PPC_STORE_U32(ctx.r15.u32 + 512, ctx.r9.u32);
	// stw r11,528(r15)
	PPC_STORE_U32(ctx.r15.u32 + 528, ctx.r11.u32);
	// addi r9,r31,7072
	ctx.r9.s64 = ctx.r31.s64 + 7072;
	// stw r10,532(r15)
	PPC_STORE_U32(ctx.r15.u32 + 532, ctx.r10.u32);
	// addi r11,r4,9200
	ctx.r11.s64 = ctx.r4.s64 + 9200;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r9,524(r15)
	PPC_STORE_U32(ctx.r15.u32 + 524, ctx.r9.u32);
	// stw r11,540(r15)
	PPC_STORE_U32(ctx.r15.u32 + 540, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,544(r15)
	PPC_STORE_U32(ctx.r15.u32 + 544, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r6,11216
	ctx.r10.s64 = ctx.r6.s64 + 11216;
	// stw r9,536(r15)
	PPC_STORE_U32(ctx.r15.u32 + 536, ctx.r9.u32);
	// stw r11,552(r15)
	PPC_STORE_U32(ctx.r15.u32 + 552, ctx.r11.u32);
	// addi r9,r5,9200
	ctx.r9.s64 = ctx.r5.s64 + 9200;
	// stw r10,556(r15)
	PPC_STORE_U32(ctx.r15.u32 + 556, ctx.r10.u32);
	// addi r11,r7,11216
	ctx.r11.s64 = ctx.r7.s64 + 11216;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,548(r15)
	PPC_STORE_U32(ctx.r15.u32 + 548, ctx.r9.u32);
	// stw r11,564(r15)
	PPC_STORE_U32(ctx.r15.u32 + 564, ctx.r11.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,568(r15)
	PPC_STORE_U32(ctx.r15.u32 + 568, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r9,560(r15)
	PPC_STORE_U32(ctx.r15.u32 + 560, ctx.r9.u32);
	// stw r11,576(r15)
	PPC_STORE_U32(ctx.r15.u32 + 576, ctx.r11.u32);
	// addi r9,r8,11712
	ctx.r9.s64 = ctx.r8.s64 + 11712;
	// addi r11,r10,12336
	ctx.r11.s64 = ctx.r10.s64 + 12336;
	// stw r9,572(r15)
	PPC_STORE_U32(ctx.r15.u32 + 572, ctx.r9.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r11,580(r15)
	PPC_STORE_U32(ctx.r15.u32 + 580, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r17,-32180
	ctx.r17.s64 = -2108948480;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,592(r15)
	PPC_STORE_U32(ctx.r15.u32 + 592, ctx.r11.u32);
	// addi r9,r9,11952
	ctx.r9.s64 = ctx.r9.s64 + 11952;
	// lis r16,-32180
	ctx.r16.s64 = -2108948480;
	// stw r10,584(r15)
	PPC_STORE_U32(ctx.r15.u32 + 584, ctx.r10.u32);
	// addi r11,r17,816
	ctx.r11.s64 = ctx.r17.s64 + 816;
	// stw r9,588(r15)
	PPC_STORE_U32(ctx.r15.u32 + 588, ctx.r9.u32);
	// lis r18,-32180
	ctx.r18.s64 = -2108948480;
	// lis r19,-32180
	ctx.r19.s64 = -2108948480;
	// stw r11,604(r15)
	PPC_STORE_U32(ctx.r15.u32 + 604, ctx.r11.u32);
	// lis r20,-32180
	ctx.r20.s64 = -2108948480;
	// lis r21,-32180
	ctx.r21.s64 = -2108948480;
	// lis r22,-32180
	ctx.r22.s64 = -2108948480;
	// lis r23,-32180
	ctx.r23.s64 = -2108948480;
	// lis r24,-32180
	ctx.r24.s64 = -2108948480;
	// lis r25,-32180
	ctx.r25.s64 = -2108948480;
	// lis r26,-32180
	ctx.r26.s64 = -2108948480;
	// lis r27,-32180
	ctx.r27.s64 = -2108948480;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// addi r10,r16,12336
	ctx.r10.s64 = ctx.r16.s64 + 12336;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,596(r15)
	PPC_STORE_U32(ctx.r15.u32 + 596, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,600(r15)
	PPC_STORE_U32(ctx.r15.u32 + 600, ctx.r9.u32);
	// stw r11,616(r15)
	PPC_STORE_U32(ctx.r15.u32 + 616, ctx.r11.u32);
	// addi r9,r18,12336
	ctx.r9.s64 = ctx.r18.s64 + 12336;
	// stw r10,608(r15)
	PPC_STORE_U32(ctx.r15.u32 + 608, ctx.r10.u32);
	// addi r11,r20,3768
	ctx.r11.s64 = ctx.r20.s64 + 3768;
	// addi r10,r19,12336
	ctx.r10.s64 = ctx.r19.s64 + 12336;
	// stw r9,612(r15)
	PPC_STORE_U32(ctx.r15.u32 + 612, ctx.r9.u32);
	// stw r11,628(r15)
	PPC_STORE_U32(ctx.r15.u32 + 628, ctx.r11.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r10,620(r15)
	PPC_STORE_U32(ctx.r15.u32 + 620, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r9,624(r15)
	PPC_STORE_U32(ctx.r15.u32 + 624, ctx.r9.u32);
	// stw r11,640(r15)
	PPC_STORE_U32(ctx.r15.u32 + 640, ctx.r11.u32);
	// addi r9,r21,3768
	ctx.r9.s64 = ctx.r21.s64 + 3768;
	// stw r10,632(r15)
	PPC_STORE_U32(ctx.r15.u32 + 632, ctx.r10.u32);
	// addi r11,r23,816
	ctx.r11.s64 = ctx.r23.s64 + 816;
	// addi r10,r22,3768
	ctx.r10.s64 = ctx.r22.s64 + 3768;
	// stw r9,636(r15)
	PPC_STORE_U32(ctx.r15.u32 + 636, ctx.r9.u32);
	// stw r11,652(r15)
	PPC_STORE_U32(ctx.r15.u32 + 652, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,644(r15)
	PPC_STORE_U32(ctx.r15.u32 + 644, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r9,648(r15)
	PPC_STORE_U32(ctx.r15.u32 + 648, ctx.r9.u32);
	// stw r11,664(r15)
	PPC_STORE_U32(ctx.r15.u32 + 664, ctx.r11.u32);
	// addi r9,r24,11216
	ctx.r9.s64 = ctx.r24.s64 + 11216;
	// stw r10,656(r15)
	PPC_STORE_U32(ctx.r15.u32 + 656, ctx.r10.u32);
	// addi r11,r26,12336
	ctx.r11.s64 = ctx.r26.s64 + 12336;
	// addi r10,r25,13336
	ctx.r10.s64 = ctx.r25.s64 + 13336;
	// stw r9,660(r15)
	PPC_STORE_U32(ctx.r15.u32 + 660, ctx.r9.u32);
	// stw r11,676(r15)
	PPC_STORE_U32(ctx.r15.u32 + 676, ctx.r11.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r10,668(r15)
	PPC_STORE_U32(ctx.r15.u32 + 668, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,672(r15)
	PPC_STORE_U32(ctx.r15.u32 + 672, ctx.r9.u32);
	// stw r11,688(r15)
	PPC_STORE_U32(ctx.r15.u32 + 688, ctx.r11.u32);
	// addi r9,r27,13336
	ctx.r9.s64 = ctx.r27.s64 + 13336;
	// stw r10,680(r15)
	PPC_STORE_U32(ctx.r15.u32 + 680, ctx.r10.u32);
	// addi r11,r29,904
	ctx.r11.s64 = ctx.r29.s64 + 904;
	// addi r10,r28,12336
	ctx.r10.s64 = ctx.r28.s64 + 12336;
	// stw r9,684(r15)
	PPC_STORE_U32(ctx.r15.u32 + 684, ctx.r9.u32);
	// stw r11,700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 700, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,692(r15)
	PPC_STORE_U32(ctx.r15.u32 + 692, ctx.r10.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,696(r15)
	PPC_STORE_U32(ctx.r15.u32 + 696, ctx.r9.u32);
	// stw r11,712(r15)
	PPC_STORE_U32(ctx.r15.u32 + 712, ctx.r11.u32);
	// addi r9,r30,3768
	ctx.r9.s64 = ctx.r30.s64 + 3768;
	// stw r10,704(r15)
	PPC_STORE_U32(ctx.r15.u32 + 704, ctx.r10.u32);
	// addi r11,r3,3768
	ctx.r11.s64 = ctx.r3.s64 + 3768;
	// addi r10,r31,10352
	ctx.r10.s64 = ctx.r31.s64 + 10352;
	// stw r9,708(r15)
	PPC_STORE_U32(ctx.r15.u32 + 708, ctx.r9.u32);
	// stw r11,724(r15)
	PPC_STORE_U32(ctx.r15.u32 + 724, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,716(r15)
	PPC_STORE_U32(ctx.r15.u32 + 716, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r9,720(r15)
	PPC_STORE_U32(ctx.r15.u32 + 720, ctx.r9.u32);
	// stw r11,736(r15)
	PPC_STORE_U32(ctx.r15.u32 + 736, ctx.r11.u32);
	// addi r9,r8,3768
	ctx.r9.s64 = ctx.r8.s64 + 3768;
	// addi r11,r4,3768
	ctx.r11.s64 = ctx.r4.s64 + 3768;
	// stw r10,728(r15)
	PPC_STORE_U32(ctx.r15.u32 + 728, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r9,732(r15)
	PPC_STORE_U32(ctx.r15.u32 + 732, ctx.r9.u32);
	// stw r11,740(r15)
	PPC_STORE_U32(ctx.r15.u32 + 740, ctx.r11.u32);
	// addi r9,r5,8536
	ctx.r9.s64 = ctx.r5.s64 + 8536;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r10,744(r15)
	PPC_STORE_U32(ctx.r15.u32 + 744, ctx.r10.u32);
	// addi r10,r6,6200
	ctx.r10.s64 = ctx.r6.s64 + 6200;
	// stw r9,748(r15)
	PPC_STORE_U32(ctx.r15.u32 + 748, ctx.r9.u32);
	// stw r11,752(r15)
	PPC_STORE_U32(ctx.r15.u32 + 752, ctx.r11.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r10,756(r15)
	PPC_STORE_U32(ctx.r15.u32 + 756, ctx.r10.u32);
	// addi r11,r7,8536
	ctx.r11.s64 = ctx.r7.s64 + 8536;
	// stw r9,760(r15)
	PPC_STORE_U32(ctx.r15.u32 + 760, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r8,4936
	ctx.r9.s64 = ctx.r8.s64 + 4936;
	// stw r11,764(r15)
	PPC_STORE_U32(ctx.r15.u32 + 764, ctx.r11.u32);
	// stw r10,768(r15)
	PPC_STORE_U32(ctx.r15.u32 + 768, ctx.r10.u32);
	// stw r9,772(r15)
	PPC_STORE_U32(ctx.r15.u32 + 772, ctx.r9.u32);
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C3C50"))) PPC_WEAK_FUNC(sub_824C3C50);
PPC_FUNC_IMPL(__imp__sub_824C3C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C3C58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c3c78
	if (!ctx.cr6.lt) goto loc_824C3C78;
	// bl 0x8222e960
	ctx.lr = 0x824C3C78;
	sub_8222E960(ctx, base);
loc_824C3C78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x824c3ca0
	if (ctx.cr6.lt) goto loc_824C3CA0;
	// bl 0x8222e960
	ctx.lr = 0x824C3C9C;
	sub_8222E960(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
loc_824C3CA0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x824c3cb8
	if (ctx.cr6.eq) goto loc_824C3CB8;
	// bl 0x8222e960
	ctx.lr = 0x824C3CB8;
	sub_8222E960(ctx, base);
loc_824C3CB8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C3D24"))) PPC_WEAK_FUNC(sub_824C3D24);
PPC_FUNC_IMPL(__imp__sub_824C3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C3D28"))) PPC_WEAK_FUNC(sub_824C3D28);
PPC_FUNC_IMPL(__imp__sub_824C3D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C3D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c3d50
	if (!ctx.cr6.lt) goto loc_824C3D50;
	// bl 0x8222e960
	ctx.lr = 0x824C3D50;
	sub_8222E960(ctx, base);
loc_824C3D50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c3d78
	if (ctx.cr6.lt) goto loc_824C3D78;
	// bl 0x8222e960
	ctx.lr = 0x824C3D74;
	sub_8222E960(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_824C3D78:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x824c3d90
	if (ctx.cr6.eq) goto loc_824C3D90;
	// bl 0x8222e960
	ctx.lr = 0x824C3D90;
	sub_8222E960(ctx, base);
loc_824C3D90:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,17,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C3DFC"))) PPC_WEAK_FUNC(sub_824C3DFC);
PPC_FUNC_IMPL(__imp__sub_824C3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C3E00"))) PPC_WEAK_FUNC(sub_824C3E00);
PPC_FUNC_IMPL(__imp__sub_824C3E00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824c3e18
	if (ctx.cr0.eq) goto loc_824C3E18;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x824c3e1c
	goto loc_824C3E1C;
loc_824C3E18:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824C3E1C:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c3e30
	if (ctx.cr0.eq) goto loc_824C3E30;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x824c3e34
	goto loc_824C3E34;
loc_824C3E30:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_824C3E34:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c3e48
	if (ctx.cr0.eq) goto loc_824C3E48;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x824c3e4c
	goto loc_824C3E4C;
loc_824C3E48:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_824C3E4C:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c3e58
	if (ctx.cr0.eq) goto loc_824C3E58;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_824C3E58:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C3E60"))) PPC_WEAK_FUNC(sub_824C3E60);
PPC_FUNC_IMPL(__imp__sub_824C3E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C3E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x824c3e88
	if (ctx.cr6.lt) goto loc_824C3E88;
	// bl 0x8222e960
	ctx.lr = 0x824C3E88;
	sub_8222E960(ctx, base);
loc_824C3E88:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x824c3ed8
	if (ctx.cr6.eq) goto loc_824C3ED8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824c3ed0
	if (ctx.cr6.eq) goto loc_824C3ED0;
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824c3ec8
	if (ctx.cr6.eq) goto loc_824C3EC8;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824c3ec0
	if (ctx.cr6.eq) goto loc_824C3EC0;
	// bl 0x8222e960
	ctx.lr = 0x824C3EBC;
	sub_8222E960(ctx, base);
	// b 0x824c3edc
	goto loc_824C3EDC;
loc_824C3EC0:
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// b 0x824c3edc
	goto loc_824C3EDC;
loc_824C3EC8:
	// lis r31,1024
	ctx.r31.s64 = 67108864;
	// b 0x824c3edc
	goto loc_824C3EDC;
loc_824C3ED0:
	// lis r31,512
	ctx.r31.s64 = 33554432;
	// b 0x824c3edc
	goto loc_824C3EDC;
loc_824C3ED8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824C3EDC:
	// rlwimi r31,r29,16,8,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	ctx.r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C3F00"))) PPC_WEAK_FUNC(sub_824C3F00);
PPC_FUNC_IMPL(__imp__sub_824C3F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x824C3F08;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r28,21,3,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1FE00000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// ori r29,r11,23
	ctx.r29.u64 = ctx.r11.u64 | 23;
	// ble cr6,0x824c3f44
	if (!ctx.cr6.gt) goto loc_824C3F44;
	// bl 0x8222e960
	ctx.lr = 0x824C3F44;
	sub_8222E960(ctx, base);
loc_824C3F44:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x824c3f50
	if (ctx.cr6.lt) goto loc_824C3F50;
	// bl 0x8222e960
	ctx.lr = 0x824C3F50;
	sub_8222E960(ctx, base);
loc_824C3F50:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x824c3fac
	if (!ctx.cr6.eq) goto loc_824C3FAC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c3f6c
	if (!ctx.cr6.lt) goto loc_824C3F6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C3F6C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c3f88
	if (!ctx.cr6.eq) goto loc_824C3F88;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x824c3f94
	goto loc_824C3F94;
loc_824C3F88:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824c3f94
	if (!ctx.cr6.eq) goto loc_824C3F94;
	// li r26,1
	ctx.r26.s64 = 1;
loc_824C3F94:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// rlwimi r29,r11,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x824c3fdc
	if (ctx.cr6.lt) goto loc_824C3FDC;
	// bl 0x8222e960
	ctx.lr = 0x824C3FA8;
	sub_8222E960(ctx, base);
	// b 0x824c3fdc
	goto loc_824C3FDC;
loc_824C3FAC:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x824c3fc0
	if (!ctx.cr6.eq) goto loc_824C3FC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x824c3fdc
	goto loc_824C3FDC;
loc_824C3FC0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// li r9,5
	ctx.r9.s64 = 5;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r29,r11,0,3,10
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE00000) | (ctx.r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r9,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_824C3FDC:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x824c3fe8
	if (ctx.cr6.lt) goto loc_824C3FE8;
	// bl 0x8222e960
	ctx.lr = 0x824C3FE8;
	sub_8222E960(ctx, base);
loc_824C3FE8:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,12
	ctx.r9.s64 = 12;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r9,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c3e00
	ctx.lr = 0x824C4028;
	sub_824C3E00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x824c4070
	if (!ctx.cr6.eq) goto loc_824C4070;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x824c4070
	if (!ctx.cr6.eq) goto loc_824C4070;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x824c4070
	if (!ctx.cr6.eq) goto loc_824C4070;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x824c4070
	if (!ctx.cr6.eq) goto loc_824C4070;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824c4070
	if (!ctx.cr6.eq) goto loc_824C4070;
	// clrlwi r10,r29,1
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// b 0x824c4098
	goto loc_824C4098;
loc_824C4070:
	// rlwimi r11,r26,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r7,r29,32768
	ctx.r7.u64 = ctx.r29.u64 | 2147483648;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// rlwimi r10,r6,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r8.u32);
loc_824C4098:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C40B4"))) PPC_WEAK_FUNC(sub_824C40B4);
PPC_FUNC_IMPL(__imp__sub_824C40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C40B8"))) PPC_WEAK_FUNC(sub_824C40B8);
PPC_FUNC_IMPL(__imp__sub_824C40B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x824C40C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x824c4100
	if (ctx.cr6.eq) goto loc_824C4100;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x824c4118
	if (ctx.cr6.eq) goto loc_824C4118;
	// bl 0x8222e960
	ctx.lr = 0x824C40F8;
	sub_8222E960(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x824c4158
	goto loc_824C4158;
loc_824C4100:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// b 0x824c4158
	goto loc_824C4158;
loc_824C4118:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r29,17
	ctx.r29.s64 = 17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c4130
	if (!ctx.cr6.lt) goto loc_824C4130;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C4130:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c414c
	if (!ctx.cr6.eq) goto loc_824C414C;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x824c4158
	goto loc_824C4158;
loc_824C414C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824c4158
	if (!ctx.cr6.eq) goto loc_824C4158;
	// li r25,1
	ctx.r25.s64 = 1;
loc_824C4158:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x824c4164
	if (ctx.cr6.lt) goto loc_824C4164;
	// bl 0x8222e960
	ctx.lr = 0x824C4164;
	sub_8222E960(ctx, base);
loc_824C4164:
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824c3e00
	ctx.lr = 0x824C41A0;
	sub_824C3E00(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r31,r29,16,10,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x3F0000) | (ctx.r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r7,r9,2,29,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x4) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFB);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// clrlwi r8,r31,10
	ctx.r8.u64 = ctx.r31.u32 & 0x3FFFFF;
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r5,r9,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r5,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C41F8"))) PPC_WEAK_FUNC(sub_824C41F8);
PPC_FUNC_IMPL(__imp__sub_824C41F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x824C4200;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824c4234
	if (ctx.cr6.eq) goto loc_824C4234;
	// bl 0x8222e960
	ctx.lr = 0x824C4234;
	sub_8222E960(ctx, base);
loc_824C4234:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c4248
	if (!ctx.cr6.lt) goto loc_824C4248;
	// bl 0x8222e960
	ctx.lr = 0x824C4248;
	sub_8222E960(ctx, base);
loc_824C4248:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x824c42e0
	if (!ctx.cr6.eq) goto loc_824C42E0;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x824c42a0
	if (ctx.cr6.lt) goto loc_824C42A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,-10524
	ctx.r6.s64 = ctx.r11.s64 + -10524;
loc_824C4288:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x824C4298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824c4430
	goto loc_824C4430;
loc_824C42A0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c3e60
	ctx.lr = 0x824C42B0;
	sub_824C3E60(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c42c4
	if (!ctx.cr6.lt) goto loc_824C42C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C42C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// slw r11,r10,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x824c4428
	goto loc_824C4428;
loc_824C42E0:
	// rlwinm r27,r31,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824c4354
	if (ctx.cr6.eq) goto loc_824C4354;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824c4318
	if (ctx.cr6.eq) goto loc_824C4318;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x824c4304
	if (ctx.cr6.eq) goto loc_824C4304;
loc_824C42FC:
	// bl 0x8222e960
	ctx.lr = 0x824C4300;
	sub_8222E960(ctx, base);
	// b 0x824c4428
	goto loc_824C4428;
loc_824C4304:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c4428
	if (!ctx.cr6.lt) goto loc_824C4428;
	// b 0x824c42fc
	goto loc_824C42FC;
loc_824C4318:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c432c
	if (ctx.cr6.lt) goto loc_824C432C;
	// bl 0x8222e960
	ctx.lr = 0x824C432C;
	sub_8222E960(ctx, base);
loc_824C432C:
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x824c4338
	if (ctx.cr6.lt) goto loc_824C4338;
	// bl 0x8222e960
	ctx.lr = 0x824C4338;
	sub_8222E960(ctx, base);
loc_824C4338:
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-2952
	ctx.r7.s64 = ctx.r11.s64 + -2952;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// b 0x824c4418
	goto loc_824C4418;
loc_824C4354:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c43dc
	if (ctx.cr6.lt) goto loc_824C43DC;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x824c4370
	if (ctx.cr6.lt) goto loc_824C4370;
	// bl 0x8222e960
	ctx.lr = 0x824C4370;
	sub_8222E960(ctx, base);
loc_824C4370:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r31,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x824c4388
	if (!ctx.cr6.eq) goto loc_824C4388;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824C4388:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x824c43bc
	if (!ctx.cr6.eq) goto loc_824C43BC;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x824c43bc
	if (ctx.cr6.lt) goto loc_824C43BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-10640
	ctx.r5.s64 = ctx.r11.s64 + -10640;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82600c40
	ctx.lr = 0x824C43B0;
	sub_82600C40(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x824c4288
	goto loc_824C4288;
loc_824C43BC:
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r11,-2936
	ctx.r7.s64 = ctx.r11.s64 + -2936;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c3f00
	ctx.lr = 0x824C43D8;
	sub_824C3F00(ctx, base);
	// b 0x824c4428
	goto loc_824C4428;
loc_824C43DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c43f0
	if (!ctx.cr6.eq) goto loc_824C43F0;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r31,r11,-2984
	ctx.r31.s64 = ctx.r11.s64 + -2984;
	// b 0x824c4404
	goto loc_824C4404;
loc_824C43F0:
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// addi r31,r11,-2968
	ctx.r31.s64 = ctx.r11.s64 + -2968;
	// blt cr6,0x824c4404
	if (ctx.cr6.lt) goto loc_824C4404;
	// bl 0x8222e960
	ctx.lr = 0x824C4404;
	sub_8222E960(ctx, base);
loc_824C4404:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824C4418:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x824c40b8
	ctx.lr = 0x824C4428;
	sub_824C40B8(ctx, base);
loc_824C4428:
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C4430:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C4438"))) PPC_WEAK_FUNC(sub_824C4438);
PPC_FUNC_IMPL(__imp__sub_824C4438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C4440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c4464
	if (ctx.cr6.lt) goto loc_824C4464;
	// bl 0x8222e960
	ctx.lr = 0x824C4464;
	sub_8222E960(ctx, base);
loc_824C4464:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c44bc
	if (!ctx.cr6.gt) goto loc_824C44BC;
loc_824C4474:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c44ac
	if (ctx.cr0.eq) goto loc_824C44AC;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c4494
	if (ctx.cr6.lt) goto loc_824C4494;
	// bl 0x8222e960
	ctx.lr = 0x824C4494;
	sub_8222E960(ctx, base);
loc_824C4494:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_824C44AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c4474
	if (ctx.cr6.lt) goto loc_824C4474;
loc_824C44BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c4518
	if (!ctx.cr6.gt) goto loc_824C4518;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r30,r11,-2952
	ctx.r30.s64 = ctx.r11.s64 + -2952;
loc_824C44D4:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4508
	if (ctx.cr0.eq) goto loc_824C4508;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x824c40b8
	ctx.lr = 0x824C4508;
	sub_824C40B8(ctx, base);
loc_824C4508:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c44d4
	if (ctx.cr6.lt) goto loc_824C44D4;
loc_824C4518:
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,-2968
	ctx.r30.s64 = ctx.r10.s64 + -2968;
	// addi r28,r11,-2984
	ctx.r28.s64 = ctx.r11.s64 + -2984;
loc_824C452C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4570
	if (ctx.cr6.eq) goto loc_824C4570;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x824c4550
	if (ctx.cr6.eq) goto loc_824C4550;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_824C4550:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c40b8
	ctx.lr = 0x824C4570;
	sub_824C40B8(ctx, base);
loc_824C4570:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x824c452c
	if (ctx.cr6.lt) goto loc_824C452C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C4584"))) PPC_WEAK_FUNC(sub_824C4584);
PPC_FUNC_IMPL(__imp__sub_824C4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C4588"))) PPC_WEAK_FUNC(sub_824C4588);
PPC_FUNC_IMPL(__imp__sub_824C4588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x824C4590;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c45b8
	if (ctx.cr6.lt) goto loc_824C45B8;
	// bl 0x8222e960
	ctx.lr = 0x824C45B8;
	sub_8222E960(ctx, base);
loc_824C45B8:
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4614
	if (ctx.cr6.eq) goto loc_824C4614;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4614
	if (ctx.cr0.eq) goto loc_824C4614;
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x824c45e4
	if (ctx.cr6.lt) goto loc_824C45E4;
	// bl 0x8222e960
	ctx.lr = 0x824C45E4;
	sub_8222E960(ctx, base);
loc_824C45E4:
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_824C4614:
	// stw r31,432(r24)
	PPC_STORE_U32(ctx.r24.u32 + 432, ctx.r31.u32);
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r27,2(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// beq 0x824c485c
	if (ctx.cr0.eq) goto loc_824C485C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c4754
	if (!ctx.cr6.lt) goto loc_824C4754;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x824c46ac
	if (ctx.cr6.gt) goto loc_824C46AC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-10480
	ctx.r12.s64 = ctx.r12.s64 + -10480;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,18068
	ctx.r12.s64 = ctx.r12.s64 + 18068;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824C469C;
	case 1:
		goto loc_824C469C;
	case 2:
		goto loc_824C4694;
	case 3:
		goto loc_824C4694;
	case 4:
		goto loc_824C4694;
	case 5:
		goto loc_824C46A4;
	case 6:
		goto loc_824C46A4;
	case 7:
		goto loc_824C469C;
	case 8:
		goto loc_824C4694;
	case 9:
		goto loc_824C469C;
	case 10:
		goto loc_824C4694;
	case 11:
		goto loc_824C46AC;
	case 12:
		goto loc_824C4694;
	case 13:
		goto loc_824C4694;
	case 14:
		goto loc_824C46AC;
	case 15:
		goto loc_824C46AC;
	case 16:
		goto loc_824C46AC;
	case 17:
		goto loc_824C46AC;
	case 18:
		goto loc_824C46A4;
	case 19:
		goto loc_824C4694;
	case 20:
		goto loc_824C4698;
	case 21:
		goto loc_824C4698;
	case 22:
		goto loc_824C4698;
	default:
		__builtin_unreachable();
	}
loc_824C4694:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_824C4698:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_824C469C:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x824c46b8
	goto loc_824C46B8;
loc_824C46A4:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x824c46b4
	goto loc_824C46B4;
loc_824C46AC:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x824c46b8
	if (!ctx.cr6.eq) goto loc_824C46B8;
loc_824C46B4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_824C46B8:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x824c46c4
	if (ctx.cr6.lt) goto loc_824C46C4;
	// bl 0x8222e960
	ctx.lr = 0x824C46C4;
	sub_8222E960(ctx, base);
loc_824C46C4:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x824c4850
	if (!ctx.cr6.eq) goto loc_824C4850;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x824c4708
	if (ctx.cr6.eq) goto loc_824C4708;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x824c46f0
	if (ctx.cr6.lt) goto loc_824C46F0;
	// bl 0x8222e960
	ctx.lr = 0x824C46F0;
	sub_8222E960(ctx, base);
loc_824C46F0:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c4704
	if (!ctx.cr6.lt) goto loc_824C4704;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C4704:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_824C4708:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x824c4738
	if (ctx.cr6.eq) goto loc_824C4738;
	// lwz r11,196(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r10,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c4734
	if (!ctx.cr6.lt) goto loc_824C4734;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C4734:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_824C4738:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x824c4850
	if (ctx.cr6.eq) goto loc_824C4850;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x824c4850
	goto loc_824C4850;
loc_824C4754:
	// beq cr6,0x824c475c
	if (ctx.cr6.eq) goto loc_824C475C;
	// bl 0x8222e960
	ctx.lr = 0x824C475C;
	sub_8222E960(ctx, base);
loc_824C475C:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x824c47a4
	if (ctx.cr6.eq) goto loc_824C47A4;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x824c4850
	if (!ctx.cr6.eq) goto loc_824C4850;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x824c4788
	if (ctx.cr6.lt) goto loc_824C4788;
	// bl 0x8222e960
	ctx.lr = 0x824C4788;
	sub_8222E960(ctx, base);
loc_824C4788:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c479c
	if (!ctx.cr6.lt) goto loc_824C479C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C479C:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x824c4850
	goto loc_824C4850;
loc_824C47A4:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x824c4850
	if (!ctx.cr6.eq) goto loc_824C4850;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c47c0
	if (!ctx.cr6.lt) goto loc_824C47C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C47C0:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// b 0x824c4850
	goto loc_824C4850;
loc_824C47C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824c482c
	if (!ctx.cr6.eq) goto loc_824C482C;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c484c
	if (!ctx.cr6.eq) goto loc_824C484C;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x824c4800
	if (ctx.cr6.lt) goto loc_824C4800;
	// bl 0x8222e960
	ctx.lr = 0x824C4800;
	sub_8222E960(ctx, base);
loc_824C4800:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c4814
	if (!ctx.cr6.lt) goto loc_824C4814;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824C4814:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x824c484c
	goto loc_824C484C;
loc_824C482C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824c484c
	if (!ctx.cr6.eq) goto loc_824C484C;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c4840
	if (ctx.cr6.lt) goto loc_824C4840;
	// bl 0x8222e960
	ctx.lr = 0x824C4840;
	sub_8222E960(ctx, base);
loc_824C4840:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_824C484C:
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_824C4850:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c47c8
	if (!ctx.cr0.eq) goto loc_824C47C8;
loc_824C485C:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C4868"))) PPC_WEAK_FUNC(sub_824C4868);
PPC_FUNC_IMPL(__imp__sub_824C4868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C4870;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c491c
	if (ctx.cr6.lt) goto loc_824C491C;
	// bl 0x8222e960
	ctx.lr = 0x824C48A0;
	sub_8222E960(ctx, base);
	// b 0x824c491c
	goto loc_824C491C;
loc_824C48A4:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824c4948
	if (!ctx.cr0.eq) goto loc_824C4948;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x824c48cc
	if (!ctx.cr6.eq) goto loc_824C48CC;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x824c4908
	goto loc_824C4908;
loc_824C48CC:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x824c4904
	if (ctx.cr6.eq) goto loc_824C4904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c4904
	if (ctx.cr6.eq) goto loc_824C4904;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x824c48ec
	if (!ctx.cr6.eq) goto loc_824C48EC;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x824c4908
	goto loc_824C4908;
loc_824C48EC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c4588
	ctx.lr = 0x824C48FC;
	sub_824C4588(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824c490c
	goto loc_824C490C;
loc_824C4904:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824C4908:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_824C490C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x824c4948
	if (ctx.cr6.gt) goto loc_824C4948;
loc_824C491C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x824c48a4
	if (!ctx.cr6.eq) goto loc_824C48A4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x824c4948
	if (!ctx.cr6.eq) goto loc_824C4948;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C4940:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_824C4948:
	// bl 0x8222e960
	ctx.lr = 0x824C494C;
	sub_8222E960(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824c4940
	goto loc_824C4940;
}

__attribute__((alias("__imp__sub_824C4954"))) PPC_WEAK_FUNC(sub_824C4954);
PPC_FUNC_IMPL(__imp__sub_824C4954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C4958"))) PPC_WEAK_FUNC(sub_824C4958);
PPC_FUNC_IMPL(__imp__sub_824C4958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C4960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16379
	ctx.r11.s64 = ctx.r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f61f8
	ctx.lr = 0x824C498C;
	sub_821F61F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824c49a4
	if (!ctx.cr0.eq) goto loc_824C49A4;
	// bl 0x8222e960
	ctx.lr = 0x824C4998;
	sub_8222E960(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824c49e4
	goto loc_824C49E4;
loc_824C49A4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c49d4
	if (ctx.cr6.eq) goto loc_824C49D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c49c8
	if (ctx.cr6.eq) goto loc_824C49C8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x824C49C8;
	sub_82219130(ctx, base);
loc_824C49C8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f6290
	ctx.lr = 0x824C49D4;
	sub_821F6290(ctx, base);
loc_824C49D4:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_824C49E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C49EC"))) PPC_WEAK_FUNC(sub_824C49EC);
PPC_FUNC_IMPL(__imp__sub_824C49EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C49F0"))) PPC_WEAK_FUNC(sub_824C49F0);
PPC_FUNC_IMPL(__imp__sub_824C49F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C49F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824c4a24
	if (ctx.cr6.lt) goto loc_824C4A24;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c4a28
	if (!ctx.cr6.gt) goto loc_824C4A28;
loc_824C4A24:
	// bl 0x8222e960
	ctx.lr = 0x824C4A28;
	sub_8222E960(ctx, base);
loc_824C4A28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x824c4a70
	if (!ctx.cr6.lt) goto loc_824C4A70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x824c4958
	ctx.lr = 0x824C4A58;
	sub_824C4958(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_824C4A70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C4A7C"))) PPC_WEAK_FUNC(sub_824C4A7C);
PPC_FUNC_IMPL(__imp__sub_824C4A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C4A80"))) PPC_WEAK_FUNC(sub_824C4A80);
PPC_FUNC_IMPL(__imp__sub_824C4A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C4A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x824c49f0
	ctx.lr = 0x824C4AA4;
	sub_824C49F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c4ab4
	if (ctx.cr0.eq) goto loc_824C4AB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c4bb8
	goto loc_824C4BB8;
loc_824C4AB4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c4af4
	if (!ctx.cr6.lt) goto loc_824C4AF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,87
	ctx.r8.s64 = 5701632;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,341
	ctx.r7.s64 = 341;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x824c4ba8
	goto loc_824C4BA8;
loc_824C4AF4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c4b68
	if (!ctx.cr6.lt) goto loc_824C4B68;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_824C4B10:
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c4b58
	if (ctx.cr0.eq) goto loc_824C4B58;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,23
	ctx.r8.s64 = 23;
	// addi r6,r10,35
	ctx.r6.s64 = ctx.r10.s64 + 35;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r6,r8,18,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824C4B58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x824c4b10
	if (ctx.cr6.lt) goto loc_824C4B10;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824C4B68:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c4bb4
	if (ctx.cr6.eq) goto loc_824C4BB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,88
	ctx.r8.s64 = 5767168;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,341
	ctx.r9.s64 = 341;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// ori r8,r7,34
	ctx.r8.u64 = ctx.r7.u64 | 34;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_824C4BA8:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824C4BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C4BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C4BC0"))) PPC_WEAK_FUNC(sub_824C4BC0);
PPC_FUNC_IMPL(__imp__sub_824C4BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x824C4BC8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r7,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r7.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// beq cr6,0x824c4c20
	if (ctx.cr6.eq) goto loc_824C4C20;
	// bl 0x8222e960
	ctx.lr = 0x824C4C20;
	sub_8222E960(ctx, base);
loc_824C4C20:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x824c4c3c
	if (!ctx.cr6.eq) goto loc_824C4C3C;
	// bl 0x8222e960
	ctx.lr = 0x824C4C38;
	sub_8222E960(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824C4C3C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	ctx.r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x824c4c54
	if (ctx.cr6.lt) goto loc_824C4C54;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824C4C54:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x824c4cc0
	if (!ctx.cr6.lt) goto loc_824C4CC0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824c4868
	ctx.lr = 0x824C4C94;
	sub_824C4868(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c49f0
	ctx.lr = 0x824C4CA0;
	sub_824C49F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c4cb0
	if (ctx.cr0.eq) goto loc_824C4CB0;
loc_824C4CA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c4fb4
	goto loc_824C4FB4;
loc_824C4CB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c4438
	ctx.lr = 0x824C4CC0;
	sub_824C4438(ctx, base);
loc_824C4CC0:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x824c4f20
	if (ctx.cr6.eq) goto loc_824C4F20;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r25,r11,12752
	ctx.r25.s64 = ctx.r11.s64 + 12752;
loc_824C4CDC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c49f0
	ctx.lr = 0x824C4CE8;
	sub_824C49F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824c4ca8
	if (!ctx.cr0.eq) goto loc_824C4CA8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x824c4d10
	if (ctx.cr0.eq) goto loc_824C4D10;
loc_824C4D08:
	// bl 0x8222e960
	ctx.lr = 0x824C4D0C;
	sub_8222E960(ctx, base);
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4D10:
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x824c4d2c
	if (!ctx.cr6.eq) goto loc_824C4D2C;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x824c4ee0
	goto loc_824C4EE0;
loc_824C4D2C:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x824c4edc
	if (ctx.cr6.eq) goto loc_824C4EDC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c4edc
	if (ctx.cr6.eq) goto loc_824C4EDC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x824c4d6c
	if (!ctx.cr6.eq) goto loc_824C4D6C;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x824c4d64
	if (ctx.cr6.lt) goto loc_824C4D64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824c3c50
	ctx.lr = 0x824C4D60;
	sub_824C3C50(ctx, base);
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4D64:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x824c4ee0
	goto loc_824C4EE0;
loc_824C4D6C:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x824c4d8c
	if (!ctx.cr6.eq) goto loc_824C4D8C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824c3d28
	ctx.lr = 0x824C4D88;
	sub_824C3D28(ctx, base);
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4D8C:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x824c4e20
	if (!ctx.cr6.eq) goto loc_824C4E20;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x824c4da4
	if (!ctx.cr6.lt) goto loc_824C4DA4;
	// bl 0x8222e960
	ctx.lr = 0x824C4DA0;
	sub_8222E960(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_824C4DA4:
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r28,21
	ctx.r31.u64 = ctx.r28.u32 & 0x7FF;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x824c4dc8
	if (ctx.cr6.lt) goto loc_824C4DC8;
	// bl 0x8222e960
	ctx.lr = 0x824C4DC4;
	sub_8222E960(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_824C4DC8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x824c4de0
	if (ctx.cr6.eq) goto loc_824C4DE0;
	// bl 0x8222e960
	ctx.lr = 0x824C4DE0;
	sub_8222E960(ctx, base);
loc_824C4DE0:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4E20:
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x824c4e5c
	if (!ctx.cr6.eq) goto loc_824C4E5C;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x824c4e34
	if (!ctx.cr6.lt) goto loc_824C4E34;
	// bl 0x8222e960
	ctx.lr = 0x824C4E34;
	sub_8222E960(ctx, base);
loc_824C4E34:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824c41f8
	ctx.lr = 0x824C4E50;
	sub_824C41F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c4fb4
	if (!ctx.cr0.eq) goto loc_824C4FB4;
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4E5C:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x824c4ea8
	if (!ctx.cr6.eq) goto loc_824C4EA8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c4eb0
	if (!ctx.cr6.eq) goto loc_824C4EB0;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x824c4e80
	if (!ctx.cr6.lt) goto loc_824C4E80;
	// bl 0x8222e960
	ctx.lr = 0x824C4E80;
	sub_8222E960(ctx, base);
loc_824C4E80:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c4a80
	ctx.lr = 0x824C4E94;
	sub_824C4A80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c4fb4
	if (!ctx.cr0.eq) goto loc_824C4FB4;
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// b 0x824c4ec0
	goto loc_824C4EC0;
loc_824C4EA8:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// bge cr6,0x824c4d08
	if (!ctx.cr6.lt) goto loc_824C4D08;
loc_824C4EB0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_824C4EC0:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C4ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c4ee4
	goto loc_824C4EE4;
loc_824C4EDC:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_824C4EE0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_824C4EE4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x824c4fbc
	if (ctx.cr6.gt) goto loc_824C4FBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x824c4f10
	if (ctx.cr6.lt) goto loc_824C4F10;
	// bl 0x8222e960
	ctx.lr = 0x824C4F10;
	sub_8222E960(ctx, base);
loc_824C4F10:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x824c4cdc
	if (!ctx.cr6.eq) goto loc_824C4CDC;
loc_824C4F20:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x824c4fc0
	if (!ctx.cr6.eq) goto loc_824C4FC0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c49f0
	ctx.lr = 0x824C4F44;
	sub_824C49F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824c4ca8
	if (!ctx.cr0.eq) goto loc_824C4CA8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c4f78
	if (!ctx.cr6.eq) goto loc_824C4F78;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824c4a80
	ctx.lr = 0x824C4F70;
	sub_824C4A80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c4fb4
	if (!ctx.cr0.eq) goto loc_824C4FB4;
loc_824C4F78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// ble cr6,0x824c4fb0
	if (!ctx.cr6.gt) goto loc_824C4FB0;
	// bl 0x8222e960
	ctx.lr = 0x824C4FB0;
	sub_8222E960(ctx, base);
loc_824C4FB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C4FB4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
loc_824C4FBC:
	// bl 0x8222e960
	ctx.lr = 0x824C4FC0;
	sub_8222E960(ctx, base);
loc_824C4FC0:
	// bl 0x8222e960
	ctx.lr = 0x824C4FC4;
	sub_8222E960(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824c4fb4
	goto loc_824C4FB4;
}

__attribute__((alias("__imp__sub_824C4FCC"))) PPC_WEAK_FUNC(sub_824C4FCC);
PPC_FUNC_IMPL(__imp__sub_824C4FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C4FD0"))) PPC_WEAK_FUNC(sub_824C4FD0);
PPC_FUNC_IMPL(__imp__sub_824C4FD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C5024"))) PPC_WEAK_FUNC(sub_824C5024);
PPC_FUNC_IMPL(__imp__sub_824C5024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5028"))) PPC_WEAK_FUNC(sub_824C5028);
PPC_FUNC_IMPL(__imp__sub_824C5028) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lbzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subfic r3,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r10.s64;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_824C509C:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x824c509c
	if (ctx.cr6.lt) goto loc_824C509C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C50C0"))) PPC_WEAK_FUNC(sub_824C50C0);
PPC_FUNC_IMPL(__imp__sub_824C50C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824C50C8;
	__savegprlr_25(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,14568(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c5118
	if (!ctx.cr6.eq) goto loc_824C5118;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,14580
	ctx.r11.s64 = ctx.r11.s64 + 14580;
	// lwz r10,14576(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14576);
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x824c52f4
	goto loc_824C52F4;
loc_824C5118:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x824c5144
	if (ctx.cr6.lt) goto loc_824C5144;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,14580
	ctx.r11.s64 = ctx.r11.s64 + 14580;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r5,r9,-10204
	ctx.r5.s64 = ctx.r9.s64 + -10204;
	// addi r4,r8,-10212
	ctx.r4.s64 = ctx.r8.s64 + -10212;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x824c521c
	goto loc_824C521C;
loc_824C5144:
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// mulli r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 * 12;
	// addi r11,r11,-2920
	ctx.r11.s64 = ctx.r11.s64 + -2920;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c5170
	if (!ctx.cr6.eq) goto loc_824C5170;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x824c52f8
	if (!ctx.cr6.eq) goto loc_824C52F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c52f8
	if (ctx.cr6.eq) goto loc_824C52F8;
loc_824C5170:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,13528
	ctx.r31.s64 = ctx.r11.s64 + 13528;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82229558
	ctx.lr = 0x824C5198;
	sub_82229558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r11,1022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-12396
	ctx.r5.s64 = ctx.r10.s64 + -12396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x82600c40
	ctx.lr = 0x824C51B8;
	sub_82600C40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r10,14580
	ctx.r30.s64 = ctx.r10.s64 + 14580;
	// beq cr6,0x824c51d8
	if (ctx.cr6.eq) goto loc_824C51D8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x824c51fc
	if (!ctx.cr6.eq) goto loc_824C51FC;
loc_824C51D8:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C51FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C51FC:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c522c
	if (!ctx.cr6.eq) goto loc_824C522C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-10212
	ctx.r4.s64 = ctx.r11.s64 + -10212;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_824C521C:
	// lwz r10,14568(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14568);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C5228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c52f8
	goto loc_824C52F8;
loc_824C522C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824c52e4
	if (!ctx.cr6.eq) goto loc_824C52E4;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r11,14552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c52e4
	if (ctx.cr6.eq) goto loc_824C52E4;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lwz r11,14560(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c52e4
	if (ctx.cr6.eq) goto loc_824C52E4;
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lwz r11,14556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c52e4
	if (ctx.cr6.eq) goto loc_824C52E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,14552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14552);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-10224
	ctx.r4.s64 = ctx.r11.s64 + -10224;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C5280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x824c52f8
	if (ctx.cr0.eq) goto loc_824C52F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824C5290:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824c5290
	if (!ctx.cr6.eq) goto loc_824C5290;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,14560(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14560);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C52CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,14556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14556);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C52E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c52f8
	goto loc_824C52F8;
loc_824C52E4:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,14576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824C52F4:
	// bctrl 
	ctx.lr = 0x824C52F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C52F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C5300"))) PPC_WEAK_FUNC(sub_824C5300);
PPC_FUNC_IMPL(__imp__sub_824C5300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,14552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14552);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r10,14560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14560);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r10,14556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14556);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r11,14552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14552);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,14564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824C5350"))) PPC_WEAK_FUNC(sub_824C5350);
PPC_FUNC_IMPL(__imp__sub_824C5350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C5354"))) PPC_WEAK_FUNC(sub_824C5354);
PPC_FUNC_IMPL(__imp__sub_824C5354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5358"))) PPC_WEAK_FUNC(sub_824C5358);
PPC_FUNC_IMPL(__imp__sub_824C5358) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r10,14556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14556);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r11,14556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14556);
	// lwz r3,14564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824C5388"))) PPC_WEAK_FUNC(sub_824C5388);
PPC_FUNC_IMPL(__imp__sub_824C5388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C538C"))) PPC_WEAK_FUNC(sub_824C538C);
PPC_FUNC_IMPL(__imp__sub_824C538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5390"))) PPC_WEAK_FUNC(sub_824C5390);
PPC_FUNC_IMPL(__imp__sub_824C5390) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C5398;
	__savegprlr_28(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// addi r30,r11,14580
	ctx.r30.s64 = ctx.r11.s64 + 14580;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// stw r10,14580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14580, ctx.r10.u32);
	// stw r5,14552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14552, ctx.r5.u32);
	// stw r3,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r3.u32);
	// stw r4,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r4.u32);
	// stw r6,14556(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14556, ctx.r6.u32);
	// stw r7,14560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14560, ctx.r7.u32);
	// stw r8,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C53D0"))) PPC_WEAK_FUNC(sub_824C53D0);
PPC_FUNC_IMPL(__imp__sub_824C53D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C5414;
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

__attribute__((alias("__imp__sub_824C5424"))) PPC_WEAK_FUNC(sub_824C5424);
PPC_FUNC_IMPL(__imp__sub_824C5424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5428"))) PPC_WEAK_FUNC(sub_824C5428);
PPC_FUNC_IMPL(__imp__sub_824C5428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C5474;
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

__attribute__((alias("__imp__sub_824C5484"))) PPC_WEAK_FUNC(sub_824C5484);
PPC_FUNC_IMPL(__imp__sub_824C5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5488"))) PPC_WEAK_FUNC(sub_824C5488);
PPC_FUNC_IMPL(__imp__sub_824C5488) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824C5490;
	__savegprlr_14(ctx, base);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r10,-1960
	ctx.r9.s64 = ctx.r10.s64 + -1960;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r11,r11,-23372
	ctx.r11.s64 = ctx.r11.s64 + -23372;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -760, ctx.r11.u32);
	// addi r10,r10,-608
	ctx.r10.s64 = ctx.r10.s64 + -608;
	// addi r9,r9,-32368
	ctx.r9.s64 = ctx.r9.s64 + -32368;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r10,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r10.u32);
	// stw r9,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r9.u32);
	// addi r10,r7,-9652
	ctx.r10.s64 = ctx.r7.s64 + -9652;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r11,r8,-32372
	ctx.r11.s64 = ctx.r8.s64 + -32372;
	// addi r9,r6,-9660
	ctx.r9.s64 = ctx.r6.s64 + -9660;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r11,-748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -748, ctx.r11.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r10,-744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -744, ctx.r10.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r9,-740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -740, ctx.r9.u32);
	// addi r11,r5,-9668
	ctx.r11.s64 = ctx.r5.s64 + -9668;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r10,r4,-9676
	ctx.r10.s64 = ctx.r4.s64 + -9676;
	// addi r9,r3,-9684
	ctx.r9.s64 = ctx.r3.s64 + -9684;
	// stw r11,-736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -736, ctx.r11.u32);
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// stw r10,-732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -732, ctx.r10.u32);
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// stw r9,-728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -728, ctx.r9.u32);
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// addi r11,r31,-32400
	ctx.r11.s64 = ctx.r31.s64 + -32400;
	// addi r10,r30,-32408
	ctx.r10.s64 = ctx.r30.s64 + -32408;
	// addi r9,r29,-32412
	ctx.r9.s64 = ctx.r29.s64 + -32412;
	// stw r11,-724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -724, ctx.r11.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r10,-720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -720, ctx.r10.u32);
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// stw r9,-716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -716, ctx.r9.u32);
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// addi r11,r28,-9500
	ctx.r11.s64 = ctx.r28.s64 + -9500;
	// addi r10,r27,-32428
	ctx.r10.s64 = ctx.r27.s64 + -32428;
	// addi r9,r26,-32436
	ctx.r9.s64 = ctx.r26.s64 + -32436;
	// stw r11,-712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -712, ctx.r11.u32);
	// stw r10,-708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -708, ctx.r10.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r9,-704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -704, ctx.r9.u32);
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lis r29,-32251
	ctx.r29.s64 = -2113601536;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r31,r31,-9584
	ctx.r31.s64 = ctx.r31.s64 + -9584;
	// addi r30,r30,-9592
	ctx.r30.s64 = ctx.r30.s64 + -9592;
	// addi r29,r29,-9600
	ctx.r29.s64 = ctx.r29.s64 + -9600;
	// addi r28,r28,-9608
	ctx.r28.s64 = ctx.r28.s64 + -9608;
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// addi r11,r11,-32440
	ctx.r11.s64 = ctx.r11.s64 + -32440;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// addi r9,r9,-32452
	ctx.r9.s64 = ctx.r9.s64 + -32452;
	// addi r8,r8,-32460
	ctx.r8.s64 = ctx.r8.s64 + -32460;
	// addi r7,r7,-32468
	ctx.r7.s64 = ctx.r7.s64 + -32468;
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r24,-32055
	ctx.r24.s64 = -2100756480;
	// addi r3,r3,-9400
	ctx.r3.s64 = ctx.r3.s64 + -9400;
	// stw r31,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// addi r23,r24,-2600
	ctx.r23.s64 = ctx.r24.s64 + -2600;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// addi r6,r6,-9516
	ctx.r6.s64 = ctx.r6.s64 + -9516;
	// stw r29,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// addi r5,r5,-9368
	ctx.r5.s64 = ctx.r5.s64 + -9368;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// stw r8,-688(r25)
	PPC_STORE_U32(ctx.r25.u32 + -688, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,-668(r25)
	PPC_STORE_U32(ctx.r25.u32 + -668, ctx.r3.u32);
	// addi r4,r4,-9384
	ctx.r4.s64 = ctx.r4.s64 + -9384;
	// stw r31,-664(r25)
	PPC_STORE_U32(ctx.r25.u32 + -664, ctx.r31.u32);
	// addi r27,r27,-32568
	ctx.r27.s64 = ctx.r27.s64 + -32568;
	// stw r30,-660(r25)
	PPC_STORE_U32(ctx.r25.u32 + -660, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-656(r25)
	PPC_STORE_U32(ctx.r25.u32 + -656, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,-696(r25)
	PPC_STORE_U32(ctx.r25.u32 + -696, ctx.r10.u32);
	// addi r26,r26,-32216
	ctx.r26.s64 = ctx.r26.s64 + -32216;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r7,-684(r25)
	PPC_STORE_U32(ctx.r25.u32 + -684, ctx.r7.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,-652(r25)
	PPC_STORE_U32(ctx.r25.u32 + -652, ctx.r28.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r27,-648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -648, ctx.r27.u32);
	// stw r6,-680(r25)
	PPC_STORE_U32(ctx.r25.u32 + -680, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,-676(r25)
	PPC_STORE_U32(ctx.r25.u32 + -676, ctx.r5.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r4,-672(r25)
	PPC_STORE_U32(ctx.r25.u32 + -672, ctx.r4.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r3,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,40(r23)
	PPC_STORE_U32(ctx.r23.u32 + 40, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,-700(r25)
	PPC_STORE_U32(ctx.r25.u32 + -700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,-692(r25)
	PPC_STORE_U32(ctx.r25.u32 + -692, ctx.r9.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r26,-644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -644, ctx.r26.u32);
	// stw r30,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r7,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r7.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r8,76(r23)
	PPC_STORE_U32(ctx.r23.u32 + 76, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r7.u32);
	// stw r28,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r28.u32);
	// addi r8,r3,-9632
	ctx.r8.s64 = ctx.r3.s64 + -9632;
	// stw r27,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r27.u32);
	// addi r7,r31,-9644
	ctx.r7.s64 = ctx.r31.s64 + -9644;
	// stw r6,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r6.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r5,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r5.u32);
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// stw r4,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r4.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r9,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r9.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r25,-2600(r24)
	PPC_STORE_U32(ctx.r24.u32 + -2600, ctx.r25.u32);
	// addi r3,r30,-32660
	ctx.r3.s64 = ctx.r30.s64 + -32660;
	// stw r26,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r26.u32);
	// addi r31,r29,-32668
	ctx.r31.s64 = ctx.r29.s64 + -32668;
	// stw r11,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r11.u32);
	// stw r10,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r10.u32);
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r6,r6,-32608
	ctx.r6.s64 = ctx.r6.s64 + -32608;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// addi r30,r28,-9408
	ctx.r30.s64 = ctx.r28.s64 + -9408;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r29,r27,-9416
	ctx.r29.s64 = ctx.r27.s64 + -9416;
	// stw r11,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r23)
	PPC_STORE_U32(ctx.r23.u32 + 92, ctx.r9.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r6,-400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -400, ctx.r6.u32);
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r9.u32);
	// lis r26,-32251
	ctx.r26.s64 = -2113601536;
	// stw r10,88(r23)
	PPC_STORE_U32(ctx.r23.u32 + 88, ctx.r10.u32);
	// lis r25,-32241
	ctx.r25.s64 = -2112946176;
	// stw r10,100(r23)
	PPC_STORE_U32(ctx.r23.u32 + 100, ctx.r10.u32);
	// lis r24,-32241
	ctx.r24.s64 = -2112946176;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r22,-32241
	ctx.r22.s64 = -2112946176;
	// stw r11,-520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -520, ctx.r11.u32);
	// lis r21,-32251
	ctx.r21.s64 = -2113601536;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r5,r5,-9620
	ctx.r5.s64 = ctx.r5.s64 + -9620;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
	// addi r4,r4,-32628
	ctx.r4.s64 = ctx.r4.s64 + -32628;
	// stw r10,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r10.u32);
	// addi r28,r28,-9424
	ctx.r28.s64 = ctx.r28.s64 + -9424;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r27,r27,-9432
	ctx.r27.s64 = ctx.r27.s64 + -9432;
	// stw r11,-496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -496, ctx.r11.u32);
	// addi r26,r26,-9440
	ctx.r26.s64 = ctx.r26.s64 + -9440;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r9.u32);
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r25,r25,-32716
	ctx.r25.s64 = ctx.r25.s64 + -32716;
	// stw r10,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
	// addi r24,r24,-32724
	ctx.r24.s64 = ctx.r24.s64 + -32724;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r23,r23,-32728
	ctx.r23.s64 = ctx.r23.s64 + -32728;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r22,-32740
	ctx.r22.s64 = ctx.r22.s64 + -32740;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// addi r21,r21,-9708
	ctx.r21.s64 = ctx.r21.s64 + -9708;
	// lwz r6,-192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -484, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-460(r6)
	PPC_STORE_U32(ctx.r6.u32 + -460, ctx.r11.u32);
	// stw r11,-448(r6)
	PPC_STORE_U32(ctx.r6.u32 + -448, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,-512(r6)
	PPC_STORE_U32(ctx.r6.u32 + -512, ctx.r9.u32);
	// addi r20,r11,-32760
	ctx.r20.s64 = ctx.r11.s64 + -32760;
	// stw r10,-504(r6)
	PPC_STORE_U32(ctx.r6.u32 + -504, ctx.r10.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r9,-500(r6)
	PPC_STORE_U32(ctx.r6.u32 + -500, ctx.r9.u32);
	// stw r10,-492(r6)
	PPC_STORE_U32(ctx.r6.u32 + -492, ctx.r10.u32);
	// addi r19,r11,-9452
	ctx.r19.s64 = ctx.r11.s64 + -9452;
	// stw r9,-488(r6)
	PPC_STORE_U32(ctx.r6.u32 + -488, ctx.r9.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r10,-480(r6)
	PPC_STORE_U32(ctx.r6.u32 + -480, ctx.r10.u32);
	// stw r9,-476(r6)
	PPC_STORE_U32(ctx.r6.u32 + -476, ctx.r9.u32);
	// addi r18,r11,-9460
	ctx.r18.s64 = ctx.r11.s64 + -9460;
	// stw r10,-468(r6)
	PPC_STORE_U32(ctx.r6.u32 + -468, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,-464(r6)
	PPC_STORE_U32(ctx.r6.u32 + -464, ctx.r9.u32);
	// stw r10,-456(r6)
	PPC_STORE_U32(ctx.r6.u32 + -456, ctx.r10.u32);
	// addi r11,r11,32756
	ctx.r11.s64 = ctx.r11.s64 + 32756;
	// stw r9,-452(r6)
	PPC_STORE_U32(ctx.r6.u32 + -452, ctx.r9.u32);
	// stw r10,-444(r6)
	PPC_STORE_U32(ctx.r6.u32 + -444, ctx.r10.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,-372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -372, ctx.r30.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r17,-32251
	ctx.r17.s64 = -2113601536;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// lis r16,-32251
	ctx.r16.s64 = -2113601536;
	// stw r9,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// stw r5,-396(r6)
	PPC_STORE_U32(ctx.r6.u32 + -396, ctx.r5.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r8,-388(r6)
	PPC_STORE_U32(ctx.r6.u32 + -388, ctx.r8.u32);
	// lis r15,-32242
	ctx.r15.s64 = -2113011712;
	// addi r8,r5,-9472
	ctx.r8.s64 = ctx.r5.s64 + -9472;
	// stw r4,-392(r6)
	PPC_STORE_U32(ctx.r6.u32 + -392, ctx.r4.u32);
	// stw r3,-380(r6)
	PPC_STORE_U32(ctx.r6.u32 + -380, ctx.r3.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r31,-376(r6)
	PPC_STORE_U32(ctx.r6.u32 + -376, ctx.r31.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r7,-384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -384, ctx.r7.u32);
	// addi r7,r4,32732
	ctx.r7.s64 = ctx.r4.s64 + 32732;
	// stw r10,-436(r6)
	PPC_STORE_U32(ctx.r6.u32 + -436, ctx.r10.u32);
	// addi r4,r31,-9840
	ctx.r4.s64 = ctx.r31.s64 + -9840;
	// stw r10,-424(r6)
	PPC_STORE_U32(ctx.r6.u32 + -424, ctx.r10.u32);
	// stw r10,-412(r6)
	PPC_STORE_U32(ctx.r6.u32 + -412, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,-440(r6)
	PPC_STORE_U32(ctx.r6.u32 + -440, ctx.r11.u32);
	// lis r14,-32251
	ctx.r14.s64 = -2113601536;
	// stw r11,-428(r6)
	PPC_STORE_U32(ctx.r6.u32 + -428, ctx.r11.u32);
	// stw r11,-416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -416, ctx.r11.u32);
	// stw r29,-368(r6)
	PPC_STORE_U32(ctx.r6.u32 + -368, ctx.r29.u32);
	// lis r29,-32251
	ctx.r29.s64 = -2113601536;
	// stw r9,-432(r6)
	PPC_STORE_U32(ctx.r6.u32 + -432, ctx.r9.u32);
	// stw r9,-420(r6)
	PPC_STORE_U32(ctx.r6.u32 + -420, ctx.r9.u32);
	// stw r9,-408(r6)
	PPC_STORE_U32(ctx.r6.u32 + -408, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r28,-364(r6)
	PPC_STORE_U32(ctx.r6.u32 + -364, ctx.r28.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// lwz r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,-360(r6)
	PPC_STORE_U32(ctx.r6.u32 + -360, ctx.r27.u32);
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// lwz r31,-184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r26,-356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -356, ctx.r26.u32);
	// lis r26,-32251
	ctx.r26.s64 = -2113601536;
	// stw r25,-352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -352, ctx.r25.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,-404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -404, ctx.r11.u32);
	// lis r25,-32251
	ctx.r25.s64 = -2113601536;
	// stw r24,-348(r5)
	PPC_STORE_U32(ctx.r5.u32 + -348, ctx.r24.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r5,r3,-9828
	ctx.r5.s64 = ctx.r3.s64 + -9828;
	// lwz r3,-188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r23,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r23.u32);
	// stw r22,-336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -336, ctx.r22.u32);
	// addi r22,r16,-9940
	ctx.r22.s64 = ctx.r16.s64 + -9940;
	// stw r21,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r21.u32);
	// stw r20,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r20.u32);
	// stw r19,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r19.u32);
	// addi r11,r10,-9484
	ctx.r11.s64 = ctx.r10.s64 + -9484;
	// lwz r10,-188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,-312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -312, ctx.r31.u32);
	// addi r31,r29,-9864
	ctx.r31.s64 = ctx.r29.s64 + -9864;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r30,-9852
	ctx.r3.s64 = ctx.r30.s64 + -9852;
	// stw r18,-328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -328, ctx.r18.u32);
	// addi r30,r28,-9880
	ctx.r30.s64 = ctx.r28.s64 + -9880;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// addi r10,r9,-9492
	ctx.r10.s64 = ctx.r9.s64 + -9492;
	// addi r29,r27,-9896
	ctx.r29.s64 = ctx.r27.s64 + -9896;
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r9,r6,-32200
	ctx.r9.s64 = ctx.r6.s64 + -32200;
	// lwz r23,-168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r28,r26,-9912
	ctx.r28.s64 = ctx.r26.s64 + -9912;
	// lwz r26,-180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r27,r25,-9932
	ctx.r27.s64 = ctx.r25.s64 + -9932;
	// lwz r25,-176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r6,r17,-9816
	ctx.r6.s64 = ctx.r17.s64 + -9816;
	// lwz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lis r18,-32055
	ctx.r18.s64 = -2100756480;
	// addi r21,r15,32572
	ctx.r21.s64 = ctx.r15.s64 + 32572;
	// addi r17,r18,-2160
	ctx.r17.s64 = ctx.r18.s64 + -2160;
	// addi r20,r14,-9952
	ctx.r20.s64 = ctx.r14.s64 + -9952;
	// stw r19,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r19.u32);
	// stw r11,-320(r19)
	PPC_STORE_U32(ctx.r19.u32 + -320, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r8,-304(r19)
	PPC_STORE_U32(ctx.r19.u32 + -304, ctx.r8.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r7,-300(r19)
	PPC_STORE_U32(ctx.r19.u32 + -300, ctx.r7.u32);
	// addi r11,r11,-9976
	ctx.r11.s64 = ctx.r11.s64 + -9976;
	// stw r10,-316(r19)
	PPC_STORE_U32(ctx.r19.u32 + -316, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,-308(r19)
	PPC_STORE_U32(ctx.r19.u32 + -308, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,-232(r19)
	PPC_STORE_U32(ctx.r19.u32 + -232, ctx.r11.u32);
	// addi r8,r8,-10012
	ctx.r8.s64 = ctx.r8.s64 + -10012;
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r7,r7,32532
	ctx.r7.s64 = ctx.r7.s64 + 32532;
	// stw r6,-296(r19)
	PPC_STORE_U32(ctx.r19.u32 + -296, ctx.r6.u32);
	// addi r10,r10,-9988
	ctx.r10.s64 = ctx.r10.s64 + -9988;
	// stw r5,-292(r19)
	PPC_STORE_U32(ctx.r19.u32 + -292, ctx.r5.u32);
	// addi r9,r9,-10000
	ctx.r9.s64 = ctx.r9.s64 + -10000;
	// stw r4,-288(r19)
	PPC_STORE_U32(ctx.r19.u32 + -288, ctx.r4.u32);
	// stw r3,-284(r19)
	PPC_STORE_U32(ctx.r19.u32 + -284, ctx.r3.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r8,-228(r19)
	PPC_STORE_U32(ctx.r19.u32 + -228, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,-208(r19)
	PPC_STORE_U32(ctx.r19.u32 + -208, ctx.r7.u32);
	// addi r6,r6,32528
	ctx.r6.s64 = ctx.r6.s64 + 32528;
	// stw r31,-280(r19)
	PPC_STORE_U32(ctx.r19.u32 + -280, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,-276(r19)
	PPC_STORE_U32(ctx.r19.u32 + -276, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-272(r19)
	PPC_STORE_U32(ctx.r19.u32 + -272, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r28,-268(r19)
	PPC_STORE_U32(ctx.r19.u32 + -268, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,-264(r19)
	PPC_STORE_U32(ctx.r19.u32 + -264, ctx.r27.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,-260(r19)
	PPC_STORE_U32(ctx.r19.u32 + -260, ctx.r26.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,-220(r19)
	PPC_STORE_U32(ctx.r19.u32 + -220, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r9,-212(r19)
	PPC_STORE_U32(ctx.r19.u32 + -212, ctx.r9.u32);
	// addi r19,r11,-9964
	ctx.r19.s64 = ctx.r11.s64 + -9964;
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r5,-2160(r18)
	PPC_STORE_U32(ctx.r18.u32 + -2160, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r3.u32);
	// stw r31,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r31.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lwz r7,-168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r6,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r25,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,-252(r7)
	PPC_STORE_U32(ctx.r7.u32 + -252, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r30.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r23,-248(r6)
	PPC_STORE_U32(ctx.r6.u32 + -248, ctx.r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-244(r5)
	PPC_STORE_U32(ctx.r5.u32 + -244, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,-240(r4)
	PPC_STORE_U32(ctx.r4.u32 + -240, ctx.r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r10.u32);
	// stw r10,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r10.u32);
	// stw r10,96(r17)
	PPC_STORE_U32(ctx.r17.u32 + 96, ctx.r10.u32);
	// stw r10,108(r17)
	PPC_STORE_U32(ctx.r17.u32 + 108, ctx.r10.u32);
	// stw r10,120(r17)
	PPC_STORE_U32(ctx.r17.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r9.u32);
	// stw r10,132(r17)
	PPC_STORE_U32(ctx.r17.u32 + 132, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r17)
	PPC_STORE_U32(ctx.r17.u32 + 84, ctx.r9.u32);
	// stw r10,144(r17)
	PPC_STORE_U32(ctx.r17.u32 + 144, ctx.r10.u32);
	// stw r10,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,100(r17)
	PPC_STORE_U32(ctx.r17.u32 + 100, ctx.r9.u32);
	// stw r10,184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 184, ctx.r10.u32);
	// stw r10,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,112(r17)
	PPC_STORE_U32(ctx.r17.u32 + 112, ctx.r9.u32);
	// stw r9,124(r17)
	PPC_STORE_U32(ctx.r17.u32 + 124, ctx.r9.u32);
	// stw r9,136(r17)
	PPC_STORE_U32(ctx.r17.u32 + 136, ctx.r9.u32);
	// stw r9,148(r17)
	PPC_STORE_U32(ctx.r17.u32 + 148, ctx.r9.u32);
	// stw r9,160(r17)
	PPC_STORE_U32(ctx.r17.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,196(r17)
	PPC_STORE_U32(ctx.r17.u32 + 196, ctx.r10.u32);
	// lwz r31,-168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r11,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r11.u32);
	// stw r11,88(r17)
	PPC_STORE_U32(ctx.r17.u32 + 88, ctx.r11.u32);
	// stw r11,92(r17)
	PPC_STORE_U32(ctx.r17.u32 + 92, ctx.r11.u32);
	// stw r31,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r11,104(r17)
	PPC_STORE_U32(ctx.r17.u32 + 104, ctx.r11.u32);
	// stw r11,116(r17)
	PPC_STORE_U32(ctx.r17.u32 + 116, ctx.r11.u32);
	// stw r11,128(r17)
	PPC_STORE_U32(ctx.r17.u32 + 128, ctx.r11.u32);
	// stw r11,140(r17)
	PPC_STORE_U32(ctx.r17.u32 + 140, ctx.r11.u32);
	// stw r11,152(r17)
	PPC_STORE_U32(ctx.r17.u32 + 152, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,168(r17)
	PPC_STORE_U32(ctx.r17.u32 + 168, ctx.r9.u32);
	// stw r9,172(r17)
	PPC_STORE_U32(ctx.r17.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r8.u32);
	// stw r20,-224(r3)
	PPC_STORE_U32(ctx.r3.u32 + -224, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r19.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,176(r17)
	PPC_STORE_U32(ctx.r17.u32 + 176, ctx.r11.u32);
	// stw r11,180(r17)
	PPC_STORE_U32(ctx.r17.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,-1960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1960, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r29.u32);
	// stw r28,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r28.u32);
	// stw r27,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r27.u32);
	// stw r26,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r26.u32);
	// stw r7,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r7.u32);
	// stw r6,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r6.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,64(r17)
	PPC_STORE_U32(ctx.r17.u32 + 64, ctx.r5.u32);
	// stw r4,60(r17)
	PPC_STORE_U32(ctx.r17.u32 + 60, ctx.r4.u32);
	// stw r3,76(r17)
	PPC_STORE_U32(ctx.r17.u32 + 76, ctx.r3.u32);
	// stw r31,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r31.u32);
	// stw r30,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r30.u32);
	// stw r11,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r9,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r9.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// stw r10,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// stw r9,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r9.u32);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// stw r10,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// stw r9,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r9.u32);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r9,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r9.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// stw r9,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// stw r11,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// stw r10,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// stw r9,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r9.u32);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// stw r9,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r9.u32);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r9,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r9.u32);
	// stw r11,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r9,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r9.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r10,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// stw r9,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r9.u32);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r10,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// stw r9,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r9.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C5CA4"))) PPC_WEAK_FUNC(sub_824C5CA4);
PPC_FUNC_IMPL(__imp__sub_824C5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C5CA8"))) PPC_WEAK_FUNC(sub_824C5CA8);
PPC_FUNC_IMPL(__imp__sub_824C5CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C5CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-32312
	ctx.r30.s64 = ctx.r11.s64 + -32312;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c5ce0
	if (ctx.cr0.eq) goto loc_824C5CE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-9344
	ctx.r5.s64 = ctx.r11.s64 + -9344;
	// bl 0x824c5428
	ctx.lr = 0x824C5CE0;
	sub_824C5428(ctx, base);
loc_824C5CE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5CF0;
	sub_824C5428(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c5d10
	if (ctx.cr0.eq) goto loc_824C5D10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-9352
	ctx.r5.s64 = ctx.r11.s64 + -9352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5D10;
	sub_824C5428(ctx, base);
loc_824C5D10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C5D18"))) PPC_WEAK_FUNC(sub_824C5D18);
PPC_FUNC_IMPL(__imp__sub_824C5D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C5D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-32312
	ctx.r30.s64 = ctx.r11.s64 + -32312;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c5d50
	if (ctx.cr0.eq) goto loc_824C5D50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-9336
	ctx.r5.s64 = ctx.r11.s64 + -9336;
	// bl 0x824c5428
	ctx.lr = 0x824C5D50;
	sub_824C5428(ctx, base);
loc_824C5D50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5D60;
	sub_824C5428(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c5d80
	if (ctx.cr0.eq) goto loc_824C5D80;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-9352
	ctx.r5.s64 = ctx.r11.s64 + -9352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5D80;
	sub_824C5428(ctx, base);
loc_824C5D80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C5D88"))) PPC_WEAK_FUNC(sub_824C5D88);
PPC_FUNC_IMPL(__imp__sub_824C5D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x824C5D90;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// addi r4,r10,-16764
	ctx.r4.s64 = ctx.r10.s64 + -16764;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi r21,r9,31
	ctx.r21.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x824c5428
	ctx.lr = 0x824C5DCC;
	sub_824C5428(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,-9276
	ctx.r20.s64 = ctx.r11.s64 + -9276;
	// beq cr6,0x824c5de8
	if (ctx.cr6.eq) goto loc_824C5DE8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5DE8;
	sub_824C5428(ctx, base);
loc_824C5DE8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x824c5dfc
	if (!ctx.cr6.eq) goto loc_824C5DFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824c5e00
	if (!ctx.cr6.eq) goto loc_824C5E00;
loc_824C5DFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C5E00:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x824c5e18
	if (!ctx.cr6.eq) goto loc_824C5E18;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824c5e1c
	if (!ctx.cr6.eq) goto loc_824C5E1C;
loc_824C5E18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C5E1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,-32312
	ctx.r29.s64 = ctx.r10.s64 + -32312;
	// beq 0x824c5e44
	if (ctx.cr0.eq) goto loc_824C5E44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32276
	ctx.r4.s64 = ctx.r11.s64 + -32276;
	// bl 0x824c5428
	ctx.lr = 0x824C5E40;
	sub_824C5428(ctx, base);
	// b 0x824c5e6c
	goto loc_824C5E6C;
loc_824C5E44:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x824c5e58
	if (ctx.cr6.eq) goto loc_824C5E58;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,-32316
	ctx.r5.s64 = ctx.r11.s64 + -32316;
	// b 0x824c5e60
	goto loc_824C5E60;
loc_824C5E58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,-6440
	ctx.r5.s64 = ctx.r11.s64 + -6440;
loc_824C5E60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5E6C;
	sub_824C5428(ctx, base);
loc_824C5E6C:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x824c5e84
	if (ctx.cr0.eq) goto loc_824C5E84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32308
	ctx.r4.s64 = ctx.r11.s64 + -32308;
	// bl 0x824c5428
	ctx.lr = 0x824C5E84;
	sub_824C5428(ctx, base);
loc_824C5E84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c5ed4
	if (!ctx.cr6.eq) goto loc_824C5ED4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x824c5ec0
	if (ctx.cr6.eq) goto loc_824C5EC0;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x824c5eb4
	if (ctx.cr6.eq) goto loc_824C5EB4;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x824c5ec0
	if (!ctx.cr6.eq) goto loc_824C5EC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,22404
	ctx.r5.s64 = ctx.r11.s64 + 22404;
loc_824C5EAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c5ecc
	goto loc_824C5ECC;
loc_824C5EB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-13168
	ctx.r5.s64 = ctx.r11.s64 + -13168;
	// b 0x824c5eac
	goto loc_824C5EAC;
loc_824C5EC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-18520
	ctx.r4.s64 = ctx.r11.s64 + -18520;
loc_824C5ECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C5ED4;
	sub_824C5428(ctx, base);
loc_824C5ED4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x824c5ef4
	if (!ctx.cr6.eq) goto loc_824C5EF4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x824c5ef4
	if (ctx.cr6.eq) goto loc_824C5EF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32260
	ctx.r4.s64 = ctx.r11.s64 + -32260;
	// bl 0x824c5428
	ctx.lr = 0x824C5EF4;
	sub_824C5428(ctx, base);
loc_824C5EF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824c5f0c
	if (ctx.cr6.eq) goto loc_824C5F0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32300
	ctx.r4.s64 = ctx.r11.s64 + -32300;
	// bl 0x824c5428
	ctx.lr = 0x824C5F0C;
	sub_824C5428(ctx, base);
loc_824C5F0C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x824c5f88
	if (!ctx.cr6.eq) goto loc_824C5F88;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x824c60e0
	if (ctx.cr6.eq) goto loc_824C60E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x824c5428
	ctx.lr = 0x824C5F2C;
	sub_824C5428(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c5f44
	if (ctx.cr0.eq) goto loc_824C5F44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32292
	ctx.r4.s64 = ctx.r11.s64 + -32292;
	// bl 0x824c5428
	ctx.lr = 0x824C5F44;
	sub_824C5428(ctx, base);
loc_824C5F44:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c5f5c
	if (ctx.cr0.eq) goto loc_824C5F5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32288
	ctx.r4.s64 = ctx.r11.s64 + -32288;
	// bl 0x824c5428
	ctx.lr = 0x824C5F5C;
	sub_824C5428(ctx, base);
loc_824C5F5C:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c5f74
	if (ctx.cr0.eq) goto loc_824C5F74;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32284
	ctx.r4.s64 = ctx.r11.s64 + -32284;
	// bl 0x824c5428
	ctx.lr = 0x824C5F74;
	sub_824C5428(ctx, base);
loc_824C5F74:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c60e0
	if (ctx.cr0.eq) goto loc_824C60E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32280
	ctx.r4.s64 = ctx.r11.s64 + -32280;
	// b 0x824c60d8
	goto loc_824C60D8;
loc_824C5F88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x824c5428
	ctx.lr = 0x824C5F98;
	sub_824C5428(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// clrlwi. r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,22928
	ctx.r28.s64 = ctx.r11.s64 + 22928;
	// addi r30,r10,21348
	ctx.r30.s64 = ctx.r10.s64 + 21348;
	// addi r29,r9,17600
	ctx.r29.s64 = ctx.r9.s64 + 17600;
	// beq 0x824c5fd8
	if (ctx.cr0.eq) goto loc_824C5FD8;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x824c5fcc
	if (ctx.cr0.eq) goto loc_824C5FCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c5ff8
	goto loc_824C5FF8;
loc_824C5FCC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32292
	ctx.r4.s64 = ctx.r11.s64 + -32292;
	// b 0x824c5ff8
	goto loc_824C5FF8;
loc_824C5FD8:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824c5ff0
	if (ctx.cr6.eq) goto loc_824C5FF0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x824c5ff4
	if (!ctx.cr6.eq) goto loc_824C5FF4;
loc_824C5FF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824C5FF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C5FF8:
	// bl 0x824c5428
	ctx.lr = 0x824C5FFC;
	sub_824C5428(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6024
	if (ctx.cr0.eq) goto loc_824C6024;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x824c6018
	if (ctx.cr0.eq) goto loc_824C6018;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c6044
	goto loc_824C6044;
loc_824C6018:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32288
	ctx.r4.s64 = ctx.r11.s64 + -32288;
	// b 0x824c6044
	goto loc_824C6044;
loc_824C6024:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824c603c
	if (ctx.cr6.eq) goto loc_824C603C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x824c6040
	if (!ctx.cr6.eq) goto loc_824C6040;
loc_824C603C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824C6040:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C6044:
	// bl 0x824c5428
	ctx.lr = 0x824C6048;
	sub_824C5428(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6070
	if (ctx.cr0.eq) goto loc_824C6070;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x824c6064
	if (ctx.cr0.eq) goto loc_824C6064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c6090
	goto loc_824C6090;
loc_824C6064:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32284
	ctx.r4.s64 = ctx.r11.s64 + -32284;
	// b 0x824c6090
	goto loc_824C6090;
loc_824C6070:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824c6088
	if (ctx.cr6.eq) goto loc_824C6088;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x824c608c
	if (!ctx.cr6.eq) goto loc_824C608C;
loc_824C6088:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824C608C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C6090:
	// bl 0x824c5428
	ctx.lr = 0x824C6094;
	sub_824C5428(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c60bc
	if (ctx.cr0.eq) goto loc_824C60BC;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x824c60b0
	if (ctx.cr0.eq) goto loc_824C60B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c60dc
	goto loc_824C60DC;
loc_824C60B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32280
	ctx.r4.s64 = ctx.r11.s64 + -32280;
	// b 0x824c60dc
	goto loc_824C60DC;
loc_824C60BC:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x824c60d4
	if (ctx.cr6.eq) goto loc_824C60D4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x824c60d8
	if (!ctx.cr6.eq) goto loc_824C60D8;
loc_824C60D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824C60D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C60DC:
	// bl 0x824c5428
	ctx.lr = 0x824C60E0;
	sub_824C5428(ctx, base);
loc_824C60E0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x824c60f0
	if (ctx.cr6.eq) goto loc_824C60F0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x824c60f8
	goto loc_824C60F8;
loc_824C60F0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,13434
	ctx.r4.s64 = ctx.r11.s64 + 13434;
loc_824C60F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6100;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x824c6118
	if (ctx.cr6.eq) goto loc_824C6118;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9320
	ctx.r4.s64 = ctx.r11.s64 + -9320;
	// bl 0x824c5428
	ctx.lr = 0x824C6118;
	sub_824C5428(ctx, base);
loc_824C6118:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C6120"))) PPC_WEAK_FUNC(sub_824C6120);
PPC_FUNC_IMPL(__imp__sub_824C6120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x824C6128;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824c614c
	if (!ctx.cr6.eq) goto loc_824C614C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824c615c
	if (!ctx.cr6.eq) goto loc_824C615C;
loc_824C614C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x824c6164
	if (!ctx.cr6.eq) goto loc_824C6164;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6164
	if (ctx.cr0.eq) goto loc_824C6164;
loc_824C615C:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x824c6168
	goto loc_824C6168;
loc_824C6164:
	// li r21,0
	ctx.r21.s64 = 0;
loc_824C6168:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r25,r10,r6
	ctx.r25.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c61b0
	if (ctx.cr6.eq) goto loc_824C61B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-32276
	ctx.r4.s64 = ctx.r11.s64 + -32276;
	// bl 0x824c5428
	ctx.lr = 0x824C61B0;
	sub_824C5428(ctx, base);
loc_824C61B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r11,-9276
	ctx.r22.s64 = ctx.r11.s64 + -9276;
	// beq cr6,0x824c61cc
	if (ctx.cr6.eq) goto loc_824C61CC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C61CC;
	sub_824C5428(ctx, base);
loc_824C61CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x824c61e0
	if (!ctx.cr6.eq) goto loc_824C61E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x824c61e4
	if (ctx.cr6.eq) goto loc_824C61E4;
loc_824C61E0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_824C61E4:
	// subfic r9,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r31.s64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r24,r11,-32360
	ctx.r24.s64 = ctx.r11.s64 + -32360;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x824c5428
	ctx.lr = 0x824C620C;
	sub_824C5428(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x824c6228
	if (ctx.cr0.eq) goto loc_824C6228;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-32308
	ctx.r4.s64 = ctx.r11.s64 + -32308;
	// bl 0x824c5428
	ctx.lr = 0x824C6228;
	sub_824C5428(ctx, base);
loc_824C6228:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-18520
	ctx.r4.s64 = ctx.r11.s64 + -18520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C623C;
	sub_824C5428(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,-32260
	ctx.r31.s64 = ctx.r11.s64 + -32260;
	// beq cr6,0x824c6258
	if (ctx.cr6.eq) goto loc_824C6258;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6258;
	sub_824C5428(ctx, base);
loc_824C6258:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x824c6280
	if (ctx.cr6.eq) goto loc_824C6280;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x824c6270
	if (ctx.cr6.eq) goto loc_824C6270;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x824c6278
	goto loc_824C6278;
loc_824C6270:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32264
	ctx.r4.s64 = ctx.r11.s64 + -32264;
loc_824C6278:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6280;
	sub_824C5428(ctx, base);
loc_824C6280:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824c6298
	if (ctx.cr6.eq) goto loc_824C6298;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-32300
	ctx.r4.s64 = ctx.r11.s64 + -32300;
	// bl 0x824c5428
	ctx.lr = 0x824C6298;
	sub_824C5428(ctx, base);
loc_824C6298:
	// lwz r25,340(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x824c62ac
	if (ctx.cr6.lt) goto loc_824C62AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C62AC:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x824c62c0
	if (!ctx.cr6.eq) goto loc_824C62C0;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c63b0
	if (ctx.cr0.eq) goto loc_824C63B0;
loc_824C62C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x824c5428
	ctx.lr = 0x824C62D0;
	sub_824C5428(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// srawi r9,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 2;
	// addi r30,r11,22504
	ctx.r30.s64 = ctx.r11.s64 + 22504;
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// srawi r11,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 6;
	// clrlwi r31,r29,30
	ctx.r31.u64 = ctx.r29.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r29,r9,30
	ctx.r29.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6314;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x824c63b0
	if (!ctx.cr6.gt) goto loc_824C63B0;
	// clrlwi. r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x824c633c
	if (!ctx.cr0.eq) goto loc_824C633C;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x824c633c
	if (!ctx.cr6.eq) goto loc_824C633C;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x824c633c
	if (!ctx.cr6.eq) goto loc_824C633C;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x824c63b0
	if (ctx.cr6.eq) goto loc_824C63B0;
loc_824C633C:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6350;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x824c63b0
	if (!ctx.cr6.gt) goto loc_824C63B0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x824c6370
	if (!ctx.cr6.eq) goto loc_824C6370;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x824c6370
	if (!ctx.cr6.eq) goto loc_824C6370;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x824c63b0
	if (ctx.cr6.eq) goto loc_824C63B0;
loc_824C6370:
	// lbzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6384;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// ble cr6,0x824c63b0
	if (!ctx.cr6.gt) goto loc_824C63B0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x824c639c
	if (!ctx.cr6.eq) goto loc_824C639C;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x824c63b0
	if (ctx.cr6.eq) goto loc_824C63B0;
loc_824C639C:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C63B0;
	sub_824C5428(ctx, base);
loc_824C63B0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x824c63c0
	if (ctx.cr6.eq) goto loc_824C63C0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x824c63c8
	goto loc_824C63C8;
loc_824C63C0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,13434
	ctx.r4.s64 = ctx.r11.s64 + 13434;
loc_824C63C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C63D0;
	sub_824C5428(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C63D8"))) PPC_WEAK_FUNC(sub_824C63D8);
PPC_FUNC_IMPL(__imp__sub_824C63D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C63E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824c640c
	if (ctx.cr6.eq) goto loc_824C640C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32276
	ctx.r4.s64 = ctx.r11.s64 + -32276;
	// bl 0x824c5428
	ctx.lr = 0x824C640C;
	sub_824C5428(ctx, base);
loc_824C640C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,-9276
	ctx.r29.s64 = ctx.r11.s64 + -9276;
	// beq cr6,0x824c6428
	if (ctx.cr6.eq) goto loc_824C6428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6428;
	sub_824C5428(ctx, base);
loc_824C6428:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-32256
	ctx.r4.s64 = ctx.r11.s64 + -32256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C643C;
	sub_824C5428(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32300
	ctx.r4.s64 = ctx.r11.s64 + -32300;
	// bl 0x824c5428
	ctx.lr = 0x824C644C;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x824c64f8
	if (ctx.cr6.eq) goto loc_824C64F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x824c5428
	ctx.lr = 0x824C6464;
	sub_824C5428(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,22504
	ctx.r11.s64 = ctx.r11.s64 + 22504;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,-32360
	ctx.r28.s64 = ctx.r9.s64 + -32360;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C648C;
	sub_824C5428(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-32248
	ctx.r10.s64 = ctx.r10.s64 + -32248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C64B0;
	sub_824C5428(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-32240
	ctx.r10.s64 = ctx.r10.s64 + -32240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C64D4;
	sub_824C5428(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-32232
	ctx.r10.s64 = ctx.r10.s64 + -32232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C64F8;
	sub_824C5428(ctx, base);
loc_824C64F8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x824c6508
	if (ctx.cr6.eq) goto loc_824C6508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c6510
	goto loc_824C6510;
loc_824C6508:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,13434
	ctx.r4.s64 = ctx.r11.s64 + 13434;
loc_824C6510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6518;
	sub_824C5428(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C6520"))) PPC_WEAK_FUNC(sub_824C6520);
PPC_FUNC_IMPL(__imp__sub_824C6520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C6528;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c6560
	if (!ctx.cr0.eq) goto loc_824C6560;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824c6564
	if (ctx.cr6.eq) goto loc_824C6564;
loc_824C6560:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C6564:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c67f0
	if (!ctx.cr0.eq) goto loc_824C67F0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-2720
	ctx.r10.s64 = ctx.r10.s64 + -2720;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5ca8
	ctx.lr = 0x824C6588;
	sub_824C5CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x824c5d88
	ctx.lr = 0x824C65B0;
	sub_824C5D88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,24456
	ctx.r28.s64 = ctx.r11.s64 + 24456;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C65C4;
	sub_824C5428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c65e4
	if (!ctx.cr0.eq) goto loc_824C65E4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c65e4
	if (!ctx.cr0.eq) goto loc_824C65E4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c65e4
	if (ctx.cr0.eq) goto loc_824C65E4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_824C65E4:
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r30,r10,-2600
	ctx.r30.s64 = ctx.r10.s64 + -2600;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x824c6670
	if (ctx.cr6.lt) goto loc_824C6670;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bne 0x824c663c
	if (!ctx.cr0.eq) goto loc_824C663C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x824c663c
	if (ctx.cr6.eq) goto loc_824C663C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x824c63d8
	ctx.lr = 0x824C6638;
	sub_824C63D8(ctx, base);
	// b 0x824c6670
	goto loc_824C6670;
loc_824C663C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// bl 0x824c6120
	ctx.lr = 0x824C6670;
	sub_824C6120(ctx, base);
loc_824C6670:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x824c6728
	if (ctx.cr6.lt) goto loc_824C6728;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x824c669c
	if (!ctx.cr0.eq) goto loc_824C669C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x824c669c
	if (!ctx.cr6.eq) goto loc_824C669C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_824C669C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C66B4;
	sub_824C5428(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c66e4
	if (!ctx.cr0.eq) goto loc_824C66E4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x824c66e4
	if (ctx.cr6.eq) goto loc_824C66E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x824c63d8
	ctx.lr = 0x824C66E0;
	sub_824C63D8(ctx, base);
	// b 0x824c6728
	goto loc_824C6728;
loc_824C66E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x824c66f8
	if (ctx.cr6.eq) goto loc_824C66F8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_824C66F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x824c6120
	ctx.lr = 0x824C6728;
	sub_824C6120(ctx, base);
loc_824C6728:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x824c67f0
	if (ctx.cr6.lt) goto loc_824C67F0;
	// rlwinm. r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// bne 0x824c6754
	if (!ctx.cr0.eq) goto loc_824C6754;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x824c6754
	if (!ctx.cr6.eq) goto loc_824C6754;
	// li r25,3
	ctx.r25.s64 = 3;
loc_824C6754:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C676C;
	sub_824C5428(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c679c
	if (!ctx.cr0.eq) goto loc_824C679C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x824c679c
	if (ctx.cr6.eq) goto loc_824C679C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x824c63d8
	ctx.lr = 0x824C6798;
	sub_824C63D8(ctx, base);
	// b 0x824c67f0
	goto loc_824C67F0;
loc_824C679C:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x824c67b8
	if (ctx.cr6.eq) goto loc_824C67B8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x824c67b8
	if (!ctx.cr6.eq) goto loc_824C67B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x824c67c0
	goto loc_824C67C0;
loc_824C67B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_824C67C0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x824c6120
	ctx.lr = 0x824C67F0;
	sub_824C6120(ctx, base);
loc_824C67F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C67F8"))) PPC_WEAK_FUNC(sub_824C67F8);
PPC_FUNC_IMPL(__imp__sub_824C67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C6800;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c6830
	if (!ctx.cr0.eq) goto loc_824C6830;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c6830
	if (!ctx.cr0.eq) goto loc_824C6830;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6830
	if (ctx.cr0.eq) goto loc_824C6830;
	// li r28,1
	ctx.r28.s64 = 1;
loc_824C6830:
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-1760
	ctx.r29.s64 = ctx.r11.s64 + -1760;
	// rlwinm r11,r10,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r10,r29,-600
	ctx.r10.s64 = ctx.r29.s64 + -600;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5ca8
	ctx.lr = 0x824C6850;
	sub_824C5CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x824c6864
	if (!ctx.cr0.eq) goto loc_824C6864;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_824C6864:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x824c6874
	if (!ctx.cr6.eq) goto loc_824C6874;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_824C6874:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c5d88
	ctx.lr = 0x824C688C;
	sub_824C5D88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,24456
	ctx.r4.s64 = ctx.r11.s64 + 24456;
	// bl 0x824c5428
	ctx.lr = 0x824C689C;
	sub_824C5428(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// rlwinm r8,r9,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// addi r11,r11,-2160
	ctx.r11.s64 = ctx.r11.s64 + -2160;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x824c6988
	if (ctx.cr6.lt) goto loc_824C6988;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r10,r7,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// beq 0x824c68e0
	if (ctx.cr0.eq) goto loc_824C68E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824c6904
	goto loc_824C6904;
loc_824C68E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c68f4
	if (ctx.cr0.eq) goto loc_824C68F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x824c6904
	goto loc_824C6904;
loc_824C68F4:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
loc_824C6904:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824c6934
	if (!ctx.cr0.eq) goto loc_824C6934;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x824c6934
	if (ctx.cr6.eq) goto loc_824C6934;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x824c63d8
	ctx.lr = 0x824C6930;
	sub_824C63D8(ctx, base);
	// b 0x824c6988
	goto loc_824C6988;
loc_824C6934:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x824c6950
	if (ctx.cr6.eq) goto loc_824C6950;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x824c6950
	if (!ctx.cr6.eq) goto loc_824C6950;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x824c6958
	goto loc_824C6958;
loc_824C6950:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_824C6958:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824c6120
	ctx.lr = 0x824C6988;
	sub_824C6120(ctx, base);
loc_824C6988:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C6990"))) PPC_WEAK_FUNC(sub_824C6990);
PPC_FUNC_IMPL(__imp__sub_824C6990) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824c69dc
	if (!ctx.cr0.eq) goto loc_824C69DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c69c8
	if (ctx.cr0.eq) goto loc_824C69C8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// b 0x824c69d0
	goto loc_824C69D0;
loc_824C69C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17560
	ctx.r4.s64 = ctx.r11.s64 + 17560;
loc_824C69D0:
	// bl 0x824c53d0
	ctx.lr = 0x824C69D4;
	sub_824C53D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_824C69DC:
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

__attribute__((alias("__imp__sub_824C69F0"))) PPC_WEAK_FUNC(sub_824C69F0);
PPC_FUNC_IMPL(__imp__sub_824C69F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C69F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x824c5488
	ctx.lr = 0x824C6A10;
	sub_824C5488(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_824C6A18:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x824c6ad0
	if (ctx.cr6.eq) goto loc_824C6AD0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C6A3C;
	sub_824C4FD0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x824c6ac4
	if (ctx.cr6.gt) goto loc_824C6AC4;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-9312
	ctx.r12.s64 = ctx.r12.s64 + -9312;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,27248
	ctx.r12.s64 = ctx.r12.s64 + 27248;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824C6A70;
	case 1:
		goto loc_824C6A70;
	case 2:
		goto loc_824C6A90;
	case 3:
		goto loc_824C6A90;
	case 4:
		goto loc_824C6A90;
	case 5:
		goto loc_824C6A90;
	case 6:
		goto loc_824C6A98;
	case 7:
		goto loc_824C6A98;
	case 8:
		goto loc_824C6A98;
	case 9:
		goto loc_824C6AC4;
	case 10:
		goto loc_824C6A98;
	default:
		__builtin_unreachable();
	}
loc_824C6A70:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C6A80;
	sub_824C4FD0(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x824c6ac4
	if (!ctx.cr6.eq) goto loc_824C6AC4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x824c6ac4
	goto loc_824C6AC4;
loc_824C6A90:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x824c6ac4
	goto loc_824C6AC4;
loc_824C6A98:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C6AA8;
	sub_824C4FD0(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_824C6AC4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x824c6a18
	if (!ctx.cr0.eq) goto loc_824C6A18;
loc_824C6AD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C6AD8"))) PPC_WEAK_FUNC(sub_824C6AD8);
PPC_FUNC_IMPL(__imp__sub_824C6AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824C6AE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824c6b34
	if (!ctx.cr6.eq) goto loc_824C6B34;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6b1c
	if (ctx.cr0.eq) goto loc_824C6B1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-8544
	ctx.r5.s64 = ctx.r11.s64 + -8544;
	// b 0x824c6b24
	goto loc_824C6B24;
loc_824C6B1C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-8548
	ctx.r5.s64 = ctx.r11.s64 + -8548;
loc_824C6B24:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18844
	ctx.r4.s64 = ctx.r11.s64 + -18844;
	// bl 0x824c5428
	ctx.lr = 0x824C6B34;
	sub_824C5428(ctx, base);
loc_824C6B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7028
	if (ctx.cr0.eq) goto loc_824C7028;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c7014
	if (!ctx.cr6.gt) goto loc_824C7014;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x824c6b70
	if (!ctx.cr6.gt) goto loc_824C6B70;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x824c7014
	if (!ctx.cr6.gt) goto loc_824C7014;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x824c6b70
	if (!ctx.cr6.gt) goto loc_824C6B70;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x824c7014
	if (!ctx.cr6.gt) goto loc_824C7014;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x824c7014
	if (ctx.cr6.gt) goto loc_824C7014;
loc_824C6B70:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-31884
	ctx.r4.s64 = ctx.r10.s64 + -31884;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x824c6c38
	if (ctx.cr6.gt) goto loc_824C6C38;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-9296
	ctx.r12.s64 = ctx.r12.s64 + -9296;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,27564
	ctx.r12.s64 = ctx.r12.s64 + 27564;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824C6BAC;
	case 1:
		goto loc_824C6BB8;
	case 2:
		goto loc_824C6BC4;
	case 3:
		goto loc_824C6BD0;
	case 4:
		goto loc_824C6C38;
	case 5:
		goto loc_824C6C38;
	case 6:
		goto loc_824C6C38;
	case 7:
		goto loc_824C6C38;
	case 8:
		goto loc_824C6C38;
	case 9:
		goto loc_824C6C38;
	case 10:
		goto loc_824C6C38;
	case 11:
		goto loc_824C6C38;
	case 12:
		goto loc_824C6C38;
	case 13:
		goto loc_824C6C38;
	case 14:
		goto loc_824C6C38;
	case 15:
		goto loc_824C6BDC;
	case 16:
		goto loc_824C6BE8;
	case 17:
		goto loc_824C6BF4;
	case 18:
		goto loc_824C6C00;
	case 19:
		goto loc_824C6C38;
	case 20:
		goto loc_824C6C38;
	case 21:
		goto loc_824C6C38;
	case 22:
		goto loc_824C6C38;
	case 23:
		goto loc_824C6C0C;
	case 24:
		goto loc_824C6C18;
	case 25:
		goto loc_824C6C24;
	case 26:
		goto loc_824C6C30;
	default:
		__builtin_unreachable();
	}
loc_824C6BAC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8556
	ctx.r4.s64 = ctx.r11.s64 + -8556;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8572
	ctx.r4.s64 = ctx.r11.s64 + -8572;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BC4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8588
	ctx.r4.s64 = ctx.r11.s64 + -8588;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BD0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8608
	ctx.r4.s64 = ctx.r11.s64 + -8608;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BDC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8632
	ctx.r4.s64 = ctx.r11.s64 + -8632;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BE8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8648
	ctx.r4.s64 = ctx.r11.s64 + -8648;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6BF4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8660
	ctx.r4.s64 = ctx.r11.s64 + -8660;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6C00:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8672
	ctx.r4.s64 = ctx.r11.s64 + -8672;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6C0C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31852
	ctx.r4.s64 = ctx.r11.s64 + -31852;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6C18:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31840
	ctx.r4.s64 = ctx.r11.s64 + -31840;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6C24:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31824
	ctx.r4.s64 = ctx.r11.s64 + -31824;
	// b 0x824c6c38
	goto loc_824C6C38;
loc_824C6C30:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-8692
	ctx.r4.s64 = ctx.r11.s64 + -8692;
loc_824C6C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5ca8
	ctx.lr = 0x824C6C40;
	sub_824C5CA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16764
	ctx.r4.s64 = ctx.r11.s64 + -16764;
	// bl 0x824c5428
	ctx.lr = 0x824C6C50;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x824c6c70
	if (ctx.cr0.eq) goto loc_824C6C70;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32184
	ctx.r4.s64 = ctx.r11.s64 + -32184;
	// b 0x824c6c78
	goto loc_824C6C78;
loc_824C6C70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32172
	ctx.r4.s64 = ctx.r11.s64 + -32172;
loc_824C6C78:
	// bl 0x824c5428
	ctx.lr = 0x824C6C7C;
	sub_824C5428(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-23296
	ctx.r27.s64 = ctx.r11.s64 + -23296;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6C90;
	sub_824C5428(ctx, base);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-2736
	ctx.r29.s64 = ctx.r11.s64 + -2736;
	// addi r28,r10,-32360
	ctx.r28.s64 = ctx.r10.s64 + -32360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6CBC;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6CD8;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6CF4;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6D10;
	sub_824C5428(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24456
	ctx.r4.s64 = ctx.r11.s64 + 24456;
	// bl 0x824c5428
	ctx.lr = 0x824C6D20;
	sub_824C5428(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x824c6120
	ctx.lr = 0x824C6D58;
	sub_824C6120(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C6D64;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6D80;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6D9C;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x824c6dc4
	if (ctx.cr6.eq) goto loc_824C6DC4;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C6DC4;
	sub_824C5428(ctx, base);
loc_824C6DC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-8700
	ctx.r4.s64 = ctx.r10.s64 + -8700;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// bl 0x824c5428
	ctx.lr = 0x824C6DDC;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6df8
	if (ctx.cr0.eq) goto loc_824C6DF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8736
	ctx.r4.s64 = ctx.r11.s64 + -8736;
	// bl 0x824c5428
	ctx.lr = 0x824C6DF8;
	sub_824C5428(ctx, base);
loc_824C6DF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824c6e24
	if (ctx.cr6.eq) goto loc_824C6E24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = ctx.r29.s64 + 1176;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8752
	ctx.r4.s64 = ctx.r9.s64 + -8752;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6E24;
	sub_824C5428(ctx, base);
loc_824C6E24:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824c6e50
	if (ctx.cr6.eq) goto loc_824C6E50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = ctx.r29.s64 + 1192;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8768
	ctx.r4.s64 = ctx.r9.s64 + -8768;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6E50;
	sub_824C5428(ctx, base);
loc_824C6E50:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824c6e7c
	if (ctx.cr6.eq) goto loc_824C6E7C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = ctx.r29.s64 + 1208;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8784
	ctx.r4.s64 = ctx.r9.s64 + -8784;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6E7C;
	sub_824C5428(ctx, base);
loc_824C6E7C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824c6ea8
	if (ctx.cr6.eq) goto loc_824C6EA8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8804
	ctx.r4.s64 = ctx.r9.s64 + -8804;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6EA8;
	sub_824C5428(ctx, base);
loc_824C6EA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824c6ed4
	if (ctx.cr6.eq) goto loc_824C6ED4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-32076
	ctx.r4.s64 = ctx.r9.s64 + -32076;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6ED4;
	sub_824C5428(ctx, base);
loc_824C6ED4:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824c6f00
	if (ctx.cr6.eq) goto loc_824C6F00;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = ctx.r29.s64 + 1288;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8824
	ctx.r4.s64 = ctx.r9.s64 + -8824;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6F00;
	sub_824C5428(ctx, base);
loc_824C6F00:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824c6f2c
	if (ctx.cr6.eq) goto loc_824C6F2C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = ctx.r29.s64 + 1304;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8844
	ctx.r4.s64 = ctx.r9.s64 + -8844;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6F2C;
	sub_824C5428(ctx, base);
loc_824C6F2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c6f48
	if (ctx.cr0.eq) goto loc_824C6F48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8864
	ctx.r4.s64 = ctx.r11.s64 + -8864;
	// bl 0x824c5428
	ctx.lr = 0x824C6F48;
	sub_824C5428(ctx, base);
loc_824C6F48:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6f70
	if (ctx.cr0.eq) goto loc_824C6F70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = ctx.r29.s64 + 1320;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-8884
	ctx.r4.s64 = ctx.r9.s64 + -8884;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C6F70;
	sub_824C5428(ctx, base);
loc_824C6F70:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c6f8c
	if (ctx.cr0.eq) goto loc_824C6F8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8912
	ctx.r4.s64 = ctx.r11.s64 + -8912;
	// bl 0x824c5428
	ctx.lr = 0x824C6F8C;
	sub_824C5428(ctx, base);
loc_824C6F8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6fa8
	if (ctx.cr0.eq) goto loc_824C6FA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8940
	ctx.r4.s64 = ctx.r11.s64 + -8940;
	// bl 0x824c5428
	ctx.lr = 0x824C6FA8;
	sub_824C5428(ctx, base);
loc_824C6FA8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c6fc4
	if (ctx.cr0.eq) goto loc_824C6FC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8956
	ctx.r4.s64 = ctx.r11.s64 + -8956;
	// bl 0x824c5428
	ctx.lr = 0x824C6FC4;
	sub_824C5428(ctx, base);
loc_824C6FC4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c6fe0
	if (ctx.cr0.eq) goto loc_824C6FE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8972
	ctx.r4.s64 = ctx.r11.s64 + -8972;
	// bl 0x824c5428
	ctx.lr = 0x824C6FE0;
	sub_824C5428(ctx, base);
loc_824C6FE0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c6ffc
	if (ctx.cr0.eq) goto loc_824C6FFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8988
	ctx.r4.s64 = ctx.r11.s64 + -8988;
	// bl 0x824c5428
	ctx.lr = 0x824C6FFC;
	sub_824C5428(ctx, base);
loc_824C6FFC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c73b4
	if (ctx.cr0.eq) goto loc_824C73B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-9004
	ctx.r4.s64 = ctx.r11.s64 + -9004;
	// b 0x824c73ac
	goto loc_824C73AC;
loc_824C7014:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9028
	ctx.r4.s64 = ctx.r11.s64 + -9028;
	// bl 0x824c5428
	ctx.lr = 0x824C7024;
	sub_824C5428(ctx, base);
	// b 0x824c73b4
	goto loc_824C73B4;
loc_824C7028:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32108
	ctx.r4.s64 = ctx.r11.s64 + -32108;
	// bl 0x824c5ca8
	ctx.lr = 0x824C7038;
	sub_824C5CA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16764
	ctx.r4.s64 = ctx.r11.s64 + -16764;
	// bl 0x824c5428
	ctx.lr = 0x824C7048;
	sub_824C5428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x824c7068
	if (ctx.cr0.eq) goto loc_824C7068;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32184
	ctx.r4.s64 = ctx.r11.s64 + -32184;
	// b 0x824c7070
	goto loc_824C7070;
loc_824C7068:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32172
	ctx.r4.s64 = ctx.r11.s64 + -32172;
loc_824C7070:
	// bl 0x824c5428
	ctx.lr = 0x824C7074;
	sub_824C5428(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x824c5428
	ctx.lr = 0x824C7084;
	sub_824C5428(ctx, base);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-2736
	ctx.r29.s64 = ctx.r11.s64 + -2736;
	// addi r28,r10,-32360
	ctx.r28.s64 = ctx.r10.s64 + -32360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C70B0;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C70CC;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C70E8;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C7104;
	sub_824C5428(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,24456
	ctx.r27.s64 = ctx.r11.s64 + 24456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7118;
	sub_824C5428(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x824c6120
	ctx.lr = 0x824C7150;
	sub_824C6120(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32088
	ctx.r4.s64 = ctx.r11.s64 + -32088;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824c5428
	ctx.lr = 0x824C7170;
	sub_824C5428(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c71a4
	if (!ctx.cr0.eq) goto loc_824C71A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,-1156
	ctx.r10.s64 = ctx.r10.s64 + -1156;
	// rlwinm r8,r11,9,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// addi r4,r9,-9040
	ctx.r4.s64 = ctx.r9.s64 + -9040;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C71A4;
	sub_824C5428(ctx, base);
loc_824C71A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,-9280
	ctx.r26.s64 = ctx.r11.s64 + -9280;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C71B8;
	sub_824C5428(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r11,-32312
	ctx.r25.s64 = ctx.r11.s64 + -32312;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c71e0
	if (ctx.cr0.eq) goto loc_824C71E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-31044
	ctx.r5.s64 = ctx.r11.s64 + -31044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C71E0;
	sub_824C5428(ctx, base);
loc_824C71E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,-32168
	ctx.r28.s64 = ctx.r11.s64 + -32168;
	// bne 0x824c7244
	if (!ctx.cr0.eq) goto loc_824C7244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C71FC;
	sub_824C6990(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7208;
	sub_824C5428(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9068
	ctx.r4.s64 = ctx.r11.s64 + -9068;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x824c5428
	ctx.lr = 0x824C7224;
	sub_824C5428(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r29,1336
	ctx.r11.s64 = ctx.r29.s64 + 1336;
	// addi r4,r10,-9084
	ctx.r4.s64 = ctx.r10.s64 + -9084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C7244;
	sub_824C5428(ctx, base);
loc_824C7244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C724C;
	sub_824C6990(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7258;
	sub_824C5428(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,5616
	ctx.r29.s64 = ctx.r11.s64 + 5616;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7280
	if (ctx.cr0.eq) goto loc_824C7280;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-9096
	ctx.r4.s64 = ctx.r11.s64 + -9096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7280;
	sub_824C5428(ctx, base);
loc_824C7280:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9108
	ctx.r4.s64 = ctx.r11.s64 + -9108;
	// bl 0x824c5428
	ctx.lr = 0x824C7290;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c72ac
	if (ctx.cr0.eq) goto loc_824C72AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-9132
	ctx.r4.s64 = ctx.r11.s64 + -9132;
	// b 0x824c72b4
	goto loc_824C72B4;
loc_824C72AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-9156
	ctx.r4.s64 = ctx.r11.s64 + -9156;
loc_824C72B4:
	// bl 0x824c5428
	ctx.lr = 0x824C72B8;
	sub_824C5428(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C72C4;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C72CC;
	sub_824C6990(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C72D8;
	sub_824C5428(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9168
	ctx.r4.s64 = ctx.r11.s64 + -9168;
	// bl 0x824c5428
	ctx.lr = 0x824C72E8;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7300
	if (ctx.cr0.eq) goto loc_824C7300;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x824c7308
	goto loc_824C7308;
loc_824C7300:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5624
	ctx.r4.s64 = ctx.r11.s64 + 5624;
loc_824C7308:
	// bl 0x824c5428
	ctx.lr = 0x824C730C;
	sub_824C5428(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824c7328
	if (ctx.cr0.eq) goto loc_824C7328;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9184
	ctx.r4.s64 = ctx.r11.s64 + -9184;
	// bl 0x824c5428
	ctx.lr = 0x824C7328;
	sub_824C5428(ctx, base);
loc_824C7328:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x824c7394
	if (ctx.cr6.eq) goto loc_824C7394;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c7394
	if (!ctx.cr0.eq) goto loc_824C7394;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7348;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C7350;
	sub_824C6990(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C735C;
	sub_824C5428(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c7388
	if (!ctx.cr0.eq) goto loc_824C7388;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r4,r10,-9220
	ctx.r4.s64 = ctx.r10.s64 + -9220;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x824c5428
	ctx.lr = 0x824C7384;
	sub_824C5428(ctx, base);
	// b 0x824c7394
	goto loc_824C7394;
loc_824C7388:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-9236
	ctx.r4.s64 = ctx.r11.s64 + -9236;
	// bl 0x824c5428
	ctx.lr = 0x824C7394;
	sub_824C5428(ctx, base);
loc_824C7394:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c73b4
	if (ctx.cr0.eq) goto loc_824C73B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-31060
	ctx.r5.s64 = ctx.r11.s64 + -31060;
loc_824C73AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C73B4;
	sub_824C5428(ctx, base);
loc_824C73B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C73BC"))) PPC_WEAK_FUNC(sub_824C73BC);
PPC_FUNC_IMPL(__imp__sub_824C73BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C73C0"))) PPC_WEAK_FUNC(sub_824C73C0);
PPC_FUNC_IMPL(__imp__sub_824C73C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x824C73C8;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x824c75bc
	if (ctx.cr6.eq) goto loc_824C75BC;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,-32055
	ctx.r7.s64 = -2100756480;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r23,r3,-31224
	ctx.r23.s64 = ctx.r3.s64 + -31224;
	// addi r27,r4,-22348
	ctx.r27.s64 = ctx.r4.s64 + -22348;
	// addi r26,r5,-3136
	ctx.r26.s64 = ctx.r5.s64 + -3136;
	// addi r25,r6,-8536
	ctx.r25.s64 = ctx.r6.s64 + -8536;
	// addi r22,r7,-2600
	ctx.r22.s64 = ctx.r7.s64 + -2600;
	// addi r24,r8,-21032
	ctx.r24.s64 = ctx.r8.s64 + -21032;
	// addi r21,r9,-8548
	ctx.r21.s64 = ctx.r9.s64 + -8548;
	// addi r20,r10,-8544
	ctx.r20.s64 = ctx.r10.s64 + -8544;
	// addi r30,r11,-31504
	ctx.r30.s64 = ctx.r11.s64 + -31504;
loc_824C7430:
	// clrlwi r11,r17,31
	ctx.r11.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r31,r18,31
	ctx.r31.u64 = ctx.r18.u32 & 0x1;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824c7470
	if (!ctx.cr6.eq) goto loc_824C7470;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C7450;
	sub_824C6990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C745C;
	sub_824C5428(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c6ad8
	ctx.lr = 0x824C746C;
	sub_824C6AD8(ctx, base);
	// b 0x824c75b0
	goto loc_824C75B0;
loc_824C7470:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x824c74a4
	if (ctx.cr6.lt) goto loc_824C74A4;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824c7498
	if (ctx.cr6.eq) goto loc_824C7498;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_824C7498:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C74A4;
	sub_824C5428(ctx, base);
loc_824C74A4:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c74c4
	if (!ctx.cr0.eq) goto loc_824C74C4;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824c74c8
	if (ctx.cr6.eq) goto loc_824C74C8;
loc_824C74C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C74C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c74f0
	if (!ctx.cr0.eq) goto loc_824C74F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C74D8;
	sub_824C6990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C74E4;
	sub_824C5428(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c6520
	ctx.lr = 0x824C74F0;
	sub_824C6520(ctx, base);
loc_824C74F0:
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x824c752c
	if (ctx.cr6.lt) goto loc_824C752C;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c75b0
	if (ctx.cr0.eq) goto loc_824C75B0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C7528;
	sub_824C50C0(ctx, base);
	// b 0x824c75b0
	goto loc_824C75B0;
loc_824C752C:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c7554
	if (!ctx.cr0.eq) goto loc_824C7554;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824c7554
	if (!ctx.cr6.eq) goto loc_824C7554;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824c7558
	if (!ctx.cr6.eq) goto loc_824C7558;
loc_824C7554:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C7558:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c75b0
	if (!ctx.cr0.eq) goto loc_824C75B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C7568;
	sub_824C6990(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c7588
	if (!ctx.cr0.eq) goto loc_824C7588;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824c758c
	if (ctx.cr6.eq) goto loc_824C758C;
loc_824C7588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C758C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq 0x824c75a0
	if (ctx.cr0.eq) goto loc_824C75A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824C75A0:
	// bl 0x824c5428
	ctx.lr = 0x824C75A4;
	sub_824C5428(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c67f8
	ctx.lr = 0x824C75B0;
	sub_824C67F8(ctx, base);
loc_824C75B0:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x824c7430
	if (!ctx.cr0.eq) goto loc_824C7430;
loc_824C75BC:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C75C8"))) PPC_WEAK_FUNC(sub_824C75C8);
PPC_FUNC_IMPL(__imp__sub_824C75C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x824C75D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x824c5488
	ctx.lr = 0x824C760C;
	sub_824C5488(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x824c69f0
	ctx.lr = 0x824C7628;
	sub_824C69F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r23,-32055
	ctx.r23.s64 = -2100756480;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r20,-32241
	ctx.r20.s64 = -2112946176;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r19,-32251
	ctx.r19.s64 = -2113601536;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r23,-1144
	ctx.r7.s64 = ctx.r23.s64 + -1144;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r20,-31256
	ctx.r6.s64 = ctx.r20.s64 + -31256;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r11,r11,-8072
	ctx.r11.s64 = ctx.r11.s64 + -8072;
	// addi r5,r19,-8092
	ctx.r5.s64 = ctx.r19.s64 + -8092;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r18,-32251
	ctx.r18.s64 = -2113601536;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r17,-32251
	ctx.r17.s64 = -2113601536;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// lis r14,-32241
	ctx.r14.s64 = -2112946176;
	// addi r11,r8,-8056
	ctx.r11.s64 = ctx.r8.s64 + -8056;
	// addi r7,r18,-8108
	ctx.r7.s64 = ctx.r18.s64 + -8108;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r6,r17,-8120
	ctx.r6.s64 = ctx.r17.s64 + -8120;
	// addi r5,r14,-31320
	ctx.r5.s64 = ctx.r14.s64 + -31320;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// addi r10,r10,-8048
	ctx.r10.s64 = ctx.r10.s64 + -8048;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r9,r9,24456
	ctx.r9.s64 = ctx.r9.s64 + 24456;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// lis r22,-32251
	ctx.r22.s64 = -2113601536;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r21,-32241
	ctx.r21.s64 = -2112946176;
	// lis r16,-32241
	ctx.r16.s64 = -2112946176;
	// lis r15,-32241
	ctx.r15.s64 = -2112946176;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// lis r28,-32241
	ctx.r28.s64 = -2112946176;
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r23,r22,-9328
	ctx.r23.s64 = ctx.r22.s64 + -9328;
	// addi r30,r30,-8148
	ctx.r30.s64 = ctx.r30.s64 + -8148;
	// addi r28,r28,-31352
	ctx.r28.s64 = ctx.r28.s64 + -31352;
	// addi r3,r3,-31372
	ctx.r3.s64 = ctx.r3.s64 + -31372;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r4,-8160
	ctx.r4.s64 = ctx.r4.s64 + -8160;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r5,r5,-8184
	ctx.r5.s64 = ctx.r5.s64 + -8184;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r6,r6,-8204
	ctx.r6.s64 = ctx.r6.s64 + -8204;
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// addi r7,r7,-8224
	ctx.r7.s64 = ctx.r7.s64 + -8224;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r8,r8,-8244
	ctx.r8.s64 = ctx.r8.s64 + -8244;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// addi r9,r9,-8268
	ctx.r9.s64 = ctx.r9.s64 + -8268;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r17,r10,-8280
	ctx.r17.s64 = ctx.r10.s64 + -8280;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// addi r19,r15,-31300
	ctx.r19.s64 = ctx.r15.s64 + -31300;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r10,r24,-3136
	ctx.r10.s64 = ctx.r24.s64 + -3136;
	// addi r14,r26,-31468
	ctx.r14.s64 = ctx.r26.s64 + -31468;
	// addi r15,r11,-31428
	ctx.r15.s64 = ctx.r11.s64 + -31428;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r27,r27,-8128
	ctx.r27.s64 = ctx.r27.s64 + -8128;
	// addi r29,r29,-31356
	ctx.r29.s64 = ctx.r29.s64 + -31356;
	// addi r30,r25,-3128
	ctx.r30.s64 = ctx.r25.s64 + -3128;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// lis r26,-32251
	ctx.r26.s64 = -2113601536;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r26,r26,-8304
	ctx.r26.s64 = ctx.r26.s64 + -8304;
	// addi r28,r28,-8328
	ctx.r28.s64 = ctx.r28.s64 + -8328;
	// addi r3,r3,-8340
	ctx.r3.s64 = ctx.r3.s64 + -8340;
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// addi r4,r4,-8348
	ctx.r4.s64 = ctx.r4.s64 + -8348;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r5,r5,-8360
	ctx.r5.s64 = ctx.r5.s64 + -8360;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r6,r6,-31480
	ctx.r6.s64 = ctx.r6.s64 + -31480;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r7,-8416
	ctx.r7.s64 = ctx.r7.s64 + -8416;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addi r8,r8,-8428
	ctx.r8.s64 = ctx.r8.s64 + -8428;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r9,r9,-32224
	ctx.r9.s64 = ctx.r9.s64 + -32224;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// addi r11,r11,-8436
	ctx.r11.s64 = ctx.r11.s64 + -8436;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// addi r20,r16,-32312
	ctx.r20.s64 = ctx.r16.s64 + -32312;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r21,r21,-31236
	ctx.r21.s64 = ctx.r21.s64 + -31236;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r18,r27,-8452
	ctx.r18.s64 = ctx.r27.s64 + -8452;
	// addi r22,r29,-16764
	ctx.r22.s64 = ctx.r29.s64 + -16764;
	// addi r16,r30,-31456
	ctx.r16.s64 = ctx.r30.s64 + -31456;
	// addi r24,r10,-31504
	ctx.r24.s64 = ctx.r10.s64 + -31504;
loc_824C7830:
	// lwz r30,460(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x824c7840
	goto loc_824C7840;
loc_824C783C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_824C7840:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x824c7a78
	if (ctx.cr6.eq) goto loc_824C7A78;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C786C;
	sub_824C4FD0(ctx, base);
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x824c78e0
	if (ctx.cr0.eq) goto loc_824C78E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C788C;
	sub_824C6990(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = ctx.r27.u32 & 0x1F;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c78e4
	if (ctx.cr0.eq) goto loc_824C78E4;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x824c5428
	ctx.lr = 0x824C78D4;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C78DC;
	sub_824C6990(ctx, base);
	// b 0x824c78e4
	goto loc_824C78E4;
loc_824C78E0:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_824C78E4:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x824c800c
	if (ctx.cr6.gt) goto loc_824C800C;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-9264
	ctx.r12.s64 = ctx.r12.s64 + -9264;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,30996
	ctx.r12.s64 = ctx.r12.s64 + 30996;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_824C7914;
	case 1:
		goto loc_824C7970;
	case 2:
		goto loc_824C7944;
	case 3:
		goto loc_824C7AB0;
	case 4:
		goto loc_824C7ADC;
	case 5:
		goto loc_824C7AF8;
	case 6:
		goto loc_824C7B14;
	case 7:
		goto loc_824C7B30;
	case 8:
		goto loc_824C7C20;
	case 9:
		goto loc_824C7D64;
	case 10:
		goto loc_824C7DC0;
	case 11:
		goto loc_824C7DDC;
	case 12:
		goto loc_824C7F34;
	default:
		__builtin_unreachable();
	}
loc_824C7914:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7a60
	if (ctx.cr0.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7934;
	sub_824C5428(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_824C7938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5d18
	ctx.lr = 0x824C7940;
	sub_824C5D18(ctx, base);
	// b 0x824c7a60
	goto loc_824C7A60;
loc_824C7944:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7970
	if (ctx.cr6.eq) goto loc_824C7970;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7970
	if (ctx.cr0.eq) goto loc_824C7970;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7964;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x824c5428
	ctx.lr = 0x824C7970;
	sub_824C5428(ctx, base);
loc_824C7970:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7980;
	sub_824C4FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x824c7990
	if (!ctx.cr6.eq) goto loc_824C7990;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_824C7990:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C79A0;
	sub_824C4FD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C79B4;
	sub_824C4FD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C79C8;
	sub_824C4FD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C79DC;
	sub_824C4FD0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C79EC;
	sub_824C4FD0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c7a34
	if (ctx.cr6.eq) goto loc_824C7A34;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824c7a34
	if (!ctx.cr6.gt) goto loc_824C7A34;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c73c0
	ctx.lr = 0x824C7A28;
	sub_824C73C0(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_824C7A34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a5c
	if (ctx.cr6.eq) goto loc_824C7A5C;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x824c7a5c
	if (!ctx.cr6.gt) goto loc_824C7A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x824c5428
	ctx.lr = 0x824C7A5C;
	sub_824C5428(ctx, base);
loc_824C7A5C:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_824C7A60:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824c783c
	if (!ctx.cr0.eq) goto loc_824C783C;
loc_824C7A78:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// bne 0x824c7830
	if (!ctx.cr0.eq) goto loc_824C7830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c6990
	ctx.lr = 0x824C7AA4;
	sub_824C6990(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_824C7AB0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7ad0
	if (ctx.cr6.eq) goto loc_824C7AD0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7AC4;
	sub_824C5428(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_824C7AC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5d18
	ctx.lr = 0x824C7AD0;
	sub_824C5D18(ctx, base);
loc_824C7AD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// b 0x824c7a60
	goto loc_824C7A60;
loc_824C7ADC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7ad0
	if (ctx.cr6.eq) goto loc_824C7AD0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7AF0;
	sub_824C5428(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x824c7ac8
	goto loc_824C7AC8;
loc_824C7AF8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7ad0
	if (ctx.cr6.eq) goto loc_824C7AD0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7B0C;
	sub_824C5428(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x824c7ac8
	goto loc_824C7AC8;
loc_824C7B14:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7ad0
	if (ctx.cr6.eq) goto loc_824C7AD0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7B28;
	sub_824C5428(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x824c7ac8
	goto loc_824C7AC8;
loc_824C7B30:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7B44;
	sub_824C5428(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5d18
	ctx.lr = 0x824C7B50;
	sub_824C5D18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7B5C;
	sub_824C5428(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7B6C;
	sub_824C4FD0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7B84;
	sub_824C5428(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7B94;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7bac
	if (ctx.cr0.eq) goto loc_824C7BAC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7BAC;
	sub_824C5428(ctx, base);
loc_824C7BAC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7BBC;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7BCC;
	sub_824C5428(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7BDC;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7bf4
	if (ctx.cr0.eq) goto loc_824C7BF4;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_824C7BE8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7BF4;
	sub_824C5428(ctx, base);
loc_824C7BF4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7C04;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7a60
	if (ctx.cr0.eq) goto loc_824C7A60;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_824C7C10:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_824C7C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7C1C;
	sub_824C5428(ctx, base);
	// b 0x824c7a60
	goto loc_824C7A60;
loc_824C7C20:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7C34;
	sub_824C5428(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5d18
	ctx.lr = 0x824C7C40;
	sub_824C5D18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7C4C;
	sub_824C5428(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7C5C;
	sub_824C4FD0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7C74;
	sub_824C5428(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7C84;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7c9c
	if (ctx.cr0.eq) goto loc_824C7C9C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7C9C;
	sub_824C5428(ctx, base);
loc_824C7C9C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7CAC;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7CBC;
	sub_824C5428(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7CCC;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x824c5428
	ctx.lr = 0x824C7CDC;
	sub_824C5428(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7CEC;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7d04
	if (ctx.cr0.eq) goto loc_824C7D04;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7D04;
	sub_824C5428(ctx, base);
loc_824C7D04:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7D14;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x824c5428
	ctx.lr = 0x824C7D24;
	sub_824C5428(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7D34;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7d4c
	if (ctx.cr0.eq) goto loc_824C7D4C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7D4C;
	sub_824C5428(ctx, base);
loc_824C7D4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7D5C;
	sub_824C4FD0(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x824c7be8
	goto loc_824C7BE8;
loc_824C7D64:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7D7C;
	sub_824C4FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7D8C;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x824c5d18
	ctx.lr = 0x824C7D98;
	sub_824C5D18(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x824c5428
	ctx.lr = 0x824C7DBC;
	sub_824C5428(ctx, base);
	// b 0x824c7a60
	goto loc_824C7A60;
loc_824C7DC0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7DD4;
	sub_824C5428(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x824c7938
	goto loc_824C7938;
loc_824C7DDC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7DF0;
	sub_824C5428(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7E04;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7e10
	if (ctx.cr0.eq) goto loc_824C7E10;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_824C7E10:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x824c7e2c
	if (ctx.cr0.eq) goto loc_824C7E2C;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x824c5d18
	ctx.lr = 0x824C7E24;
	sub_824C5D18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x824c7e90
	goto loc_824C7E90;
loc_824C7E2C:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x824c5d18
	ctx.lr = 0x824C7E34;
	sub_824C5D18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7E40;
	sub_824C5428(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7E50;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7E60;
	sub_824C5428(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7E70;
	sub_824C4FD0(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824c7e80
	if (!ctx.cr0.eq) goto loc_824C7E80;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_824C7E80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x824c5428
	ctx.lr = 0x824C7E8C;
	sub_824C5428(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_824C7E90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7E98;
	sub_824C5428(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7EA8;
	sub_824C4FD0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7EC0;
	sub_824C5428(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7ED0;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7ee8
	if (ctx.cr0.eq) goto loc_824C7EE8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7EE8;
	sub_824C5428(ctx, base);
loc_824C7EE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c7f14
	if (ctx.cr0.eq) goto loc_824C7F14;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7F04;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x824c5428
	ctx.lr = 0x824C7F14;
	sub_824C5428(ctx, base);
loc_824C7F14:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7F24;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7a60
	if (ctx.cr0.eq) goto loc_824C7A60;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x824c7c10
	goto loc_824C7C10;
loc_824C7F34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7F48;
	sub_824C5428(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5d18
	ctx.lr = 0x824C7F54;
	sub_824C5D18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7F60;
	sub_824C5428(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7F70;
	sub_824C4FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x824c5428
	ctx.lr = 0x824C7F9C;
	sub_824C5428(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x824c7fc4
	if (!ctx.cr6.eq) goto loc_824C7FC4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7FB4;
	sub_824C4FD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x824c5428
	ctx.lr = 0x824C7FC4;
	sub_824C5428(ctx, base);
loc_824C7FC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7FD4;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7fec
	if (ctx.cr0.eq) goto loc_824C7FEC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C7FEC;
	sub_824C5428(ctx, base);
loc_824C7FEC:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4fd0
	ctx.lr = 0x824C7FFC;
	sub_824C4FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c7a60
	if (ctx.cr0.eq) goto loc_824C7A60;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x824c7c10
	goto loc_824C7C10;
loc_824C800C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824c7a60
	if (ctx.cr6.eq) goto loc_824C7A60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c5428
	ctx.lr = 0x824C8020;
	sub_824C5428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x824c5d18
	ctx.lr = 0x824C802C;
	sub_824C5D18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x824c7c14
	goto loc_824C7C14;
}

__attribute__((alias("__imp__sub_824C8038"))) PPC_WEAK_FUNC(sub_824C8038);
PPC_FUNC_IMPL(__imp__sub_824C8038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C8040;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7976
	ctx.r29.s64 = ctx.r10.s64 + -7976;
	// bne cr6,0x824c808c
	if (!ctx.cr6.eq) goto loc_824C808C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7992
	ctx.r5.s64 = ctx.r11.s64 + -7992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C808C;
	sub_824C50C0(ctx, base);
loc_824C808C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c80b0
	if (!ctx.cr6.eq) goto loc_824C80B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-8008
	ctx.r5.s64 = ctx.r11.s64 + -8008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,266
	ctx.r7.s64 = 266;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C80B0;
	sub_824C50C0(ctx, base);
loc_824C80B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x824c80e0
	if (!ctx.cr6.eq) goto loc_824C80E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C80D4;
	sub_824C50C0(ctx, base);
loc_824C80D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C80D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_824C80E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824c80d4
	if (ctx.cr6.eq) goto loc_824C80D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c80d4
	if (ctx.cr6.eq) goto loc_824C80D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cc0c8
	ctx.lr = 0x824C80F8;
	sub_824CC0C8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824cd790
	ctx.lr = 0x824C8108;
	sub_824CD790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x824c80d8
	if (!ctx.cr0.eq) goto loc_824C80D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824c80d8
	goto loc_824C80D8;
}

__attribute__((alias("__imp__sub_824C811C"))) PPC_WEAK_FUNC(sub_824C811C);
PPC_FUNC_IMPL(__imp__sub_824C811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C8120"))) PPC_WEAK_FUNC(sub_824C8120);
PPC_FUNC_IMPL(__imp__sub_824C8120) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824c8164
	if (!ctx.cr6.eq) goto loc_824C8164;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7976
	ctx.r6.s64 = ctx.r11.s64 + -7976;
	// addi r5,r10,-7992
	ctx.r5.s64 = ctx.r10.s64 + -7992;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,391
	ctx.r7.s64 = 391;
	// bl 0x824c50c0
	ctx.lr = 0x824C815C;
	sub_824C50C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c8174
	goto loc_824C8174;
loc_824C8164:
	// bl 0x824cc0c8
	ctx.lr = 0x824C8168;
	sub_824CC0C8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824cd188
	ctx.lr = 0x824C8174;
	sub_824CD188(ctx, base);
loc_824C8174:
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

__attribute__((alias("__imp__sub_824C8188"))) PPC_WEAK_FUNC(sub_824C8188);
PPC_FUNC_IMPL(__imp__sub_824C8188) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c81c4
	if (!ctx.cr6.eq) goto loc_824C81C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-22008
	ctx.r6.s64 = ctx.r11.s64 + -22008;
	// addi r5,r10,-22024
	ctx.r5.s64 = ctx.r10.s64 + -22024;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,241
	ctx.r7.s64 = 241;
	// bl 0x824c50c0
	ctx.lr = 0x824C81C4;
	sub_824C50C0(ctx, base);
loc_824C81C4:
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

__attribute__((alias("__imp__sub_824C81DC"))) PPC_WEAK_FUNC(sub_824C81DC);
PPC_FUNC_IMPL(__imp__sub_824C81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C81E0"))) PPC_WEAK_FUNC(sub_824C81E0);
PPC_FUNC_IMPL(__imp__sub_824C81E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x824C81E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c8188
	ctx.lr = 0x824C81FC;
	sub_824C8188(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c820c
	if (!ctx.cr0.eq) goto loc_824C820C;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824c8400
	goto loc_824C8400;
loc_824C820C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8214;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0c8
	ctx.lr = 0x824C8218;
	sub_824CC0C8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8224;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0e0
	ctx.lr = 0x824C8228;
	sub_824CC0E0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8234;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0d0
	ctx.lr = 0x824C8238;
	sub_824CC0D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8244;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0f0
	ctx.lr = 0x824C8248;
	sub_824CC0F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8254;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0f8
	ctx.lr = 0x824C8258;
	sub_824CC0F8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8264;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc100
	ctx.lr = 0x824C8268;
	sub_824CC100(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8274;
	sub_824CCAF0(ctx, base);
	// bl 0x824cc0e8
	ctx.lr = 0x824C8278;
	sub_824CC0E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8284;
	sub_824CCAF0(ctx, base);
	// bl 0x82492d68
	ctx.lr = 0x824C8288;
	sub_82492D68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825796d0
	ctx.lr = 0x824C8298;
	sub_825796D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c82a8
	if (!ctx.cr0.eq) goto loc_824C82A8;
loc_824C82A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c8400
	goto loc_824C8400;
loc_824C82A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825796d0
	ctx.lr = 0x824C82B4;
	sub_825796D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c82a0
	if (!ctx.cr0.eq) goto loc_824C82A0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cd428
	ctx.lr = 0x824C82C8;
	sub_824CD428(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824c9f50
	ctx.lr = 0x824C82D0;
	sub_824C9F50(ctx, base);
	// b 0x824c82f8
	goto loc_824C82F8;
loc_824C82D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ca2f8
	ctx.lr = 0x824C82DC;
	sub_824CA2F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x824cb260
	ctx.lr = 0x824C82E4;
	sub_824CB260(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c82a0
	if (!ctx.cr0.eq) goto loc_824C82A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca250
	ctx.lr = 0x824C82F8;
	sub_824CA250(ctx, base);
loc_824C82F8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c82d4
	if (!ctx.cr0.eq) goto loc_824C82D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82579490
	ctx.lr = 0x824C830C;
	sub_82579490(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,-22348
	ctx.r29.s64 = ctx.r10.s64 + -22348;
	// addi r25,r9,-7884
	ctx.r25.s64 = ctx.r9.s64 + -7884;
	// addi r26,r11,-7976
	ctx.r26.s64 = ctx.r11.s64 + -7976;
	// beq 0x824c8344
	if (ctx.cr0.eq) goto loc_824C8344;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,520
	ctx.r7.s64 = 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8344;
	sub_824C50C0(ctx, base);
loc_824C8344:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x824ca540
	ctx.lr = 0x824C8368;
	sub_824CA540(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c8394
	if (!ctx.cr0.eq) goto loc_824C8394;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,531
	ctx.r7.s64 = 531;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C838C;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824c8400
	goto loc_824C8400;
loc_824C8394:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824caaa0
	ctx.lr = 0x824C83A0;
	sub_824CAAA0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824cdeb0
	ctx.lr = 0x824C83B4;
	sub_824CDEB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824c83cc
	if (ctx.cr0.eq) goto loc_824C83CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ca718
	ctx.lr = 0x824C83C4;
	sub_824CA718(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824c8400
	goto loc_824C8400;
loc_824C83CC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cd348
	ctx.lr = 0x824C83DC;
	sub_824CD348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824c83fc
	if (ctx.cr0.eq) goto loc_824C83FC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C83FC;
	sub_824C50C0(ctx, base);
loc_824C83FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C8400:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8408"))) PPC_WEAK_FUNC(sub_824C8408);
PPC_FUNC_IMPL(__imp__sub_824C8408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C8410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7976
	ctx.r28.s64 = ctx.r10.s64 + -7976;
	// bne cr6,0x824c8450
	if (!ctx.cr6.eq) goto loc_824C8450;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7860
	ctx.r5.s64 = ctx.r11.s64 + -7860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8450;
	sub_824C50C0(ctx, base);
loc_824C8450:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579b90
	ctx.lr = 0x824C845C;
	sub_82579B90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824c8480
	if (!ctx.cr0.eq) goto loc_824C8480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7864
	ctx.r5.s64 = ctx.r11.s64 + -7864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,623
	ctx.r7.s64 = 623;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8480;
	sub_824C50C0(ctx, base);
loc_824C8480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825797c8
	ctx.lr = 0x824C8488;
	sub_825797C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ccc98
	ctx.lr = 0x824C8494;
	sub_824CCC98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C84A0"))) PPC_WEAK_FUNC(sub_824C84A0);
PPC_FUNC_IMPL(__imp__sub_824C84A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C84A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7976
	ctx.r29.s64 = ctx.r10.s64 + -7976;
	// bne cr6,0x824c84e4
	if (!ctx.cr6.eq) goto loc_824C84E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7800
	ctx.r5.s64 = ctx.r11.s64 + -7800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,659
	ctx.r7.s64 = 659;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C84E4;
	sub_824C50C0(ctx, base);
loc_824C84E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c8188
	ctx.lr = 0x824C84EC;
	sub_824C8188(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x824c8510
	if (!ctx.cr0.eq) goto loc_824C8510;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7812
	ctx.r5.s64 = ctx.r11.s64 + -7812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,663
	ctx.r7.s64 = 663;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8510;
	sub_824C50C0(ctx, base);
loc_824C8510:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ccaf0
	ctx.lr = 0x824C8518;
	sub_824CCAF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c8538
	if (!ctx.cr0.eq) goto loc_824C8538;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7852
	ctx.r5.s64 = ctx.r11.s64 + -7852;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// bl 0x824c50c0
	ctx.lr = 0x824C8538;
	sub_824C50C0(ctx, base);
loc_824C8538:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824cccb8
	ctx.lr = 0x824C8544;
	sub_824CCCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579a40
	ctx.lr = 0x824C854C;
	sub_82579A40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8558"))) PPC_WEAK_FUNC(sub_824C8558);
PPC_FUNC_IMPL(__imp__sub_824C8558) {
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
	// bl 0x8257ae80
	ctx.lr = 0x824C8574;
	sub_8257AE80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c85a0
	if (!ctx.cr0.eq) goto loc_824C85A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7784
	ctx.r5.s64 = ctx.r10.s64 + -7784;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C85A0;
	sub_824C50C0(ctx, base);
loc_824C85A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824C85CC"))) PPC_WEAK_FUNC(sub_824C85CC);
PPC_FUNC_IMPL(__imp__sub_824C85CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C85D0"))) PPC_WEAK_FUNC(sub_824C85D0);
PPC_FUNC_IMPL(__imp__sub_824C85D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C85D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824c86b0
	if (ctx.cr6.eq) goto loc_824C86B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-22348
	ctx.r31.s64 = ctx.r11.s64 + -22348;
	// addi r30,r10,-7768
	ctx.r30.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8620
	if (!ctx.cr6.eq) goto loc_824C8620;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7608
	ctx.r5.s64 = ctx.r11.s64 + -7608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8620;
	sub_824C50C0(ctx, base);
loc_824C8620:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8648
	if (!ctx.cr6.eq) goto loc_824C8648;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7628
	ctx.r5.s64 = ctx.r11.s64 + -7628;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8648;
	sub_824C50C0(ctx, base);
loc_824C8648:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8670
	if (ctx.cr6.eq) goto loc_824C8670;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7656
	ctx.r5.s64 = ctx.r11.s64 + -7656;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8670;
	sub_824C50C0(ctx, base);
loc_824C8670:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8698
	if (ctx.cr6.eq) goto loc_824C8698;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7684
	ctx.r5.s64 = ctx.r11.s64 + -7684;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8698;
	sub_824C50C0(ctx, base);
loc_824C8698:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_824C86B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C86B8"))) PPC_WEAK_FUNC(sub_824C86B8);
PPC_FUNC_IMPL(__imp__sub_824C86B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C86C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824c8794
	if (ctx.cr6.eq) goto loc_824C8794;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-22348
	ctx.r31.s64 = ctx.r11.s64 + -22348;
	// addi r30,r10,-7768
	ctx.r30.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8708
	if (!ctx.cr6.eq) goto loc_824C8708;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7576
	ctx.r5.s64 = ctx.r11.s64 + -7576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8708;
	sub_824C50C0(ctx, base);
loc_824C8708:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8730
	if (!ctx.cr6.eq) goto loc_824C8730;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7596
	ctx.r5.s64 = ctx.r11.s64 + -7596;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8730;
	sub_824C50C0(ctx, base);
loc_824C8730:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8758
	if (ctx.cr6.eq) goto loc_824C8758;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7656
	ctx.r5.s64 = ctx.r11.s64 + -7656;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8758;
	sub_824C50C0(ctx, base);
loc_824C8758:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8780
	if (ctx.cr6.eq) goto loc_824C8780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-7684
	ctx.r5.s64 = ctx.r11.s64 + -7684;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8780;
	sub_824C50C0(ctx, base);
loc_824C8780:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_824C8794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C879C"))) PPC_WEAK_FUNC(sub_824C879C);
PPC_FUNC_IMPL(__imp__sub_824C879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C87A0"))) PPC_WEAK_FUNC(sub_824C87A0);
PPC_FUNC_IMPL(__imp__sub_824C87A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C87A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c8840
	if (ctx.cr6.eq) goto loc_824C8840;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824c87f0
	if (!ctx.cr6.eq) goto loc_824C87F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7564
	ctx.r5.s64 = ctx.r11.s64 + -7564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,264
	ctx.r7.s64 = 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C87F0;
	sub_824C50C0(ctx, base);
loc_824C87F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8818
	if (!ctx.cr6.eq) goto loc_824C8818;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7548
	ctx.r5.s64 = ctx.r11.s64 + -7548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8818;
	sub_824C50C0(ctx, base);
loc_824C8818:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_824C8840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8848"))) PPC_WEAK_FUNC(sub_824C8848);
PPC_FUNC_IMPL(__imp__sub_824C8848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824C8850;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-7768
	ctx.r26.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8898
	if (!ctx.cr6.eq) goto loc_824C8898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7480
	ctx.r5.s64 = ctx.r11.s64 + -7480;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8898;
	sub_824C50C0(ctx, base);
loc_824C8898:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c88bc
	if (!ctx.cr6.eq) goto loc_824C88BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7492
	ctx.r5.s64 = ctx.r11.s64 + -7492;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C88BC;
	sub_824C50C0(ctx, base);
loc_824C88BC:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x824C88CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c88f0
	if (!ctx.cr0.eq) goto loc_824C88F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7504
	ctx.r5.s64 = ctx.r11.s64 + -7504;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C88F0;
	sub_824C50C0(ctx, base);
loc_824C88F0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824C8914;
	sub_8257AD50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x824c8558
	ctx.lr = 0x824C891C;
	sub_824C8558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x824c8944
	if (!ctx.cr0.eq) goto loc_824C8944;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7524
	ctx.r5.s64 = ctx.r11.s64 + -7524;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8944;
	sub_824C50C0(ctx, base);
loc_824C8944:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8980"))) PPC_WEAK_FUNC(sub_824C8980);
PPC_FUNC_IMPL(__imp__sub_824C8980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C8988;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r9,-7464
	ctx.r28.s64 = ctx.r9.s64 + -7464;
	// addi r27,r10,-7768
	ctx.r27.s64 = ctx.r10.s64 + -7768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c89bc
	if (!ctx.cr6.eq) goto loc_824C89BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c89c8
	goto loc_824C89C8;
loc_824C89BC:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8a40
	if (!ctx.cr6.eq) goto loc_824C8A40;
loc_824C89C8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C89E0;
	sub_824C50C0(ctx, base);
	// b 0x824c8a40
	goto loc_824C8A40;
loc_824C89E4:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c89fc
	if (ctx.cr6.eq) goto loc_824C89FC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8a14
	if (!ctx.cr6.eq) goto loc_824C8A14;
loc_824C89FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,524
	ctx.r7.s64 = 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8A14;
	sub_824C50C0(ctx, base);
loc_824C8A14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824C8A1C;
	sub_824C87A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C8A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C8A40;
	sub_8257AF80(ctx, base);
loc_824C8A40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c89e4
	if (!ctx.cr6.eq) goto loc_824C89E4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c8a60
	if (ctx.cr6.eq) goto loc_824C8A60;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C8A60;
	sub_8257AF80(ctx, base);
loc_824C8A60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8257ae10
	ctx.lr = 0x824C8A68;
	sub_8257AE10(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C8A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8A84"))) PPC_WEAK_FUNC(sub_824C8A84);
PPC_FUNC_IMPL(__imp__sub_824C8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C8A88"))) PPC_WEAK_FUNC(sub_824C8A88);
PPC_FUNC_IMPL(__imp__sub_824C8A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C8A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8ad4
	if (!ctx.cr6.eq) goto loc_824C8AD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8AD4;
	sub_824C50C0(ctx, base);
loc_824C8AD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c8558
	ctx.lr = 0x824C8ADC;
	sub_824C8558(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824c8b00
	if (!ctx.cr0.eq) goto loc_824C8B00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7784
	ctx.r5.s64 = ctx.r11.s64 + -7784;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8B00;
	sub_824C50C0(ctx, base);
loc_824C8B00:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824c86b8
	ctx.lr = 0x824C8B14;
	sub_824C86B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8b28
	if (!ctx.cr6.eq) goto loc_824C8B28;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_824C8B28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8B3C"))) PPC_WEAK_FUNC(sub_824C8B3C);
PPC_FUNC_IMPL(__imp__sub_824C8B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C8B40"))) PPC_WEAK_FUNC(sub_824C8B40);
PPC_FUNC_IMPL(__imp__sub_824C8B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C8B48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8b8c
	if (!ctx.cr6.eq) goto loc_824C8B8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7420
	ctx.r5.s64 = ctx.r11.s64 + -7420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8B8C;
	sub_824C50C0(ctx, base);
loc_824C8B8C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c8bb0
	if (!ctx.cr6.eq) goto loc_824C8BB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,622
	ctx.r7.s64 = 622;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8BB0;
	sub_824C50C0(ctx, base);
loc_824C8BB0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824c8bf8
	if (ctx.cr6.eq) goto loc_824C8BF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-7444
	ctx.r27.s64 = ctx.r11.s64 + -7444;
loc_824C8BC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824c8bfc
	if (ctx.cr6.eq) goto loc_824C8BFC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c8bf0
	if (!ctx.cr6.eq) goto loc_824C8BF0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,636
	ctx.r7.s64 = 636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8BF0;
	sub_824C50C0(ctx, base);
loc_824C8BF0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824c8bc0
	if (!ctx.cr6.eq) goto loc_824C8BC0;
loc_824C8BF8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824C8BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8C08"))) PPC_WEAK_FUNC(sub_824C8C08);
PPC_FUNC_IMPL(__imp__sub_824C8C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C8C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8c50
	if (!ctx.cr6.eq) goto loc_824C8C50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8C50;
	sub_824C50C0(ctx, base);
loc_824C8C50:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8c64
	if (!ctx.cr6.eq) goto loc_824C8C64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c8c70
	goto loc_824C8C70;
loc_824C8C64:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8c8c
	if (!ctx.cr6.eq) goto loc_824C8C8C;
loc_824C8C70:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8C8C;
	sub_824C50C0(ctx, base);
loc_824C8C8C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c8b40
	ctx.lr = 0x824C8C9C;
	sub_824C8B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c8ca8
	if (!ctx.cr0.eq) goto loc_824C8CA8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_824C8CA8:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8CB8"))) PPC_WEAK_FUNC(sub_824C8CB8);
PPC_FUNC_IMPL(__imp__sub_824C8CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C8CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8d00
	if (!ctx.cr6.eq) goto loc_824C8D00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8D00;
	sub_824C50C0(ctx, base);
loc_824C8D00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8d14
	if (!ctx.cr6.eq) goto loc_824C8D14;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c8d20
	goto loc_824C8D20;
loc_824C8D14:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c8d3c
	if (!ctx.cr6.eq) goto loc_824C8D3C;
loc_824C8D20:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,765
	ctx.r7.s64 = 765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8D3C;
	sub_824C50C0(ctx, base);
loc_824C8D3C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c8b40
	ctx.lr = 0x824C8D4C;
	sub_824C8B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c8d58
	if (!ctx.cr0.eq) goto loc_824C8D58;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_824C8D58:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c8da0
	if (ctx.cr6.eq) goto loc_824C8DA0;
	// bl 0x824c87a0
	ctx.lr = 0x824C8D6C;
	sub_824C87A0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c8d84
	if (!ctx.cr6.eq) goto loc_824C8D84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_824C8D84:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c8d94
	if (ctx.cr6.eq) goto loc_824C8D94;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C8D94;
	sub_8257AF80(ctx, base);
loc_824C8D94:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824C8DA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8DAC"))) PPC_WEAK_FUNC(sub_824C8DAC);
PPC_FUNC_IMPL(__imp__sub_824C8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C8DB0"))) PPC_WEAK_FUNC(sub_824C8DB0);
PPC_FUNC_IMPL(__imp__sub_824C8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824C8DB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8e04
	if (!ctx.cr6.eq) goto loc_824C8E04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8E04;
	sub_824C50C0(ctx, base);
loc_824C8E04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c8e28
	if (!ctx.cr6.eq) goto loc_824C8E28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7340
	ctx.r5.s64 = ctx.r11.s64 + -7340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8E28;
	sub_824C50C0(ctx, base);
loc_824C8E28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8e50
	if (ctx.cr6.eq) goto loc_824C8E50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7360
	ctx.r5.s64 = ctx.r11.s64 + -7360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8E50;
	sub_824C50C0(ctx, base);
loc_824C8E50:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c8e78
	if (ctx.cr6.eq) goto loc_824C8E78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7380
	ctx.r5.s64 = ctx.r11.s64 + -7380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8E78;
	sub_824C50C0(ctx, base);
loc_824C8E78:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x824c8558
	ctx.lr = 0x824C8E90;
	sub_824C8558(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c8eb4
	if (!ctx.cr0.eq) goto loc_824C8EB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7400
	ctx.r5.s64 = ctx.r11.s64 + -7400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// bl 0x824c50c0
	ctx.lr = 0x824C8EB4;
	sub_824C50C0(ctx, base);
loc_824C8EB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C8EF4"))) PPC_WEAK_FUNC(sub_824C8EF4);
PPC_FUNC_IMPL(__imp__sub_824C8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C8EF8"))) PPC_WEAK_FUNC(sub_824C8EF8);
PPC_FUNC_IMPL(__imp__sub_824C8EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C8F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-7768
	ctx.r26.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c8f3c
	if (!ctx.cr6.eq) goto loc_824C8F3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8F3C;
	sub_824C50C0(ctx, base);
loc_824C8F3C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c8f50
	if (ctx.cr0.eq) goto loc_824C8F50;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_824C8F50:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c8fc8
	if (ctx.cr6.eq) goto loc_824C8FC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-7464
	ctx.r28.s64 = ctx.r11.s64 + -7464;
loc_824C8F60:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c8f78
	if (ctx.cr6.eq) goto loc_824C8F78;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c8f90
	if (!ctx.cr6.eq) goto loc_824C8F90;
loc_824C8F78:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1088
	ctx.r7.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C8F90;
	sub_824C50C0(ctx, base);
loc_824C8F90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824C8F98;
	sub_824C87A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C8FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C8FBC;
	sub_8257AF80(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c8f60
	if (!ctx.cr6.eq) goto loc_824C8F60;
loc_824C8FC8:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c8fdc
	if (ctx.cr6.eq) goto loc_824C8FDC;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C8FDC;
	sub_8257AF80(ctx, base);
loc_824C8FDC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9004
	if (!ctx.cr6.eq) goto loc_824C9004;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8257ae10
	ctx.lr = 0x824C8FF0;
	sub_8257AE10(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C9004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C9004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C900C"))) PPC_WEAK_FUNC(sub_824C900C);
PPC_FUNC_IMPL(__imp__sub_824C900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9010"))) PPC_WEAK_FUNC(sub_824C9010);
PPC_FUNC_IMPL(__imp__sub_824C9010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824C9018;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-7768
	ctx.r26.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c905c
	if (!ctx.cr6.eq) goto loc_824C905C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C905C;
	sub_824C50C0(ctx, base);
loc_824C905C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c8558
	ctx.lr = 0x824C9064;
	sub_824C8558(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x824c9088
	if (!ctx.cr0.eq) goto loc_824C9088;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7784
	ctx.r5.s64 = ctx.r11.s64 + -7784;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9088;
	sub_824C50C0(ctx, base);
loc_824C9088:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r28,r11,-7444
	ctx.r28.s64 = ctx.r11.s64 + -7444;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c90ac
	if (!ctx.cr6.eq) goto loc_824C90AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c90b8
	goto loc_824C90B8;
loc_824C90AC:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c90f0
	if (!ctx.cr6.eq) goto loc_824C90F0;
loc_824C90B8:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x824c90dc
	goto loc_824C90DC;
loc_824C90C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x824c90fc
	if (ctx.cr6.gt) goto loc_824C90FC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c90f0
	if (!ctx.cr6.eq) goto loc_824C90F0;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_824C90DC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C90F0;
	sub_824C50C0(ctx, base);
loc_824C90F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c90c0
	if (!ctx.cr6.eq) goto loc_824C90C0;
loc_824C90FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c86b8
	ctx.lr = 0x824C9108;
	sub_824C86B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c911c
	if (!ctx.cr6.eq) goto loc_824C911C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_824C911C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9130"))) PPC_WEAK_FUNC(sub_824C9130);
PPC_FUNC_IMPL(__imp__sub_824C9130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C9138;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c917c
	if (!ctx.cr6.eq) goto loc_824C917C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7420
	ctx.r5.s64 = ctx.r11.s64 + -7420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C917C;
	sub_824C50C0(ctx, base);
loc_824C917C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c91a0
	if (!ctx.cr6.eq) goto loc_824C91A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C91A0;
	sub_824C50C0(ctx, base);
loc_824C91A0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824c91e8
	if (ctx.cr6.eq) goto loc_824C91E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-7444
	ctx.r27.s64 = ctx.r11.s64 + -7444;
loc_824C91B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824c91ec
	if (ctx.cr6.eq) goto loc_824C91EC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c91e0
	if (!ctx.cr6.eq) goto loc_824C91E0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C91E0;
	sub_824C50C0(ctx, base);
loc_824C91E0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824c91b0
	if (!ctx.cr6.eq) goto loc_824C91B0;
loc_824C91E8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824C91EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C91F8"))) PPC_WEAK_FUNC(sub_824C91F8);
PPC_FUNC_IMPL(__imp__sub_824C91F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C9200;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9240
	if (!ctx.cr6.eq) goto loc_824C9240;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9240;
	sub_824C50C0(ctx, base);
loc_824C9240:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9254
	if (!ctx.cr6.eq) goto loc_824C9254;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c9260
	goto loc_824C9260;
loc_824C9254:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c927c
	if (!ctx.cr6.eq) goto loc_824C927C;
loc_824C9260:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C927C;
	sub_824C50C0(ctx, base);
loc_824C927C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c9130
	ctx.lr = 0x824C928C;
	sub_824C9130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c9298
	if (!ctx.cr0.eq) goto loc_824C9298;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_824C9298:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C92A8"))) PPC_WEAK_FUNC(sub_824C92A8);
PPC_FUNC_IMPL(__imp__sub_824C92A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C92B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c92ec
	if (!ctx.cr6.eq) goto loc_824C92EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C92EC;
	sub_824C50C0(ctx, base);
loc_824C92EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9300
	if (!ctx.cr6.eq) goto loc_824C9300;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c930c
	goto loc_824C930C;
loc_824C9300:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c9328
	if (!ctx.cr6.eq) goto loc_824C9328;
loc_824C930C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7420
	ctx.r5.s64 = ctx.r11.s64 + -7420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9328;
	sub_824C50C0(ctx, base);
loc_824C9328:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x824c9130
	ctx.lr = 0x824C933C;
	sub_824C9130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c9348
	if (!ctx.cr0.eq) goto loc_824C9348;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_824C9348:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9358"))) PPC_WEAK_FUNC(sub_824C9358);
PPC_FUNC_IMPL(__imp__sub_824C9358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C9360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c93a0
	if (!ctx.cr6.eq) goto loc_824C93A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C93A0;
	sub_824C50C0(ctx, base);
loc_824C93A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c93b4
	if (!ctx.cr6.eq) goto loc_824C93B4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c93c0
	goto loc_824C93C0;
loc_824C93B4:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c93dc
	if (!ctx.cr6.eq) goto loc_824C93DC;
loc_824C93C0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C93DC;
	sub_824C50C0(ctx, base);
loc_824C93DC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c8b40
	ctx.lr = 0x824C93EC;
	sub_824C8B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c93f8
	if (!ctx.cr0.eq) goto loc_824C93F8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_824C93F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c9440
	if (ctx.cr6.eq) goto loc_824C9440;
	// bl 0x824c87a0
	ctx.lr = 0x824C940C;
	sub_824C87A0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9424
	if (!ctx.cr6.eq) goto loc_824C9424;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_824C9424:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c9434
	if (ctx.cr6.eq) goto loc_824C9434;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C9434;
	sub_8257AF80(ctx, base);
loc_824C9434:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824C9440:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C944C"))) PPC_WEAK_FUNC(sub_824C944C);
PPC_FUNC_IMPL(__imp__sub_824C944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9450"))) PPC_WEAK_FUNC(sub_824C9450);
PPC_FUNC_IMPL(__imp__sub_824C9450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9494
	if (!ctx.cr6.eq) goto loc_824C9494;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7332
	ctx.r5.s64 = ctx.r11.s64 + -7332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9494;
	sub_824C50C0(ctx, base);
loc_824C9494:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c94a8
	if (!ctx.cr6.eq) goto loc_824C94A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c94b4
	goto loc_824C94B4;
loc_824C94A8:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c94d0
	if (!ctx.cr6.eq) goto loc_824C94D0;
loc_824C94B4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C94D0;
	sub_824C50C0(ctx, base);
loc_824C94D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c951c
	if (ctx.cr6.eq) goto loc_824C951C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824C94E8;
	sub_824C87A0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9500
	if (!ctx.cr6.eq) goto loc_824C9500;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_824C9500:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c9510
	if (ctx.cr6.eq) goto loc_824C9510;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C9510;
	sub_8257AF80(ctx, base);
loc_824C9510:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824C951C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9528"))) PPC_WEAK_FUNC(sub_824C9528);
PPC_FUNC_IMPL(__imp__sub_824C9528) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c9564
	if (!ctx.cr6.eq) goto loc_824C9564;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7332
	ctx.r5.s64 = ctx.r10.s64 + -7332;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x824c50c0
	ctx.lr = 0x824C9564;
	sub_824C50C0(ctx, base);
loc_824C9564:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824C957C"))) PPC_WEAK_FUNC(sub_824C957C);
PPC_FUNC_IMPL(__imp__sub_824C957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9580"))) PPC_WEAK_FUNC(sub_824C9580);
PPC_FUNC_IMPL(__imp__sub_824C9580) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824C95AC;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c95d8
	if (!ctx.cr0.eq) goto loc_824C95D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C95D8;
	sub_824C50C0(ctx, base);
loc_824C95D8:
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

__attribute__((alias("__imp__sub_824C95F0"))) PPC_WEAK_FUNC(sub_824C95F0);
PPC_FUNC_IMPL(__imp__sub_824C95F0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824C961C;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c9648
	if (!ctx.cr0.eq) goto loc_824C9648;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9648;
	sub_824C50C0(ctx, base);
loc_824C9648:
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

__attribute__((alias("__imp__sub_824C9660"))) PPC_WEAK_FUNC(sub_824C9660);
PPC_FUNC_IMPL(__imp__sub_824C9660) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C9668"))) PPC_WEAK_FUNC(sub_824C9668);
PPC_FUNC_IMPL(__imp__sub_824C9668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c96b0
	if (!ctx.cr6.eq) goto loc_824C96B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7260
	ctx.r5.s64 = ctx.r11.s64 + -7260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C96B0;
	sub_824C50C0(ctx, base);
loc_824C96B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c96d4
	if (!ctx.cr6.eq) goto loc_824C96D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7340
	ctx.r5.s64 = ctx.r11.s64 + -7340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C96D4;
	sub_824C50C0(ctx, base);
loc_824C96D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c96fc
	if (ctx.cr6.eq) goto loc_824C96FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7284
	ctx.r5.s64 = ctx.r11.s64 + -7284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C96FC;
	sub_824C50C0(ctx, base);
loc_824C96FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c9724
	if (ctx.cr6.eq) goto loc_824C9724;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7304
	ctx.r5.s64 = ctx.r11.s64 + -7304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9724;
	sub_824C50C0(ctx, base);
loc_824C9724:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c8558
	ctx.lr = 0x824C9730;
	sub_824C8558(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c9754
	if (!ctx.cr0.eq) goto loc_824C9754;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7324
	ctx.r5.s64 = ctx.r11.s64 + -7324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// bl 0x824c50c0
	ctx.lr = 0x824C9754;
	sub_824C50C0(ctx, base);
loc_824C9754:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9784"))) PPC_WEAK_FUNC(sub_824C9784);
PPC_FUNC_IMPL(__imp__sub_824C9784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9788"))) PPC_WEAK_FUNC(sub_824C9788);
PPC_FUNC_IMPL(__imp__sub_824C9788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824C9790;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r10,-22348
	ctx.r28.s64 = ctx.r10.s64 + -22348;
	// addi r27,r11,-7768
	ctx.r27.s64 = ctx.r11.s64 + -7768;
	// bne cr6,0x824c97cc
	if (!ctx.cr6.eq) goto loc_824C97CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7260
	ctx.r5.s64 = ctx.r11.s64 + -7260;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C97CC;
	sub_824C50C0(ctx, base);
loc_824C97CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-7464
	ctx.r25.s64 = ctx.r11.s64 + -7464;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c97e8
	if (!ctx.cr6.eq) goto loc_824C97E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x824c97f4
	goto loc_824C97F4;
loc_824C97E8:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c980c
	if (!ctx.cr6.eq) goto loc_824C980C;
loc_824C97F4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2284
	ctx.r7.s64 = 2284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C980C;
	sub_824C50C0(ctx, base);
loc_824C980C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824c9890
	if (ctx.cr6.eq) goto loc_824C9890;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-7248
	ctx.r26.s64 = ctx.r11.s64 + -7248;
loc_824C9820:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c9838
	if (ctx.cr6.eq) goto loc_824C9838;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c9850
	if (!ctx.cr6.eq) goto loc_824C9850;
loc_824C9838:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9850;
	sub_824C50C0(ctx, base);
loc_824C9850:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824C9858;
	sub_824C87A0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824c987c
	if (!ctx.cr0.eq) goto loc_824C987C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9878;
	sub_824C50C0(ctx, base);
	// b 0x824c9884
	goto loc_824C9884;
loc_824C987C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C9884;
	sub_8257AF80(ctx, base);
loc_824C9884:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9820
	if (!ctx.cr6.eq) goto loc_824C9820;
loc_824C9890:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c98a4
	if (ctx.cr6.eq) goto loc_824C98A4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C98A4;
	sub_8257AF80(ctx, base);
loc_824C98A4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c98cc
	if (!ctx.cr6.eq) goto loc_824C98CC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8257ae10
	ctx.lr = 0x824C98B8;
	sub_8257AE10(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C98CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C98CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C98D4"))) PPC_WEAK_FUNC(sub_824C98D4);
PPC_FUNC_IMPL(__imp__sub_824C98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C98D8"))) PPC_WEAK_FUNC(sub_824C98D8);
PPC_FUNC_IMPL(__imp__sub_824C98D8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c9914
	if (!ctx.cr6.eq) goto loc_824C9914;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7260
	ctx.r5.s64 = ctx.r10.s64 + -7260;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// bl 0x824c50c0
	ctx.lr = 0x824C9914;
	sub_824C50C0(ctx, base);
loc_824C9914:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824C992C"))) PPC_WEAK_FUNC(sub_824C992C);
PPC_FUNC_IMPL(__imp__sub_824C992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9930"))) PPC_WEAK_FUNC(sub_824C9930);
PPC_FUNC_IMPL(__imp__sub_824C9930) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824C995C;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c9988
	if (!ctx.cr0.eq) goto loc_824C9988;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9988;
	sub_824C50C0(ctx, base);
loc_824C9988:
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

__attribute__((alias("__imp__sub_824C99A0"))) PPC_WEAK_FUNC(sub_824C99A0);
PPC_FUNC_IMPL(__imp__sub_824C99A0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824C99CC;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824c99f8
	if (!ctx.cr0.eq) goto loc_824C99F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C99F8;
	sub_824C50C0(ctx, base);
loc_824C99F8:
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

__attribute__((alias("__imp__sub_824C9A10"))) PPC_WEAK_FUNC(sub_824C9A10);
PPC_FUNC_IMPL(__imp__sub_824C9A10) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824C9A18"))) PPC_WEAK_FUNC(sub_824C9A18);
PPC_FUNC_IMPL(__imp__sub_824C9A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9a60
	if (!ctx.cr6.eq) goto loc_824C9A60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9A60;
	sub_824C50C0(ctx, base);
loc_824C9A60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c9a84
	if (!ctx.cr6.eq) goto loc_824C9A84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7340
	ctx.r5.s64 = ctx.r11.s64 + -7340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9A84;
	sub_824C50C0(ctx, base);
loc_824C9A84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c9aac
	if (ctx.cr6.eq) goto loc_824C9AAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7196
	ctx.r5.s64 = ctx.r11.s64 + -7196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9AAC;
	sub_824C50C0(ctx, base);
loc_824C9AAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c9ad4
	if (ctx.cr6.eq) goto loc_824C9AD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7216
	ctx.r5.s64 = ctx.r11.s64 + -7216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9AD4;
	sub_824C50C0(ctx, base);
loc_824C9AD4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c8558
	ctx.lr = 0x824C9AE0;
	sub_824C8558(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824c9b04
	if (!ctx.cr0.eq) goto loc_824C9B04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7236
	ctx.r5.s64 = ctx.r11.s64 + -7236;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// bl 0x824c50c0
	ctx.lr = 0x824C9B04;
	sub_824C50C0(ctx, base);
loc_824C9B04:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9B34"))) PPC_WEAK_FUNC(sub_824C9B34);
PPC_FUNC_IMPL(__imp__sub_824C9B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9B38"))) PPC_WEAK_FUNC(sub_824C9B38);
PPC_FUNC_IMPL(__imp__sub_824C9B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824C9B40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r9,-7464
	ctx.r28.s64 = ctx.r9.s64 + -7464;
	// addi r27,r10,-7768
	ctx.r27.s64 = ctx.r10.s64 + -7768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9b74
	if (!ctx.cr6.eq) goto loc_824C9B74;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824c9b80
	goto loc_824C9B80;
loc_824C9B74:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c9bf8
	if (!ctx.cr6.eq) goto loc_824C9BF8;
loc_824C9B80:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2964
	ctx.r7.s64 = 2964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9B98;
	sub_824C50C0(ctx, base);
	// b 0x824c9bf8
	goto loc_824C9BF8;
loc_824C9B9C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c9bb4
	if (ctx.cr6.eq) goto loc_824C9BB4;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824c9bcc
	if (!ctx.cr6.eq) goto loc_824C9BCC;
loc_824C9BB4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2973
	ctx.r7.s64 = 2973;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9BCC;
	sub_824C50C0(ctx, base);
loc_824C9BCC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824C9BD4;
	sub_824C87A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C9BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C9BF8;
	sub_8257AF80(ctx, base);
loc_824C9BF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9b9c
	if (!ctx.cr6.eq) goto loc_824C9B9C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c9c18
	if (ctx.cr6.eq) goto loc_824C9C18;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257af80
	ctx.lr = 0x824C9C18;
	sub_8257AF80(ctx, base);
loc_824C9C18:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9c40
	if (!ctx.cr6.eq) goto loc_824C9C40;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8257ae10
	ctx.lr = 0x824C9C2C;
	sub_8257AE10(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C9C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C9C40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9C48"))) PPC_WEAK_FUNC(sub_824C9C48);
PPC_FUNC_IMPL(__imp__sub_824C9C48) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c9c84
	if (!ctx.cr6.eq) goto loc_824C9C84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7172
	ctx.r5.s64 = ctx.r10.s64 + -7172;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// bl 0x824c50c0
	ctx.lr = 0x824C9C84;
	sub_824C50C0(ctx, base);
loc_824C9C84:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824C9C9C"))) PPC_WEAK_FUNC(sub_824C9C9C);
PPC_FUNC_IMPL(__imp__sub_824C9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824C9CA0"))) PPC_WEAK_FUNC(sub_824C9CA0);
PPC_FUNC_IMPL(__imp__sub_824C9CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9CA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9ce8
	if (!ctx.cr6.eq) goto loc_824C9CE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9CE8;
	sub_824C50C0(ctx, base);
loc_824C9CE8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c9d0c
	if (!ctx.cr6.eq) goto loc_824C9D0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7532
	ctx.r5.s64 = ctx.r11.s64 + -7532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9D0C;
	sub_824C50C0(ctx, base);
loc_824C9D0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9d34
	if (!ctx.cr6.eq) goto loc_824C9D34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7160
	ctx.r5.s64 = ctx.r11.s64 + -7160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9D34;
	sub_824C50C0(ctx, base);
loc_824C9D34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824c85d0
	ctx.lr = 0x824C9D40;
	sub_824C85D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9d54
	if (!ctx.cr6.eq) goto loc_824C9D54;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_824C9D54:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9D68"))) PPC_WEAK_FUNC(sub_824C9D68);
PPC_FUNC_IMPL(__imp__sub_824C9D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C9D70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9db0
	if (!ctx.cr6.eq) goto loc_824C9DB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9DB0;
	sub_824C50C0(ctx, base);
loc_824C9DB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c8558
	ctx.lr = 0x824C9DB8;
	sub_824C8558(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824c9ddc
	if (!ctx.cr0.eq) goto loc_824C9DDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7784
	ctx.r5.s64 = ctx.r11.s64 + -7784;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9DDC;
	sub_824C50C0(ctx, base);
loc_824C9DDC:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c9ca0
	ctx.lr = 0x824C9DEC;
	sub_824C9CA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9DF8"))) PPC_WEAK_FUNC(sub_824C9DF8);
PPC_FUNC_IMPL(__imp__sub_824C9DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9e40
	if (!ctx.cr6.eq) goto loc_824C9E40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9E40;
	sub_824C50C0(ctx, base);
loc_824C9E40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824c9e64
	if (!ctx.cr6.eq) goto loc_824C9E64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7532
	ctx.r5.s64 = ctx.r11.s64 + -7532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9E64;
	sub_824C50C0(ctx, base);
loc_824C9E64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c9e8c
	if (!ctx.cr6.eq) goto loc_824C9E8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7160
	ctx.r5.s64 = ctx.r11.s64 + -7160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9E8C;
	sub_824C50C0(ctx, base);
loc_824C9E8C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824c86b8
	ctx.lr = 0x824C9E98;
	sub_824C86B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9eac
	if (!ctx.cr6.eq) goto loc_824C9EAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_824C9EAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9EC0"))) PPC_WEAK_FUNC(sub_824C9EC0);
PPC_FUNC_IMPL(__imp__sub_824C9EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824C9EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9f08
	if (!ctx.cr6.eq) goto loc_824C9F08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9F08;
	sub_824C50C0(ctx, base);
loc_824C9F08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c8558
	ctx.lr = 0x824C9F10;
	sub_824C8558(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824c9f34
	if (!ctx.cr0.eq) goto loc_824C9F34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7784
	ctx.r5.s64 = ctx.r11.s64 + -7784;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9F34;
	sub_824C50C0(ctx, base);
loc_824C9F34:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c9df8
	ctx.lr = 0x824C9F44;
	sub_824C9DF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9F50"))) PPC_WEAK_FUNC(sub_824C9F50);
PPC_FUNC_IMPL(__imp__sub_824C9F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824C9F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824c9f94
	if (!ctx.cr6.eq) goto loc_824C9F94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9F94;
	sub_824C50C0(ctx, base);
loc_824C9F94:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9fa8
	if (!ctx.cr6.eq) goto loc_824C9FA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c9fe8
	goto loc_824C9FE8;
loc_824C9FA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9fbc
	if (!ctx.cr6.eq) goto loc_824C9FBC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x824c9fc8
	goto loc_824C9FC8;
loc_824C9FBC:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c9fe4
	if (!ctx.cr6.eq) goto loc_824C9FE4;
loc_824C9FC8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824C9FE4;
	sub_824C50C0(ctx, base);
loc_824C9FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824C9FE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824C9FF0"))) PPC_WEAK_FUNC(sub_824C9FF0);
PPC_FUNC_IMPL(__imp__sub_824C9FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824C9FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824ca034
	if (!ctx.cr6.eq) goto loc_824CA034;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA034;
	sub_824C50C0(ctx, base);
loc_824CA034:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ca048
	if (!ctx.cr6.eq) goto loc_824CA048;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ca0c0
	goto loc_824CA0C0;
loc_824CA048:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ca05c
	if (!ctx.cr6.eq) goto loc_824CA05C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824ca068
	goto loc_824CA068;
loc_824CA05C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824ca084
	if (!ctx.cr6.eq) goto loc_824CA084;
loc_824CA068:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA084;
	sub_824C50C0(ctx, base);
loc_824CA084:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ca0ac
	if (!ctx.cr6.eq) goto loc_824CA0AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7120
	ctx.r5.s64 = ctx.r11.s64 + -7120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA0AC;
	sub_824C50C0(ctx, base);
loc_824CA0AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824CA0B4;
	sub_824C87A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824CA0C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA0C8"))) PPC_WEAK_FUNC(sub_824CA0C8);
PPC_FUNC_IMPL(__imp__sub_824CA0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824CA0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-7768
	ctx.r28.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824ca10c
	if (!ctx.cr6.eq) goto loc_824CA10C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA10C;
	sub_824C50C0(ctx, base);
loc_824CA10C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ca120
	if (!ctx.cr6.eq) goto loc_824CA120;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ca198
	goto loc_824CA198;
loc_824CA120:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ca134
	if (!ctx.cr6.eq) goto loc_824CA134;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x824ca140
	goto loc_824CA140;
loc_824CA134:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824ca15c
	if (!ctx.cr6.eq) goto loc_824CA15C;
loc_824CA140:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7128
	ctx.r5.s64 = ctx.r11.s64 + -7128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA15C;
	sub_824C50C0(ctx, base);
loc_824CA15C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ca184
	if (!ctx.cr6.eq) goto loc_824CA184;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7088
	ctx.r5.s64 = ctx.r11.s64 + -7088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA184;
	sub_824C50C0(ctx, base);
loc_824CA184:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824CA18C;
	sub_824C87A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824CA198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA1A0"))) PPC_WEAK_FUNC(sub_824CA1A0);
PPC_FUNC_IMPL(__imp__sub_824CA1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824CA1A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-7768
	ctx.r29.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824ca1e8
	if (!ctx.cr6.eq) goto loc_824CA1E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7172
	ctx.r5.s64 = ctx.r11.s64 + -7172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA1E8;
	sub_824C50C0(ctx, base);
loc_824CA1E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824ca20c
	if (!ctx.cr6.eq) goto loc_824CA20C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7532
	ctx.r5.s64 = ctx.r11.s64 + -7532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA20C;
	sub_824C50C0(ctx, base);
loc_824CA20C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ca234
	if (!ctx.cr6.eq) goto loc_824CA234;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7160
	ctx.r5.s64 = ctx.r11.s64 + -7160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA234;
	sub_824C50C0(ctx, base);
loc_824CA234:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c87a0
	ctx.lr = 0x824CA23C;
	sub_824C87A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA250"))) PPC_WEAK_FUNC(sub_824CA250);
PPC_FUNC_IMPL(__imp__sub_824CA250) {
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
	// bne cr6,0x824ca298
	if (!ctx.cr6.eq) goto loc_824CA298;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7532
	ctx.r5.s64 = ctx.r10.s64 + -7532;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA290;
	sub_824C50C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ca29c
	goto loc_824CA29C;
loc_824CA298:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_824CA29C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ca2ac
	if (!ctx.cr6.eq) goto loc_824CA2AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CA2AC:
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

__attribute__((alias("__imp__sub_824CA2C0"))) PPC_WEAK_FUNC(sub_824CA2C0);
PPC_FUNC_IMPL(__imp__sub_824CA2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824ca2ec
	if (!ctx.cr6.eq) goto loc_824CA2EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7532
	ctx.r5.s64 = ctx.r10.s64 + -7532;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// b 0x824c50c0
	sub_824C50C0(ctx, base);
	return;
loc_824CA2EC:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8257af80
	sub_8257AF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA2F4"))) PPC_WEAK_FUNC(sub_824CA2F4);
PPC_FUNC_IMPL(__imp__sub_824CA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CA2F8"))) PPC_WEAK_FUNC(sub_824CA2F8);
PPC_FUNC_IMPL(__imp__sub_824CA2F8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824ca334
	if (!ctx.cr6.eq) goto loc_824CA334;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7532
	ctx.r5.s64 = ctx.r10.s64 + -7532;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// bl 0x824c50c0
	ctx.lr = 0x824CA334;
	sub_824C50C0(ctx, base);
loc_824CA334:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_824CA34C"))) PPC_WEAK_FUNC(sub_824CA34C);
PPC_FUNC_IMPL(__imp__sub_824CA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CA350"))) PPC_WEAK_FUNC(sub_824CA350);
PPC_FUNC_IMPL(__imp__sub_824CA350) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824CA37C;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824ca3a8
	if (!ctx.cr0.eq) goto loc_824CA3A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA3A8;
	sub_824C50C0(ctx, base);
loc_824CA3A8:
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

__attribute__((alias("__imp__sub_824CA3C0"))) PPC_WEAK_FUNC(sub_824CA3C0);
PPC_FUNC_IMPL(__imp__sub_824CA3C0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824CA3EC;
	sub_8257AD50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824ca418
	if (!ctx.cr0.eq) goto loc_824CA418;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-7768
	ctx.r6.s64 = ctx.r11.s64 + -7768;
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA418;
	sub_824C50C0(ctx, base);
loc_824CA418:
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

__attribute__((alias("__imp__sub_824CA430"))) PPC_WEAK_FUNC(sub_824CA430);
PPC_FUNC_IMPL(__imp__sub_824CA430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824CA438;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-7768
	ctx.r26.s64 = ctx.r10.s64 + -7768;
	// bne cr6,0x824ca480
	if (!ctx.cr6.eq) goto loc_824CA480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7480
	ctx.r5.s64 = ctx.r11.s64 + -7480;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA480;
	sub_824C50C0(ctx, base);
loc_824CA480:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824ca4a4
	if (!ctx.cr6.eq) goto loc_824CA4A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7492
	ctx.r5.s64 = ctx.r11.s64 + -7492;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA4A4;
	sub_824C50C0(ctx, base);
loc_824CA4A4:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x824CA4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824ca4d8
	if (!ctx.cr0.eq) goto loc_824CA4D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7504
	ctx.r5.s64 = ctx.r11.s64 + -7504;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA4D8;
	sub_824C50C0(ctx, base);
loc_824CA4D8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257ad50
	ctx.lr = 0x824CA4FC;
	sub_8257AD50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824ca520
	if (!ctx.cr0.eq) goto loc_824CA520;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7340
	ctx.r5.s64 = ctx.r11.s64 + -7340;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA520;
	sub_824C50C0(ctx, base);
loc_824CA520:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c9a18
	ctx.lr = 0x824CA52C;
	sub_824C9A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA540"))) PPC_WEAK_FUNC(sub_824CA540);
PPC_FUNC_IMPL(__imp__sub_824CA540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x824CA548;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r27,r10,-6952
	ctx.r27.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824ca5a0
	if (!ctx.cr6.eq) goto loc_824CA5A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7480
	ctx.r5.s64 = ctx.r11.s64 + -7480;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA5A0;
	sub_824C50C0(ctx, base);
loc_824CA5A0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x824ca5c4
	if (!ctx.cr6.eq) goto loc_824CA5C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7492
	ctx.r5.s64 = ctx.r11.s64 + -7492;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA5C4;
	sub_824C50C0(ctx, base);
loc_824CA5C4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x824ca5e8
	if (!ctx.cr6.eq) goto loc_824CA5E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6964
	ctx.r5.s64 = ctx.r11.s64 + -6964;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA5E8;
	sub_824C50C0(ctx, base);
loc_824CA5E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x824ca60c
	if (!ctx.cr6.eq) goto loc_824CA60C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6980
	ctx.r5.s64 = ctx.r11.s64 + -6980;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA60C;
	sub_824C50C0(ctx, base);
loc_824CA60C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x824ca630
	if (!ctx.cr6.eq) goto loc_824CA630;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6996
	ctx.r5.s64 = ctx.r11.s64 + -6996;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA630;
	sub_824C50C0(ctx, base);
loc_824CA630:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824ca654
	if (!ctx.cr6.eq) goto loc_824CA654;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7012
	ctx.r5.s64 = ctx.r11.s64 + -7012;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA654;
	sub_824C50C0(ctx, base);
loc_824CA654:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x824CA664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824ca690
	if (!ctx.cr0.eq) goto loc_824CA690;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7056
	ctx.r5.s64 = ctx.r11.s64 + -7056;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA688;
	sub_824C50C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ca710
	goto loc_824CA710;
loc_824CA690:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8257b520
	ctx.lr = 0x824CA6D8;
	sub_8257B520(ctx, base);
	// stw r3,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257b520
	ctx.lr = 0x824CA6E4;
	sub_8257B520(ctx, base);
	// stw r3,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257b520
	ctx.lr = 0x824CA6F0;
	sub_8257B520(ctx, base);
	// stw r3,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8257b090
	ctx.lr = 0x824CA6FC;
	sub_8257B090(ctx, base);
	// stw r3,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257b2e0
	ctx.lr = 0x824CA708;
	sub_8257B2E0(ctx, base);
	// stw r3,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824CA710:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA718"))) PPC_WEAK_FUNC(sub_824CA718);
PPC_FUNC_IMPL(__imp__sub_824CA718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824CA720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824ca75c
	if (!ctx.cr6.eq) goto loc_824CA75C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA75C;
	sub_824C50C0(ctx, base);
loc_824CA75C:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x824ca8e0
	if (!ctx.cr0.eq) goto loc_824CA8E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ca790
	if (ctx.cr6.eq) goto loc_824CA790;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6856
	ctx.r5.s64 = ctx.r11.s64 + -6856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,241
	ctx.r7.s64 = 241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA790;
	sub_824C50C0(ctx, base);
loc_824CA790:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8257b378
	ctx.lr = 0x824CA79C;
	sub_8257B378(ctx, base);
	// b 0x824ca7c4
	goto loc_824CA7C4;
loc_824CA7A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2f8
	ctx.lr = 0x824CA7A8;
	sub_824CA2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2c0
	ctx.lr = 0x824CA7C4;
	sub_824CA2C0(ctx, base);
loc_824CA7C4:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x824c9ff0
	ctx.lr = 0x824CA7CC;
	sub_824C9FF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824ca7a0
	if (!ctx.cr0.eq) goto loc_824CA7A0;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8257b5b8
	ctx.lr = 0x824CA7E0;
	sub_8257B5B8(ctx, base);
	// b 0x824ca808
	goto loc_824CA808;
loc_824CA7E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2f8
	ctx.lr = 0x824CA7EC;
	sub_824CA2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2c0
	ctx.lr = 0x824CA808;
	sub_824CA2C0(ctx, base);
loc_824CA808:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x824c9ff0
	ctx.lr = 0x824CA810;
	sub_824C9FF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824ca7e4
	if (!ctx.cr0.eq) goto loc_824CA7E4;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8257b5b8
	ctx.lr = 0x824CA824;
	sub_8257B5B8(ctx, base);
	// b 0x824ca84c
	goto loc_824CA84C;
loc_824CA828:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2f8
	ctx.lr = 0x824CA830;
	sub_824CA2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca2c0
	ctx.lr = 0x824CA84C;
	sub_824CA2C0(ctx, base);
loc_824CA84C:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x824c9ff0
	ctx.lr = 0x824CA854;
	sub_824C9FF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824ca828
	if (!ctx.cr0.eq) goto loc_824CA828;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8257b5b8
	ctx.lr = 0x824CA868;
	sub_8257B5B8(ctx, base);
	// b 0x824ca87c
	goto loc_824CA87C;
loc_824CA86C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA87C:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x824c9450
	ctx.lr = 0x824CA884;
	sub_824C9450(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824ca86c
	if (!ctx.cr0.eq) goto loc_824CA86C;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257b138
	ctx.lr = 0x824CA898;
	sub_8257B138(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x824cc070
	ctx.lr = 0x824CA8A0;
	sub_824CC070(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ca8b0
	if (ctx.cr6.eq) goto loc_824CA8B0;
	// bl 0x824cbcf8
	ctx.lr = 0x824CA8B0;
	sub_824CBCF8(ctx, base);
loc_824CA8B0:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ca8cc
	if (ctx.cr6.eq) goto loc_824CA8CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA8CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CA8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA8E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CA8E8"))) PPC_WEAK_FUNC(sub_824CA8E8);
PPC_FUNC_IMPL(__imp__sub_824CA8E8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824ca924
	if (!ctx.cr6.eq) goto loc_824CA924;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,314
	ctx.r7.s64 = 314;
	// bl 0x824c50c0
	ctx.lr = 0x824CA924;
	sub_824C50C0(ctx, base);
loc_824CA924:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824CA944"))) PPC_WEAK_FUNC(sub_824CA944);
PPC_FUNC_IMPL(__imp__sub_824CA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CA948"))) PPC_WEAK_FUNC(sub_824CA948);
PPC_FUNC_IMPL(__imp__sub_824CA948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CA950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-6952
	ctx.r28.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824ca990
	if (!ctx.cr6.eq) goto loc_824CA990;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA990;
	sub_824C50C0(ctx, base);
loc_824CA990:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x824ca9b8
	if (!ctx.cr6.eq) goto loc_824CA9B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x824ca9e0
	goto loc_824CA9E0;
loc_824CA9B8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x824ca9dc
	if (ctx.cr6.eq) goto loc_824CA9DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-6836
	ctx.r5.s64 = ctx.r11.s64 + -6836;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CA9DC;
	sub_824C50C0(ctx, base);
loc_824CA9DC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824CA9E0:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8257bb80
	ctx.lr = 0x824CA9F8;
	sub_8257BB80(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CAA04"))) PPC_WEAK_FUNC(sub_824CAA04);
PPC_FUNC_IMPL(__imp__sub_824CAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CAA08"))) PPC_WEAK_FUNC(sub_824CAA08);
PPC_FUNC_IMPL(__imp__sub_824CAA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824caa24
	if (ctx.cr6.eq) goto loc_824CAA24;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_824CAA24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CAA2C"))) PPC_WEAK_FUNC(sub_824CAA2C);
PPC_FUNC_IMPL(__imp__sub_824CAA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CAA30"))) PPC_WEAK_FUNC(sub_824CAA30);
PPC_FUNC_IMPL(__imp__sub_824CAA30) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824caa7c
	if (ctx.cr6.lt) goto loc_824CAA7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-22008
	ctx.r6.s64 = ctx.r11.s64 + -22008;
	// addi r5,r10,-22080
	ctx.r5.s64 = ctx.r10.s64 + -22080;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,309
	ctx.r7.s64 = 309;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAA7C;
	sub_824C50C0(ctx, base);
loc_824CAA7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824CAAA0"))) PPC_WEAK_FUNC(sub_824CAAA0);
PPC_FUNC_IMPL(__imp__sub_824CAAA0) {
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
	// bne cr6,0x824caae4
	if (!ctx.cr6.eq) goto loc_824CAAE4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,452
	ctx.r7.s64 = 452;
	// bl 0x824c50c0
	ctx.lr = 0x824CAAE4;
	sub_824C50C0(ctx, base);
loc_824CAAE4:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_824CAB00"))) PPC_WEAK_FUNC(sub_824CAB00);
PPC_FUNC_IMPL(__imp__sub_824CAB00) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cab3c
	if (!ctx.cr6.eq) goto loc_824CAB3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,472
	ctx.r7.s64 = 472;
	// bl 0x824c50c0
	ctx.lr = 0x824CAB3C;
	sub_824C50C0(ctx, base);
loc_824CAB3C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_824CAB54"))) PPC_WEAK_FUNC(sub_824CAB54);
PPC_FUNC_IMPL(__imp__sub_824CAB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CAB58"))) PPC_WEAK_FUNC(sub_824CAB58);
PPC_FUNC_IMPL(__imp__sub_824CAB58) {
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
	// bne cr6,0x824cab9c
	if (!ctx.cr6.eq) goto loc_824CAB9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,498
	ctx.r7.s64 = 498;
	// bl 0x824c50c0
	ctx.lr = 0x824CAB9C;
	sub_824C50C0(ctx, base);
loc_824CAB9C:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_824CABB8"))) PPC_WEAK_FUNC(sub_824CABB8);
PPC_FUNC_IMPL(__imp__sub_824CABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824CABC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-6952
	ctx.r28.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cac08
	if (!ctx.cr6.eq) goto loc_824CAC08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,550
	ctx.r7.s64 = 550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAC08;
	sub_824C50C0(ctx, base);
loc_824CAC08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CAC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x824cac4c
	if (!ctx.cr0.eq) goto loc_824CAC4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-6720
	ctx.r5.s64 = ctx.r11.s64 + -6720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAC44;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824cacd8
	goto loc_824CACD8;
loc_824CAC4C:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824cac94
	if (ctx.cr0.eq) goto loc_824CAC94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-6764
	ctx.r5.s64 = ctx.r11.s64 + -6764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAC94;
	sub_824C50C0(ctx, base);
loc_824CAC94:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x824cacc0
	if (ctx.cr6.lt) goto loc_824CACC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-6804
	ctx.r5.s64 = ctx.r11.s64 + -6804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CACC0;
	sub_824C50C0(ctx, base);
loc_824CACC0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x824CACD4;
	sub_82219130(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CACD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CACE0"))) PPC_WEAK_FUNC(sub_824CACE0);
PPC_FUNC_IMPL(__imp__sub_824CACE0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cad1c
	if (!ctx.cr6.eq) goto loc_824CAD1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,591
	ctx.r7.s64 = 591;
	// bl 0x824c50c0
	ctx.lr = 0x824CAD1C;
	sub_824C50C0(ctx, base);
loc_824CAD1C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_824CAD34"))) PPC_WEAK_FUNC(sub_824CAD34);
PPC_FUNC_IMPL(__imp__sub_824CAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CAD38"))) PPC_WEAK_FUNC(sub_824CAD38);
PPC_FUNC_IMPL(__imp__sub_824CAD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CAD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r27,r10,-22008
	ctx.r27.s64 = ctx.r10.s64 + -22008;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824cad88
	if (ctx.cr6.lt) goto loc_824CAD88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-21856
	ctx.r5.s64 = ctx.r11.s64 + -21856;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAD88;
	sub_824C50C0(ctx, base);
loc_824CAD88:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824cadbc
	if (ctx.cr6.lt) goto loc_824CADBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-21928
	ctx.r5.s64 = ctx.r11.s64 + -21928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CADBC;
	sub_824C50C0(ctx, base);
loc_824CADBC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824caa30
	ctx.lr = 0x824CADDC;
	sub_824CAA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CADE4"))) PPC_WEAK_FUNC(sub_824CADE4);
PPC_FUNC_IMPL(__imp__sub_824CADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CADE8"))) PPC_WEAK_FUNC(sub_824CADE8);
PPC_FUNC_IMPL(__imp__sub_824CADE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CADF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cae34
	if (!ctx.cr6.eq) goto loc_824CAE34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,919
	ctx.r7.s64 = 919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAE34;
	sub_824C50C0(ctx, base);
loc_824CAE34:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x824cae58
	if (ctx.cr6.lt) goto loc_824CAE58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6524
	ctx.r5.s64 = ctx.r11.s64 + -6524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,920
	ctx.r7.s64 = 920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAE58;
	sub_824C50C0(ctx, base);
loc_824CAE58:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x824cae7c
	if (!ctx.cr6.eq) goto loc_824CAE7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6492
	ctx.r5.s64 = ctx.r11.s64 + -6492;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,921
	ctx.r7.s64 = 921;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAE7C;
	sub_824C50C0(ctx, base);
loc_824CAE7C:
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x824CAE94;
	sub_82219130(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CAEA0"))) PPC_WEAK_FUNC(sub_824CAEA0);
PPC_FUNC_IMPL(__imp__sub_824CAEA0) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824caedc
	if (!ctx.cr6.eq) goto loc_824CAEDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,997
	ctx.r7.s64 = 997;
	// bl 0x824c50c0
	ctx.lr = 0x824CAEDC;
	sub_824C50C0(ctx, base);
loc_824CAEDC:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_824CAEF4"))) PPC_WEAK_FUNC(sub_824CAEF4);
PPC_FUNC_IMPL(__imp__sub_824CAEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CAEF8"))) PPC_WEAK_FUNC(sub_824CAEF8);
PPC_FUNC_IMPL(__imp__sub_824CAEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CAF00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824caf44
	if (!ctx.cr6.eq) goto loc_824CAF44;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAF44;
	sub_824C50C0(ctx, base);
loc_824CAF44:
	// cmpwi cr6,r28,1966
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1966, ctx.xer);
	// bge cr6,0x824caf68
	if (!ctx.cr6.lt) goto loc_824CAF68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6304
	ctx.r5.s64 = ctx.r11.s64 + -6304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAF68;
	sub_824C50C0(ctx, base);
loc_824CAF68:
	// cmpwi cr6,r28,2086
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2086, ctx.xer);
	// blt cr6,0x824caf8c
	if (ctx.cr6.lt) goto loc_824CAF8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6332
	ctx.r5.s64 = ctx.r11.s64 + -6332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAF8C;
	sub_824C50C0(ctx, base);
loc_824CAF8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CAFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824cafcc
	if (!ctx.cr0.eq) goto loc_824CAFCC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6392
	ctx.r5.s64 = ctx.r11.s64 + -6392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CAFC4;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824cafe0
	goto loc_824CAFE0;
loc_824CAFCC:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x824c9ec0
	ctx.lr = 0x824CAFDC;
	sub_824C9EC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CAFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CAFE8"))) PPC_WEAK_FUNC(sub_824CAFE8);
PPC_FUNC_IMPL(__imp__sub_824CAFE8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb024
	if (!ctx.cr6.eq) goto loc_824CB024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// bl 0x824c50c0
	ctx.lr = 0x824CB024;
	sub_824C50C0(ctx, base);
loc_824CB024:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_824CB03C"))) PPC_WEAK_FUNC(sub_824CB03C);
PPC_FUNC_IMPL(__imp__sub_824CB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CB040"))) PPC_WEAK_FUNC(sub_824CB040);
PPC_FUNC_IMPL(__imp__sub_824CB040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824CB048;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb090
	if (!ctx.cr6.eq) goto loc_824CB090;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB090;
	sub_824C50C0(ctx, base);
loc_824CB090:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CB0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824cb0d0
	if (!ctx.cr0.eq) goto loc_824CB0D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6280
	ctx.r5.s64 = ctx.r11.s64 + -6280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB0C8;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824cb0f0
	goto loc_824CB0F0;
loc_824CB0D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x824c9ec0
	ctx.lr = 0x824CB0EC;
	sub_824C9EC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CB0F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB0F8"))) PPC_WEAK_FUNC(sub_824CB0F8);
PPC_FUNC_IMPL(__imp__sub_824CB0F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824cb13c
	if (ctx.cr6.eq) goto loc_824CB13C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6176
	ctx.r6.s64 = ctx.r11.s64 + -6176;
	// addi r5,r10,-6212
	ctx.r5.s64 = ctx.r10.s64 + -6212;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,268
	ctx.r7.s64 = 268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB134;
	sub_824C50C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824cb140
	goto loc_824CB140;
loc_824CB13C:
	// li r3,32
	ctx.r3.s64 = 32;
loc_824CB140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CB150"))) PPC_WEAK_FUNC(sub_824CB150);
PPC_FUNC_IMPL(__imp__sub_824CB150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824CB158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb1a0
	if (!ctx.cr6.eq) goto loc_824CB1A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB1A0;
	sub_824C50C0(ctx, base);
loc_824CB1A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CB1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824cb1e0
	if (!ctx.cr0.eq) goto loc_824CB1E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6280
	ctx.r5.s64 = ctx.r11.s64 + -6280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB1D8;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824cb200
	goto loc_824CB200;
loc_824CB1E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x824c9ec0
	ctx.lr = 0x824CB1FC;
	sub_824C9EC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CB200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB208"))) PPC_WEAK_FUNC(sub_824CB208);
PPC_FUNC_IMPL(__imp__sub_824CB208) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb244
	if (!ctx.cr6.eq) goto loc_824CB244;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1327
	ctx.r7.s64 = 1327;
	// bl 0x824c50c0
	ctx.lr = 0x824CB244;
	sub_824C50C0(ctx, base);
loc_824CB244:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
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

__attribute__((alias("__imp__sub_824CB25C"))) PPC_WEAK_FUNC(sub_824CB25C);
PPC_FUNC_IMPL(__imp__sub_824CB25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CB260"))) PPC_WEAK_FUNC(sub_824CB260);
PPC_FUNC_IMPL(__imp__sub_824CB260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824CB268;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-6952
	ctx.r26.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb2ac
	if (!ctx.cr6.eq) goto loc_824CB2AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB2AC;
	sub_824C50C0(ctx, base);
loc_824CB2AC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824cb2d0
	if (!ctx.cr6.eq) goto loc_824CB2D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7864
	ctx.r5.s64 = ctx.r11.s64 + -7864;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB2D0;
	sub_824C50C0(ctx, base);
loc_824CB2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cb208
	ctx.lr = 0x824CB2D8;
	sub_824CB208(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x824cb2fc
	if (!ctx.cr0.eq) goto loc_824CB2FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-6072
	ctx.r5.s64 = ctx.r11.s64 + -6072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB2FC;
	sub_824C50C0(ctx, base);
loc_824CB2FC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824c9f50
	ctx.lr = 0x824CB304;
	sub_824C9F50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x824cb3cc
	if (ctx.cr0.eq) goto loc_824CB3CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-6084
	ctx.r25.s64 = ctx.r11.s64 + -6084;
loc_824CB314:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ca2f8
	ctx.lr = 0x824CB31C;
	sub_824CA2F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824cb33c
	if (!ctx.cr0.eq) goto loc_824CB33C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB33C;
	sub_824C50C0(ctx, base);
loc_824CB33C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824cb38c
	if (ctx.cr6.lt) goto loc_824CB38C;
	// beq cr6,0x824cb378
	if (ctx.cr6.eq) goto loc_824CB378;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x824cb3b0
	if (!ctx.cr6.lt) goto loc_824CB3B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824cad38
	ctx.lr = 0x824CB364;
	sub_824CAD38(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_824CB368:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824cb3d8
	if (!ctx.cr6.eq) goto loc_824CB3D8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x824cb3b8
	goto loc_824CB3B8;
loc_824CB378:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824caa30
	ctx.lr = 0x824CB384;
	sub_824CAA30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x824cb368
	goto loc_824CB368;
loc_824CB38C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8257c508
	ctx.lr = 0x824CB3A0;
	sub_8257C508(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824cb3b0
	if (ctx.cr6.eq) goto loc_824CB3B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_824CB3B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824cb3d8
	if (ctx.cr6.eq) goto loc_824CB3D8;
loc_824CB3B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824ca250
	ctx.lr = 0x824CB3C4;
	sub_824CA250(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x824cb314
	if (!ctx.cr0.eq) goto loc_824CB314;
loc_824CB3CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824CB3D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_824CB3D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824cb3d0
	goto loc_824CB3D0;
}

__attribute__((alias("__imp__sub_824CB3E0"))) PPC_WEAK_FUNC(sub_824CB3E0);
PPC_FUNC_IMPL(__imp__sub_824CB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824CB3E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb434
	if (!ctx.cr6.eq) goto loc_824CB434;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB434;
	sub_824C50C0(ctx, base);
loc_824CB434:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cb45c
	if (!ctx.cr6.eq) goto loc_824CB45C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6056
	ctx.r5.s64 = ctx.r11.s64 + -6056;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB45C;
	sub_824C50C0(ctx, base);
loc_824CB45C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8257bcd8
	ctx.lr = 0x824CB474;
	sub_8257BCD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB47C"))) PPC_WEAK_FUNC(sub_824CB47C);
PPC_FUNC_IMPL(__imp__sub_824CB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CB480"))) PPC_WEAK_FUNC(sub_824CB480);
PPC_FUNC_IMPL(__imp__sub_824CB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x824CB488;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-22348
	ctx.r29.s64 = ctx.r11.s64 + -22348;
	// addi r28,r10,-6952
	ctx.r28.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb4d8
	if (!ctx.cr6.eq) goto loc_824CB4D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB4D8;
	sub_824C50C0(ctx, base);
loc_824CB4D8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cb500
	if (!ctx.cr6.eq) goto loc_824CB500;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-6056
	ctx.r5.s64 = ctx.r11.s64 + -6056;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB500;
	sub_824C50C0(ctx, base);
loc_824CB500:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x824cb524
	if (!ctx.cr6.eq) goto loc_824CB524;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-7864
	ctx.r5.s64 = ctx.r11.s64 + -7864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB524;
	sub_824C50C0(ctx, base);
loc_824CB524:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8257c3d0
	ctx.lr = 0x824CB540;
	sub_8257C3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x824cb554
	if (ctx.cr6.eq) goto loc_824CB554;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x824cb58c
	if (!ctx.cr6.eq) goto loc_824CB58C;
loc_824CB554:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x824cb58c
	if (!ctx.cr6.eq) goto loc_824CB58C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cb58c
	if (!ctx.cr6.eq) goto loc_824CB58C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824cad38
	ctx.lr = 0x824CB578;
	sub_824CAD38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cb150
	ctx.lr = 0x824CB58C;
	sub_824CB150(ctx, base);
loc_824CB58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB598"))) PPC_WEAK_FUNC(sub_824CB598);
PPC_FUNC_IMPL(__imp__sub_824CB598) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb5d4
	if (!ctx.cr6.eq) goto loc_824CB5D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1795
	ctx.r7.s64 = 1795;
	// bl 0x824c50c0
	ctx.lr = 0x824CB5D4;
	sub_824C50C0(ctx, base);
loc_824CB5D4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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

__attribute__((alias("__imp__sub_824CB5EC"))) PPC_WEAK_FUNC(sub_824CB5EC);
PPC_FUNC_IMPL(__imp__sub_824CB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CB5F0"))) PPC_WEAK_FUNC(sub_824CB5F0);
PPC_FUNC_IMPL(__imp__sub_824CB5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824CB5F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb638
	if (!ctx.cr6.eq) goto loc_824CB638;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// bl 0x824c50c0
	ctx.lr = 0x824CB638;
	sub_824C50C0(ctx, base);
loc_824CB638:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824cbd58
	ctx.lr = 0x824CB64C;
	sub_824CBD58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB658"))) PPC_WEAK_FUNC(sub_824CB658);
PPC_FUNC_IMPL(__imp__sub_824CB658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CB660;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb6a0
	if (!ctx.cr6.eq) goto loc_824CB6A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1870
	ctx.r7.s64 = 1870;
	// bl 0x824c50c0
	ctx.lr = 0x824CB6A0;
	sub_824C50C0(ctx, base);
loc_824CB6A0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824cbdc0
	ctx.lr = 0x824CB6B8;
	sub_824CBDC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB6C0"))) PPC_WEAK_FUNC(sub_824CB6C0);
PPC_FUNC_IMPL(__imp__sub_824CB6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824CB6C8;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb700
	if (!ctx.cr6.eq) goto loc_824CB700;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1903
	ctx.r7.s64 = 1903;
	// bl 0x824c50c0
	ctx.lr = 0x824CB700;
	sub_824C50C0(ctx, base);
loc_824CB700:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824cbe48
	ctx.lr = 0x824CB710;
	sub_824CBE48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB718"))) PPC_WEAK_FUNC(sub_824CB718);
PPC_FUNC_IMPL(__imp__sub_824CB718) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824cb754
	if (!ctx.cr6.eq) goto loc_824CB754;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-6952
	ctx.r6.s64 = ctx.r11.s64 + -6952;
	// addi r5,r10,-7888
	ctx.r5.s64 = ctx.r10.s64 + -7888;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,1962
	ctx.r7.s64 = 1962;
	// bl 0x824c50c0
	ctx.lr = 0x824CB754;
	sub_824C50C0(ctx, base);
loc_824CB754:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_824CB76C"))) PPC_WEAK_FUNC(sub_824CB76C);
PPC_FUNC_IMPL(__imp__sub_824CB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CB770"))) PPC_WEAK_FUNC(sub_824CB770);
PPC_FUNC_IMPL(__imp__sub_824CB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824CB778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-22348
	ctx.r30.s64 = ctx.r11.s64 + -22348;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb7b4
	if (!ctx.cr6.eq) goto loc_824CB7B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB7B4;
	sub_824C50C0(ctx, base);
loc_824CB7B4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cb7dc
	if (!ctx.cr6.eq) goto loc_824CB7DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6044
	ctx.r5.s64 = ctx.r11.s64 + -6044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB7DC;
	sub_824C50C0(ctx, base);
loc_824CB7DC:
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x824cbe70
	ctx.lr = 0x824CB7E8;
	sub_824CBE70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CB7F8"))) PPC_WEAK_FUNC(sub_824CB7F8);
PPC_FUNC_IMPL(__imp__sub_824CB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x824CB800;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r21,r11,-22348
	ctx.r21.s64 = ctx.r11.s64 + -22348;
	// addi r20,r10,-6952
	ctx.r20.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cb85c
	if (!ctx.cr6.eq) goto loc_824CB85C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,657
	ctx.r7.s64 = 657;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB85C;
	sub_824C50C0(ctx, base);
loc_824CB85C:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x824cb880
	if (ctx.cr6.lt) goto loc_824CB880;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6524
	ctx.r5.s64 = ctx.r11.s64 + -6524;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,658
	ctx.r7.s64 = 658;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB880;
	sub_824C50C0(ctx, base);
loc_824CB880:
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r27,112
	ctx.r11.s64 = ctx.r27.s64 + 112;
	// subf r7,r10,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r10.s64;
	// stw r19,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r19.u32);
	// subf r6,r10,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r31,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r31.u32);
	// li r8,4
	ctx.r8.s64 = 4;
loc_824CB8B0:
	// stw r26,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824cb8c8
	if (ctx.cr6.eq) goto loc_824CB8C8;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x824cb8cc
	goto loc_824CB8CC;
loc_824CB8C8:
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_824CB8CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824cb8dc
	if (ctx.cr6.eq) goto loc_824CB8DC;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x824cb8e0
	goto loc_824CB8E0;
loc_824CB8DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824CB8E0:
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824cb8f8
	if (ctx.cr6.eq) goto loc_824CB8F8;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// b 0x824cb8fc
	goto loc_824CB8FC;
loc_824CB8F8:
	// stw r19,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r19.u32);
loc_824CB8FC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824cb8b0
	if (!ctx.cr0.eq) goto loc_824CB8B0;
	// mulli r10,r29,37
	ctx.r10.s64 = ctx.r29.s64 * 37;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
loc_824CB924:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwx r24,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r24.u32);
	// stwx r22,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r22.u32);
	// stwx r11,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r11.u32);
	// blt cr6,0x824cb984
	if (ctx.cr6.lt) goto loc_824CB984;
	// beq cr6,0x824cb97c
	if (ctx.cr6.eq) goto loc_824CB97C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824cb974
	if (ctx.cr6.lt) goto loc_824CB974;
	// beq cr6,0x824cb96c
	if (ctx.cr6.eq) goto loc_824CB96C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x824cb9a4
	if (ctx.cr6.lt) goto loc_824CB9A4;
	// b 0x824cb988
	goto loc_824CB988;
loc_824CB96C:
	// clrlwi r25,r23,24
	ctx.r25.u64 = ctx.r23.u32 & 0xFF;
	// b 0x824cb988
	goto loc_824CB988;
loc_824CB974:
	// rlwinm r25,r23,24,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 24) & 0xFF;
	// b 0x824cb988
	goto loc_824CB988;
loc_824CB97C:
	// rlwinm r25,r23,16,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFF;
	// b 0x824cb988
	goto loc_824CB988;
loc_824CB984:
	// rlwinm r25,r23,8,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFF;
loc_824CB988:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x824cb998
	if (!ctx.cr6.eq) goto loc_824CB998;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// b 0x824cb9a8
	goto loc_824CB9A8;
loc_824CB998:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r25,2
	ctx.r25.s64 = 2;
	// beq cr6,0x824cb9a8
	if (ctx.cr6.eq) goto loc_824CB9A8;
loc_824CB9A4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_824CB9A8:
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stwx r25,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r25.u32);
	// blt cr6,0x824cb924
	if (ctx.cr6.lt) goto loc_824CB924;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x824cba84
	if (ctx.cr6.eq) goto loc_824CBA84;
	// ble cr6,0x824cba2c
	if (!ctx.cr6.gt) goto loc_824CBA2C;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bgt cr6,0x824cba2c
	if (ctx.cr6.gt) goto loc_824CBA2C;
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cb9fc
	if (ctx.cr6.eq) goto loc_824CB9FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6580
	ctx.r5.s64 = ctx.r11.s64 + -6580;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,742
	ctx.r7.s64 = 742;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CB9FC;
	sub_824C50C0(ctx, base);
loc_824CB9FC:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cba24
	if (ctx.cr6.eq) goto loc_824CBA24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6632
	ctx.r5.s64 = ctx.r11.s64 + -6632;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,743
	ctx.r7.s64 = 743;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBA24;
	sub_824C50C0(ctx, base);
loc_824CBA24:
	// stw r19,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r19.u32);
	// b 0x824cbad8
	goto loc_824CBAD8;
loc_824CBA2C:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cba54
	if (ctx.cr6.eq) goto loc_824CBA54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6684
	ctx.r5.s64 = ctx.r11.s64 + -6684;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,758
	ctx.r7.s64 = 758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBA54;
	sub_824C50C0(ctx, base);
loc_824CBA54:
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cba7c
	if (ctx.cr6.eq) goto loc_824CBA7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6580
	ctx.r5.s64 = ctx.r11.s64 + -6580;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBA7C;
	sub_824C50C0(ctx, base);
loc_824CBA7C:
	// stw r19,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r19.u32);
	// b 0x824cbad8
	goto loc_824CBAD8;
loc_824CBA84:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cbaac
	if (ctx.cr6.eq) goto loc_824CBAAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6684
	ctx.r5.s64 = ctx.r11.s64 + -6684;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,750
	ctx.r7.s64 = 750;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBAAC;
	sub_824C50C0(ctx, base);
loc_824CBAAC:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cbad4
	if (ctx.cr6.eq) goto loc_824CBAD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-6632
	ctx.r5.s64 = ctx.r11.s64 + -6632;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,751
	ctx.r7.s64 = 751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBAD4;
	sub_824C50C0(ctx, base);
loc_824CBAD4:
	// stw r19,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r19.u32);
loc_824CBAD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CBAE0"))) PPC_WEAK_FUNC(sub_824CBAE0);
PPC_FUNC_IMPL(__imp__sub_824CBAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x824CBAE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r27,r10,-6952
	ctx.r27.s64 = ctx.r10.s64 + -6952;
	// bne cr6,0x824cbb28
	if (!ctx.cr6.eq) goto loc_824CBB28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBB28;
	sub_824C50C0(ctx, base);
loc_824CBB28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824cbb4c
	if (!ctx.cr6.eq) goto loc_824CBB4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6404
	ctx.r5.s64 = ctx.r11.s64 + -6404;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,957
	ctx.r7.s64 = 957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBB4C;
	sub_824C50C0(ctx, base);
loc_824CBB4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824cb0f8
	ctx.lr = 0x824CBB54;
	sub_824CB0F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CBB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824cbb94
	if (!ctx.cr0.eq) goto loc_824CBB94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6472
	ctx.r5.s64 = ctx.r11.s64 + -6472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBB8C;
	sub_824C50C0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824cbbbc
	goto loc_824CBBBC;
loc_824CBB94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824cb0f8
	ctx.lr = 0x824CBB9C;
	sub_824CB0F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x824CBBAC;
	sub_82219130(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x824c9ec0
	ctx.lr = 0x824CBBB8;
	sub_824C9EC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CBBBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CBBC4"))) PPC_WEAK_FUNC(sub_824CBBC4);
PPC_FUNC_IMPL(__imp__sub_824CBBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CBBC8"))) PPC_WEAK_FUNC(sub_824CBBC8);
PPC_FUNC_IMPL(__imp__sub_824CBBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824CBBD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r27,r10,-6024
	ctx.r27.s64 = ctx.r10.s64 + -6024;
	// bne cr6,0x824cbc18
	if (!ctx.cr6.eq) goto loc_824CBC18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7480
	ctx.r5.s64 = ctx.r11.s64 + -7480;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,74
	ctx.r7.s64 = 74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBC18;
	sub_824C50C0(ctx, base);
loc_824CBC18:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x824cbc3c
	if (!ctx.cr6.eq) goto loc_824CBC3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7492
	ctx.r5.s64 = ctx.r11.s64 + -7492;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBC3C;
	sub_824C50C0(ctx, base);
loc_824CBC3C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x824cbc60
	if (!ctx.cr6.eq) goto loc_824CBC60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6964
	ctx.r5.s64 = ctx.r11.s64 + -6964;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBC60;
	sub_824C50C0(ctx, base);
loc_824CBC60:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x824CBC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824cbc98
	if (!ctx.cr0.eq) goto loc_824CBC98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-6032
	ctx.r5.s64 = ctx.r11.s64 + -6032;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBC94;
	sub_824C50C0(ctx, base);
	// b 0x824cbce8
	goto loc_824CBCE8;
loc_824CBC98:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_824CBCB0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x824cbcb0
	if (ctx.cr6.lt) goto loc_824CBCB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,1168
	ctx.r10.s64 = ctx.r31.s64 + 1168;
loc_824CBCD0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x824cbcd0
	if (ctx.cr6.lt) goto loc_824CBCD0;
loc_824CBCE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CBCF4"))) PPC_WEAK_FUNC(sub_824CBCF4);
PPC_FUNC_IMPL(__imp__sub_824CBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CBCF8"))) PPC_WEAK_FUNC(sub_824CBCF8);
PPC_FUNC_IMPL(__imp__sub_824CBCF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824CBD10"))) PPC_WEAK_FUNC(sub_824CBD10);
PPC_FUNC_IMPL(__imp__sub_824CBD10) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_824CBD18:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x824cbd18
	if (!ctx.cr0.eq) goto loc_824CBD18;
	// addi r11,r3,1168
	ctx.r11.s64 = ctx.r3.s64 + 1168;
	// li r10,128
	ctx.r10.s64 = 128;
loc_824CBD38:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x824cbd38
	if (!ctx.cr0.eq) goto loc_824CBD38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CBD54"))) PPC_WEAK_FUNC(sub_824CBD54);
PPC_FUNC_IMPL(__imp__sub_824CBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CBD58"))) PPC_WEAK_FUNC(sub_824CBD58);
PPC_FUNC_IMPL(__imp__sub_824CBD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r7,20,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF00000;
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r6,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// slw r6,r4,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwimi r9,r8,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CBDC0"))) PPC_WEAK_FUNC(sub_824CBDC0);
PPC_FUNC_IMPL(__imp__sub_824CBDC0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mulli r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 * 36;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// slw r31,r8,r5
	ctx.r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// slw r3,r3,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// rlwinm r31,r31,20,8,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xF00000;
	// slw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rlwinm r3,r3,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
	// rlwinm r4,r4,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwimi r4,r31,0,20,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r4.u64 & 0xFF000);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CBE48"))) PPC_WEAK_FUNC(sub_824CBE48);
PPC_FUNC_IMPL(__imp__sub_824CBE48) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// rlwimi r10,r9,13,8,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0xFFF000) | (ctx.r10.u64 & 0xFFFFFFFFFF000FFF);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CBE6C"))) PPC_WEAK_FUNC(sub_824CBE6C);
PPC_FUNC_IMPL(__imp__sub_824CBE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CBE70"))) PPC_WEAK_FUNC(sub_824CBE70);
PPC_FUNC_IMPL(__imp__sub_824CBE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x824CBE78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-6024
	ctx.r26.s64 = ctx.r10.s64 + -6024;
	// bne cr6,0x824cbec8
	if (!ctx.cr6.eq) goto loc_824CBEC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-6032
	ctx.r5.s64 = ctx.r11.s64 + -6032;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,401
	ctx.r7.s64 = 401;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBEC8;
	sub_824C50C0(ctx, base);
loc_824CBEC8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x824cbeec
	if (!ctx.cr6.eq) goto loc_824CBEEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5912
	ctx.r5.s64 = ctx.r11.s64 + -5912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,402
	ctx.r7.s64 = 402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBEEC;
	sub_824C50C0(ctx, base);
loc_824CBEEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824cc064
	if (ctx.cr6.eq) goto loc_824CC064;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x824cc064
	if (ctx.cr6.eq) goto loc_824CC064;
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_824CBF08:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824cbf18
	if (ctx.cr0.eq) goto loc_824CBF18;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_824CBF18:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bne 0x824cbf08
	if (!ctx.cr0.eq) goto loc_824CBF08;
	// addi r25,r31,1168
	ctx.r25.s64 = ctx.r31.s64 + 1168;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_824CBF30:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824cbf40
	if (ctx.cr0.eq) goto loc_824CBF40;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_824CBF40:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x824cbf30
	if (!ctx.cr0.eq) goto loc_824CBF30;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824cbf5c
	if (!ctx.cr6.eq) goto loc_824CBF5C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824cbfa4
	if (ctx.cr6.eq) goto loc_824CBFA4;
loc_824CBF5C:
	// mulli r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 * 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CBF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824cbfb0
	if (!ctx.cr0.eq) goto loc_824CBFB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5920
	ctx.r5.s64 = ctx.r11.s64 + -5920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CBFA0;
	sub_824C50C0(ctx, base);
	// li r23,16
	ctx.r23.s64 = 16;
loc_824CBFA4:
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x824cc068
	goto loc_824CC068;
loc_824CBFB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// beq cr6,0x824cc008
	if (ctx.cr6.eq) goto loc_824CC008;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_824CBFD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824cbffc
	if (ctx.cr0.eq) goto loc_824CBFFC;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82219130
	ctx.lr = 0x824CBFF4;
	sub_82219130(ctx, base);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_824CBFFC:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824cbfd8
	if (!ctx.cr6.eq) goto loc_824CBFD8;
loc_824CC008:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824cbfa4
	if (ctx.cr6.eq) goto loc_824CBFA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x824cbfa4
	if (ctx.cr6.eq) goto loc_824CBFA4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_824CC030:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824cc058
	if (ctx.cr0.eq) goto loc_824CC058;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_824CC058:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x824cc030
	goto loc_824CC030;
loc_824CC064:
	// li r3,25
	ctx.r3.s64 = 25;
loc_824CC068:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CC070"))) PPC_WEAK_FUNC(sub_824CC070);
PPC_FUNC_IMPL(__imp__sub_824CC070) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824CC08C"))) PPC_WEAK_FUNC(sub_824CC08C);
PPC_FUNC_IMPL(__imp__sub_824CC08C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC090"))) PPC_WEAK_FUNC(sub_824CC090);
PPC_FUNC_IMPL(__imp__sub_824CC090) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824cc0b0
	if (ctx.cr6.eq) goto loc_824CC0B0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824cc0a8
	if (ctx.cr6.eq) goto loc_824CC0A8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_824CC0A8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_824CC0B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0B8"))) PPC_WEAK_FUNC(sub_824CC0B8);
PPC_FUNC_IMPL(__imp__sub_824CC0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0C0"))) PPC_WEAK_FUNC(sub_824CC0C0);
PPC_FUNC_IMPL(__imp__sub_824CC0C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0C8"))) PPC_WEAK_FUNC(sub_824CC0C8);
PPC_FUNC_IMPL(__imp__sub_824CC0C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0D0"))) PPC_WEAK_FUNC(sub_824CC0D0);
PPC_FUNC_IMPL(__imp__sub_824CC0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0D8"))) PPC_WEAK_FUNC(sub_824CC0D8);
PPC_FUNC_IMPL(__imp__sub_824CC0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0E0"))) PPC_WEAK_FUNC(sub_824CC0E0);
PPC_FUNC_IMPL(__imp__sub_824CC0E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0E8"))) PPC_WEAK_FUNC(sub_824CC0E8);
PPC_FUNC_IMPL(__imp__sub_824CC0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0F0"))) PPC_WEAK_FUNC(sub_824CC0F0);
PPC_FUNC_IMPL(__imp__sub_824CC0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC0F8"))) PPC_WEAK_FUNC(sub_824CC0F8);
PPC_FUNC_IMPL(__imp__sub_824CC0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC100"))) PPC_WEAK_FUNC(sub_824CC100);
PPC_FUNC_IMPL(__imp__sub_824CC100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC108"))) PPC_WEAK_FUNC(sub_824CC108);
PPC_FUNC_IMPL(__imp__sub_824CC108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC110"))) PPC_WEAK_FUNC(sub_824CC110);
PPC_FUNC_IMPL(__imp__sub_824CC110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC11C"))) PPC_WEAK_FUNC(sub_824CC11C);
PPC_FUNC_IMPL(__imp__sub_824CC11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CC120"))) PPC_WEAK_FUNC(sub_824CC120);
PPC_FUNC_IMPL(__imp__sub_824CC120) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// b 0x824c8a88
	sub_824C8A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CC13C"))) PPC_WEAK_FUNC(sub_824CC13C);
PPC_FUNC_IMPL(__imp__sub_824CC13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CC140"))) PPC_WEAK_FUNC(sub_824CC140);
PPC_FUNC_IMPL(__imp__sub_824CC140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x824CC148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824cc1a4
	if (ctx.cr6.eq) goto loc_824CC1A4;
loc_824CC164:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824cc188
	if (ctx.cr6.gt) goto loc_824CC188;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824c8c08
	ctx.lr = 0x824CC180;
	sub_824C8C08(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x824cc164
	if (!ctx.cr6.eq) goto loc_824CC164;
loc_824CC188:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824cc1a4
	if (ctx.cr6.eq) goto loc_824CC1A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824cc1a4
	if (ctx.cr6.eq) goto loc_824CC1A4;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824cc1c8
	if (!ctx.cr6.gt) goto loc_824CC1C8;
loc_824CC1A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r11,-5792
	ctx.r6.s64 = ctx.r11.s64 + -5792;
	// addi r5,r10,-5852
	ctx.r5.s64 = ctx.r10.s64 + -5852;
	// addi r4,r9,-22348
	ctx.r4.s64 = ctx.r9.s64 + -22348;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC1C8;
	sub_824C50C0(ctx, base);
loc_824CC1C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x824c8cb8
	ctx.lr = 0x824CC1D4;
	sub_824C8CB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CC1DC"))) PPC_WEAK_FUNC(sub_824CC1DC);
PPC_FUNC_IMPL(__imp__sub_824CC1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CC1E0"))) PPC_WEAK_FUNC(sub_824CC1E0);
PPC_FUNC_IMPL(__imp__sub_824CC1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824CC1E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r8,-7884
	ctx.r26.s64 = ctx.r8.s64 + -7884;
	// addi r29,r9,-22348
	ctx.r29.s64 = ctx.r9.s64 + -22348;
	// addi r25,r10,-5704
	ctx.r25.s64 = ctx.r10.s64 + -5704;
	// addi r28,r11,-5792
	ctx.r28.s64 = ctx.r11.s64 + -5792;
loc_824CC214:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x824c8c08
	ctx.lr = 0x824CC220;
	sub_824C8C08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824cc288
	if (ctx.cr0.eq) goto loc_824CC288;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824cc23c
	if (ctx.cr6.eq) goto loc_824CC23C;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824cc254
	if (!ctx.cr6.gt) goto loc_824CC254;
loc_824CC23C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC254;
	sub_824C50C0(ctx, base);
loc_824CC254:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x824c8cb8
	ctx.lr = 0x824CC260;
	sub_824C8CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cce40
	ctx.lr = 0x824CC268;
	sub_824CCE40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cc288
	if (ctx.cr0.eq) goto loc_824CC288;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC288;
	sub_824C50C0(ctx, base);
loc_824CC288:
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824cc214
	if (!ctx.cr6.gt) goto loc_824CC214;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CC2A4"))) PPC_WEAK_FUNC(sub_824CC2A4);
PPC_FUNC_IMPL(__imp__sub_824CC2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CC2A8"))) PPC_WEAK_FUNC(sub_824CC2A8);
PPC_FUNC_IMPL(__imp__sub_824CC2A8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lis r5,-32055
	ctx.r5.s64 = -2100756480;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r10.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// addi r5,r5,17812
	ctx.r5.s64 = ctx.r5.s64 + 17812;
	// stw r9,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r9.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r11.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r11.u32);
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// stw r10,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r10.u32);
	// stw r4,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r4.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// stw r11,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r11.u32);
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r11,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CC330"))) PPC_WEAK_FUNC(sub_824CC330);
PPC_FUNC_IMPL(__imp__sub_824CC330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x824CC338;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x824cc350
	if (ctx.cr6.eq) goto loc_824CC350;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x824cc904
	if (!ctx.cr6.eq) goto loc_824CC904;
loc_824CC350:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824cc904
	if (ctx.cr6.eq) goto loc_824CC904;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824cc904
	if (ctx.cr6.eq) goto loc_824CC904;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824c5390
	ctx.lr = 0x824CC384;
	sub_824C5390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-5792
	ctx.r26.s64 = ctx.r10.s64 + -5792;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc3bc
	if (!ctx.cr6.eq) goto loc_824CC3BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5152
	ctx.r5.s64 = ctx.r11.s64 + -5152;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,291
	ctx.r7.s64 = 291;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC3BC;
	sub_824C50C0(ctx, base);
loc_824CC3BC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cc438
	if (ctx.cr6.eq) goto loc_824CC438;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r11,-2920
	ctx.r11.s64 = ctx.r11.s64 + -2920;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-5288
	ctx.r28.s64 = ctx.r11.s64 + -5288;
loc_824CC3E0:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CC3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824cc42c
	if (ctx.cr6.eq) goto loc_824CC42C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824cc42c
	if (ctx.cr6.eq) goto loc_824CC42C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824cc42c
	if (ctx.cr6.eq) goto loc_824CC42C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC42C;
	sub_824C50C0(ctx, base);
loc_824CC42C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x824cc3e0
	if (!ctx.cr0.eq) goto loc_824CC3E0;
loc_824CC438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x824cc460
	if (ctx.cr6.eq) goto loc_824CC460;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5336
	ctx.r5.s64 = ctx.r11.s64 + -5336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC460;
	sub_824C50C0(ctx, base);
loc_824CC460:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc488
	if (!ctx.cr6.eq) goto loc_824CC488;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5372
	ctx.r5.s64 = ctx.r11.s64 + -5372;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC488;
	sub_824C50C0(ctx, base);
loc_824CC488:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc4b0
	if (!ctx.cr6.eq) goto loc_824CC4B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5404
	ctx.r5.s64 = ctx.r11.s64 + -5404;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,317
	ctx.r7.s64 = 317;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC4B0;
	sub_824C50C0(ctx, base);
loc_824CC4B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824cc904
	if (ctx.cr6.eq) goto loc_824CC904;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824cc904
	if (ctx.cr6.eq) goto loc_824CC904;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,312
	ctx.r4.s64 = 312;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CC4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824cc904
	if (ctx.cr0.eq) goto loc_824CC904;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r10,r30,204
	ctx.r10.s64 = ctx.r30.s64 + 204;
	// addi r6,r11,-1104
	ctx.r6.s64 = ctx.r11.s64 + -1104;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_824CC4F0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824CC500:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x824cc500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CC500;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r6,100
	ctx.r9.s64 = ctx.r6.s64 + 100;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824cc4f0
	if (ctx.cr6.lt) goto loc_824CC4F0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x824CC54C;
	sub_82219130(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257b6b8
	ctx.lr = 0x824CC564;
	sub_8257B6B8(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257b850
	ctx.lr = 0x824CC580;
	sub_8257B850(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257b9e8
	ctx.lr = 0x824CC59C;
	sub_8257B9E8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc5c8
	if (!ctx.cr6.eq) goto loc_824CC5C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5428
	ctx.r5.s64 = ctx.r11.s64 + -5428;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,382
	ctx.r7.s64 = 382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC5C8;
	sub_824C50C0(ctx, base);
loc_824CC5C8:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc5f0
	if (!ctx.cr6.eq) goto loc_824CC5F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5456
	ctx.r5.s64 = ctx.r11.s64 + -5456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC5F0;
	sub_824C50C0(ctx, base);
loc_824CC5F0:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc618
	if (!ctx.cr6.eq) goto loc_824CC618;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5484
	ctx.r5.s64 = ctx.r11.s64 + -5484;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC618;
	sub_824C50C0(ctx, base);
loc_824CC618:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82579510
	ctx.lr = 0x824CC62C;
	sub_82579510(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x824cc2a8
	ctx.lr = 0x824CC638;
	sub_824CC2A8(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824c8848
	ctx.lr = 0x824CC64C;
	sub_824C8848(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x8257dbe0
	ctx.lr = 0x824CC690;
	sub_8257DBE0(ctx, base);
	// stw r3,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-14272
	ctx.r11.s64 = ctx.r11.s64 + -14272;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,304(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// lwz r28,120(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r25,116(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x8257d848
	ctx.lr = 0x824CC6E0;
	sub_8257D848(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824cd5e0
	ctx.lr = 0x824CC6FC;
	sub_824CD5E0(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257a860
	ctx.lr = 0x824CC724;
	sub_8257A860(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257c8b8
	ctx.lr = 0x824CC740;
	sub_8257C8B8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824cdfe8
	ctx.lr = 0x824CC774;
	sub_824CDFE8(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8257a990
	ctx.lr = 0x824CC79C;
	sub_8257A990(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82579048
	ctx.lr = 0x824CC7B8;
	sub_82579048(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc7e4
	if (!ctx.cr6.eq) goto loc_824CC7E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5504
	ctx.r5.s64 = ctx.r11.s64 + -5504;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,487
	ctx.r7.s64 = 487;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC7E4;
	sub_824C50C0(ctx, base);
loc_824CC7E4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc80c
	if (!ctx.cr6.eq) goto loc_824CC80C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5524
	ctx.r5.s64 = ctx.r11.s64 + -5524;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,488
	ctx.r7.s64 = 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC80C;
	sub_824C50C0(ctx, base);
loc_824CC80C:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc834
	if (!ctx.cr6.eq) goto loc_824CC834;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5548
	ctx.r5.s64 = ctx.r11.s64 + -5548;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC834;
	sub_824C50C0(ctx, base);
loc_824CC834:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc85c
	if (!ctx.cr6.eq) goto loc_824CC85C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5572
	ctx.r5.s64 = ctx.r11.s64 + -5572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC85C;
	sub_824C50C0(ctx, base);
loc_824CC85C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc884
	if (!ctx.cr6.eq) goto loc_824CC884;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5596
	ctx.r5.s64 = ctx.r11.s64 + -5596;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC884;
	sub_824C50C0(ctx, base);
loc_824CC884:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc8ac
	if (!ctx.cr6.eq) goto loc_824CC8AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5620
	ctx.r5.s64 = ctx.r11.s64 + -5620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,492
	ctx.r7.s64 = 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC8AC;
	sub_824C50C0(ctx, base);
loc_824CC8AC:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc8d4
	if (!ctx.cr6.eq) goto loc_824CC8D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5644
	ctx.r5.s64 = ctx.r11.s64 + -5644;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC8D4;
	sub_824C50C0(ctx, base);
loc_824CC8D4:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824cc8fc
	if (!ctx.cr6.eq) goto loc_824CC8FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5664
	ctx.r5.s64 = ctx.r11.s64 + -5664;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC8FC;
	sub_824C50C0(ctx, base);
loc_824CC8FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824cc908
	goto loc_824CC908;
loc_824CC904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CC908:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CC910"))) PPC_WEAK_FUNC(sub_824CC910);
PPC_FUNC_IMPL(__imp__sub_824CC910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x824CC918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824ccae8
	if (ctx.cr6.eq) goto loc_824CCAE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824cc1e0
	ctx.lr = 0x824CC930;
	sub_824CC1E0(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x824c8980
	ctx.lr = 0x824CC938;
	sub_824C8980(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x82579160
	ctx.lr = 0x824CC940;
	sub_82579160(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r9,-22348
	ctx.r31.s64 = ctx.r9.s64 + -22348;
	// addi r30,r10,-5112
	ctx.r30.s64 = ctx.r10.s64 + -5112;
	// addi r29,r11,-5792
	ctx.r29.s64 = ctx.r11.s64 + -5792;
	// beq 0x824cc978
	if (ctx.cr0.eq) goto loc_824CC978;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,546
	ctx.r7.s64 = 546;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC978;
	sub_824C50C0(ctx, base);
loc_824CC978:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x8257c5b0
	ctx.lr = 0x824CC980;
	sub_8257C5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cc9a0
	if (ctx.cr0.eq) goto loc_824CC9A0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,549
	ctx.r7.s64 = 549;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC9A0;
	sub_824C50C0(ctx, base);
loc_824CC9A0:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8257ab40
	ctx.lr = 0x824CC9A8;
	sub_8257AB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cc9c8
	if (ctx.cr0.eq) goto loc_824CC9C8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,552
	ctx.r7.s64 = 552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC9C8;
	sub_824C50C0(ctx, base);
loc_824CC9C8:
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x824cd8b0
	ctx.lr = 0x824CC9D0;
	sub_824CD8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cc9f0
	if (ctx.cr0.eq) goto loc_824CC9F0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CC9F0;
	sub_824C50C0(ctx, base);
loc_824CC9F0:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x82579160
	ctx.lr = 0x824CC9F8;
	sub_82579160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cca18
	if (ctx.cr0.eq) goto loc_824CCA18;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCA18;
	sub_824C50C0(ctx, base);
loc_824CCA18:
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x824cd060
	ctx.lr = 0x824CCA20;
	sub_824CD060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cca40
	if (ctx.cr0.eq) goto loc_824CCA40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCA40;
	sub_824C50C0(ctx, base);
loc_824CCA40:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x8257d678
	ctx.lr = 0x824CCA48;
	sub_8257D678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cca68
	if (ctx.cr0.eq) goto loc_824CCA68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCA68;
	sub_824C50C0(ctx, base);
loc_824CCA68:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// bl 0x8257dee8
	ctx.lr = 0x824CCA70;
	sub_8257DEE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824cca90
	if (ctx.cr0.eq) goto loc_824CCA90;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCA90;
	sub_824C50C0(ctx, base);
loc_824CCA90:
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x82579668
	ctx.lr = 0x824CCA98;
	sub_82579668(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x8257afe8
	ctx.lr = 0x824CCAA0;
	sub_8257AFE8(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x8257b238
	ctx.lr = 0x824CCAA8;
	sub_8257B238(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x8257b478
	ctx.lr = 0x824CCAB0;
	sub_8257B478(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CCAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x824ccae4
	if (ctx.cr0.eq) goto loc_824CCAE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCAE4;
	sub_824C50C0(ctx, base);
loc_824CCAE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_824CCAE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CCAF0"))) PPC_WEAK_FUNC(sub_824CCAF0);
PPC_FUNC_IMPL(__imp__sub_824CCAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824CCAF8"))) PPC_WEAK_FUNC(sub_824CCAF8);
PPC_FUNC_IMPL(__imp__sub_824CCAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824CCB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-22348
	ctx.r28.s64 = ctx.r11.s64 + -22348;
	// addi r27,r10,-4920
	ctx.r27.s64 = ctx.r10.s64 + -4920;
	// bne cr6,0x824ccb40
	if (!ctx.cr6.eq) goto loc_824CCB40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-7992
	ctx.r5.s64 = ctx.r11.s64 + -7992;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCB40;
	sub_824C50C0(ctx, base);
loc_824CCB40:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x824ccb64
	if (!ctx.cr6.eq) goto loc_824CCB64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4940
	ctx.r5.s64 = ctx.r11.s64 + -4940;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,133
	ctx.r7.s64 = 133;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCB64;
	sub_824C50C0(ctx, base);
loc_824CCB64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824ccc88
	if (ctx.cr6.eq) goto loc_824CCC88;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824ccc88
	if (ctx.cr6.eq) goto loc_824CCC88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82492d68
	ctx.lr = 0x824CCB7C;
	sub_82492D68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CCB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824ccc88
	if (ctx.cr0.eq) goto loc_824CCC88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ccbd4
	if (!ctx.cr6.eq) goto loc_824CCBD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4976
	ctx.r5.s64 = ctx.r11.s64 + -4976;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCBD4;
	sub_824C50C0(ctx, base);
loc_824CCBD4:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ccbfc
	if (!ctx.cr6.eq) goto loc_824CCBFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5016
	ctx.r5.s64 = ctx.r11.s64 + -5016;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,170
	ctx.r7.s64 = 170;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCBFC;
	sub_824C50C0(ctx, base);
loc_824CCBFC:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ccc24
	if (!ctx.cr6.eq) goto loc_824CCC24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5052
	ctx.r5.s64 = ctx.r11.s64 + -5052;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,171
	ctx.r7.s64 = 171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCC24;
	sub_824C50C0(ctx, base);
loc_824CCC24:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ccc4c
	if (!ctx.cr6.eq) goto loc_824CCC4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5092
	ctx.r5.s64 = ctx.r11.s64 + -5092;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,172
	ctx.r7.s64 = 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCC4C;
	sub_824C50C0(ctx, base);
loc_824CCC4C:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x824CCC5C;
	sub_82219130(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x824c8848
	ctx.lr = 0x824CCC70;
	sub_824C8848(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cc120
	ctx.lr = 0x824CCC80;
	sub_824CC120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824ccc8c
	goto loc_824CCC8C;
loc_824CCC88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824CCC8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CCC94"))) PPC_WEAK_FUNC(sub_824CCC94);
PPC_FUNC_IMPL(__imp__sub_824CCC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CCC98"))) PPC_WEAK_FUNC(sub_824CCC98);
PPC_FUNC_IMPL(__imp__sub_824CCC98) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
	// b 0x824c8a88
	sub_824C8A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CCCB4"))) PPC_WEAK_FUNC(sub_824CCCB4);
PPC_FUNC_IMPL(__imp__sub_824CCCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824CCCB8"))) PPC_WEAK_FUNC(sub_824CCCB8);
PPC_FUNC_IMPL(__imp__sub_824CCCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x824CCCC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// addi r26,r10,-4920
	ctx.r26.s64 = ctx.r10.s64 + -4920;
	// bne cr6,0x824ccd08
	if (!ctx.cr6.eq) goto loc_824CCD08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-7860
	ctx.r5.s64 = ctx.r11.s64 + -7860;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCD08;
	sub_824C50C0(ctx, base);
loc_824CCD08:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824ccd54
	if (ctx.cr6.eq) goto loc_824CCD54;
loc_824CCD10:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824ccd38
	if (ctx.cr6.gt) goto loc_824CCD38;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824c8c08
	ctx.lr = 0x824CCD2C;
	sub_824C8C08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824ccd10
	if (!ctx.cr6.eq) goto loc_824CCD10;
loc_824CCD38:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824ccd54
	if (!ctx.cr6.eq) goto loc_824CCD54;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824ccd54
	if (ctx.cr6.eq) goto loc_824CCD54;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824ccd70
	if (!ctx.cr6.gt) goto loc_824CCD70;
loc_824CCD54:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4832
	ctx.r5.s64 = ctx.r11.s64 + -4832;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824c50c0
	ctx.lr = 0x824CCD70;
	sub_824C50C0(ctx, base);
loc_824CCD70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x824c8cb8
	ctx.lr = 0x824CCD7C;
	sub_824C8CB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824CCD84"))) PPC_WEAK_FUNC(sub_824CCD84);
PPC_FUNC_IMPL(__imp__sub_824CCD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

