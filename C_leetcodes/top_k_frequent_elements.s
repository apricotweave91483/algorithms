	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 2
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	mov	w9, #8144                       ; =0x1fd0
Lloh0:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh1:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	sub	sp, sp, #1, lsl #12             ; =4096
	sub	sp, sp, #4048
	mov	x19, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	mov	w8, #0                          ; =0x0
	str	w8, [x19, #28]                  ; 4-byte Folded Spill
	str	w8, [x19, #128]
	mov	w8, #8004                       ; =0x1f44
	mov	x1, x8
	add	x0, x19, #132
	bl	_bzero
	sub	sp, sp, #16
	mov	x9, sp
	add	x8, x19, #120
	str	x8, [x9, #8]
	add	x8, x19, #124
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_scanf
	ldr	w8, [x19, #28]                  ; 4-byte Folded Reload
	add	sp, sp, #16
	ldr	w9, [x19, #124]
                                        ; kill: def $x9 killed $w9
	str	x9, [x19, #40]                  ; 8-byte Folded Spill
	mov	x10, sp
	str	x10, [x19, #112]
	lsl	x9, x9, #2
	str	x9, [x19, #32]                  ; 8-byte Folded Spill
Lloh2:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh3:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	ldr	x10, [x19, #32]                 ; 8-byte Folded Reload
	ldr	x9, [x19, #40]                  ; 8-byte Folded Reload
	add	x10, x10, #15
	and	x11, x10, #0x7fffffff0
	mov	x10, sp
	subs	x10, x10, x11
	mov	sp, x10
	str	x10, [x19, #48]                 ; 8-byte Folded Spill
	str	x9, [x19, #104]
	str	w8, [x19, #100]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [x19, #100]
	ldr	w9, [x19, #124]
	subs	w8, w8, w9
	b.ge	LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	x8, [x19, #48]                  ; 8-byte Folded Reload
	ldrsw	x9, [x19, #100]
	add	x8, x8, x9, lsl #2
	sub	sp, sp, #16
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_scanf
	add	sp, sp, #16
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [x19, #100]
	add	w8, w8, #1
	str	w8, [x19, #100]
	b	LBB0_1
LBB0_4:
	mov	w8, #0                          ; =0x0
	str	w8, [x19, #96]
	b	LBB0_5
LBB0_5:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [x19, #96]
	ldr	w9, [x19, #124]
	subs	w8, w8, w9
	b.ge	LBB0_8
	b	LBB0_6
LBB0_6:                                 ;   in Loop: Header=BB0_5 Depth=1
	ldr	x8, [x19, #48]                  ; 8-byte Folded Reload
	ldrsw	x9, [x19, #96]
	ldrsw	x9, [x8, x9, lsl #2]
	add	x8, x19, #132
	add	x9, x8, x9, lsl #2
	ldr	w8, [x9, #4000]
	add	w8, w8, #1
	str	w8, [x9, #4000]
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_5 Depth=1
	ldr	w8, [x19, #96]
	add	w8, w8, #1
	str	w8, [x19, #96]
	b	LBB0_5
LBB0_8:
	ldr	w8, [x19, #120]
                                        ; kill: def $x8 killed $w8
	lsl	x9, x8, #2
	str	x9, [x19, #8]                   ; 8-byte Folded Spill
Lloh4:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh5:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	ldr	x9, [x19, #8]                   ; 8-byte Folded Reload
	add	x9, x9, #15
	and	x10, x9, #0x7fffffff0
	mov	x9, sp
	subs	x9, x9, x10
	mov	sp, x9
	str	x9, [x19, #16]                  ; 8-byte Folded Spill
	str	x8, [x19, #88]
	mov	w8, #0                          ; =0x0
	str	w8, [x19, #84]
	b	LBB0_9
LBB0_9:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_11 Depth 2
	ldr	w8, [x19, #84]
	ldr	w9, [x19, #120]
	subs	w8, w8, w9
	b.ge	LBB0_18
	b	LBB0_10
LBB0_10:                                ;   in Loop: Header=BB0_9 Depth=1
	mov	w8, #-2147483648                ; =0x80000000
	str	w8, [x19, #76]
	mov	w8, #0                          ; =0x0
	str	w8, [x19, #72]
	b	LBB0_11
LBB0_11:                                ;   Parent Loop BB0_9 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [x19, #72]
	subs	w8, w8, #2000
	b.gt	LBB0_16
	b	LBB0_12
LBB0_12:                                ;   in Loop: Header=BB0_11 Depth=2
	ldr	w8, [x19, #72]
	subs	w8, w8, #1000
	str	w8, [x19, #68]
	ldrsw	x9, [x19, #72]
	add	x8, x19, #132
	ldr	w8, [x8, x9, lsl #2]
	str	w8, [x19, #64]
	ldr	w8, [x19, #64]
	ldr	w9, [x19, #76]
	subs	w8, w8, w9
	b.le	LBB0_14
	b	LBB0_13
LBB0_13:                                ;   in Loop: Header=BB0_11 Depth=2
	ldr	w8, [x19, #64]
	str	w8, [x19, #76]
	ldr	w8, [x19, #68]
	str	w8, [x19, #80]
	b	LBB0_14
LBB0_14:                                ;   in Loop: Header=BB0_11 Depth=2
	b	LBB0_15
LBB0_15:                                ;   in Loop: Header=BB0_11 Depth=2
	ldr	w8, [x19, #72]
	add	w8, w8, #1
	str	w8, [x19, #72]
	b	LBB0_11
LBB0_16:                                ;   in Loop: Header=BB0_9 Depth=1
	ldr	x9, [x19, #16]                  ; 8-byte Folded Reload
	ldrsw	x10, [x19, #80]
	add	x8, x19, #132
	add	x10, x8, x10, lsl #2
	mov	w8, #-2147483648                ; =0x80000000
	str	w8, [x10, #4000]
	ldr	w8, [x19, #80]
	ldrsw	x10, [x19, #84]
	str	w8, [x9, x10, lsl #2]
	b	LBB0_17
LBB0_17:                                ;   in Loop: Header=BB0_9 Depth=1
	ldr	w8, [x19, #84]
	add	w8, w8, #1
	str	w8, [x19, #84]
	b	LBB0_9
LBB0_18:
	mov	w8, #0                          ; =0x0
	str	w8, [x19, #60]
	b	LBB0_19
LBB0_19:                                ; =>This Inner Loop Header: Depth=1
	ldr	w8, [x19, #60]
	ldr	w9, [x19, #120]
	subs	w8, w8, w9
	b.ge	LBB0_22
	b	LBB0_20
LBB0_20:                                ;   in Loop: Header=BB0_19 Depth=1
	ldr	x8, [x19, #16]                  ; 8-byte Folded Reload
	ldrsw	x9, [x19, #60]
	ldr	w8, [x8, x9, lsl #2]
                                        ; kill: def $x8 killed $w8
	sub	sp, sp, #16
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	add	sp, sp, #16
	b	LBB0_21
LBB0_21:                                ;   in Loop: Header=BB0_19 Depth=1
	ldr	w8, [x19, #60]
	add	w8, w8, #1
	str	w8, [x19, #60]
	b	LBB0_19
LBB0_22:
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	ldr	x8, [x19, #112]
	mov	sp, x8
	ldr	w8, [x19, #128]
	str	w8, [x19, #4]                   ; 4-byte Folded Spill
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	b.ne	LBB0_23
	b	LBB0_24
LBB0_23:
	bl	___stack_chk_fail
LBB0_24:
	ldr	w0, [x19, #4]                   ; 4-byte Folded Reload
	sub	sp, x29, #16
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp], #32             ; 16-byte Folded Reload
	ret
	.loh AdrpLdrGot	Lloh0, Lloh1
	.loh AdrpLdrGot	Lloh2, Lloh3
	.loh AdrpLdrGot	Lloh4, Lloh5
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d%d"

l_.str.1:                               ; @.str.1
	.asciz	"%d"

l_.str.2:                               ; @.str.2
	.asciz	"%d "

l_.str.3:                               ; @.str.3
	.asciz	"\n"

.subsections_via_symbols
