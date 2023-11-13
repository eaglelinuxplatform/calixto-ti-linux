	.arch armv6k
	.fpu softvfp
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"bounds.c"
@ GNU C11 (GCC) version 11.4.0 (arm-oe-linux-gnueabi)
@	compiled by GNU C version 11.4.0, GMP version 6.2.1, MPFR version 4.1.1, MPC version 1.2.1, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed: -mlittle-endian -mno-fdpic -mabi=aapcs-linux -mfpu=vfp -marm -mtune=arm1136j-s -mfloat-abi=soft -mtls-dialect=gnu -march=armv6k -O2 -std=gnu11 -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables -fno-delete-null-pointer-checks -fno-allow-store-data-races -fstack-protector-strong -fomit-frame-pointer -fno-stack-clash-protection -fno-strict-overflow -fstack-check=no -fconserve-stack
	.text
	.syntax divided
	.syntax unified
	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ kernel/bounds.c:19: 	DEFINE(NR_PAGEFLAGS, __NR_PAGEFLAGS);
	.syntax divided
@ 19 "kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS #22 __NR_PAGEFLAGS"	@
@ 0 "" 2
@ kernel/bounds.c:20: 	DEFINE(MAX_NR_ZONES, __MAX_NR_ZONES);
@ 20 "kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES #3 __MAX_NR_ZONES"	@
@ 0 "" 2
@ kernel/bounds.c:22: 	DEFINE(NR_CPUS_BITS, ilog2(CONFIG_NR_CPUS));
@ 22 "kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS #1 ilog2(CONFIG_NR_CPUS)"	@
@ 0 "" 2
@ kernel/bounds.c:24: 	DEFINE(SPINLOCK_SIZE, sizeof(spinlock_t));
@ 24 "kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE #4 sizeof(spinlock_t)"	@
@ 0 "" 2
@ kernel/bounds.c:29: 	DEFINE(LRU_GEN_WIDTH, 0);
@ 29 "kernel/bounds.c" 1
	
.ascii "->LRU_GEN_WIDTH #0 0"	@
@ 0 "" 2
@ kernel/bounds.c:30: 	DEFINE(__LRU_REFS_WIDTH, 0);
@ 30 "kernel/bounds.c" 1
	
.ascii "->__LRU_REFS_WIDTH #0 0"	@
@ 0 "" 2
@ kernel/bounds.c:35: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	bx	lr	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (GNU) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
