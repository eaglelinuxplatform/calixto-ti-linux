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
	.file	"asm-offsets.c"
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
@ arch/arm/kernel/asm-offsets.c:39:   DEFINE(TSK_ACTIVE_MM,		offsetof(struct task_struct, active_mm));
	.syntax divided
@ 39 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_ACTIVE_MM #1452 offsetof(struct task_struct, active_mm)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:41:   DEFINE(TSK_STACK_CANARY,	offsetof(struct task_struct, stack_canary));
@ 41 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_STACK_CANARY #1544 offsetof(struct task_struct, stack_canary)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:43:   BLANK();
@ 43 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:44:   DEFINE(TI_FLAGS,		offsetof(struct thread_info, flags));
@ 44 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FLAGS #0 offsetof(struct thread_info, flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:45:   DEFINE(TI_PREEMPT,		offsetof(struct thread_info, preempt_count));
@ 45 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:46:   DEFINE(TI_CPU,		offsetof(struct thread_info, cpu));
@ 46 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU #8 offsetof(struct thread_info, cpu)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:47:   DEFINE(TI_CPU_DOMAIN,		offsetof(struct thread_info, cpu_domain));
@ 47 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_DOMAIN #12 offsetof(struct thread_info, cpu_domain)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:48:   DEFINE(TI_CPU_SAVE,		offsetof(struct thread_info, cpu_context));
@ 48 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_SAVE #16 offsetof(struct thread_info, cpu_context)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:49:   DEFINE(TI_ABI_SYSCALL,	offsetof(struct thread_info, abi_syscall));
@ 49 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_ABI_SYSCALL #64 offsetof(struct thread_info, abi_syscall)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:50:   DEFINE(TI_USED_CP,		offsetof(struct thread_info, used_cp));
@ 50 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_USED_CP #68 offsetof(struct thread_info, used_cp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:51:   DEFINE(TI_TP_VALUE,		offsetof(struct thread_info, tp_value));
@ 51 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TP_VALUE #84 offsetof(struct thread_info, tp_value)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:52:   DEFINE(TI_FPSTATE,		offsetof(struct thread_info, fpstate));
@ 52 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FPSTATE #96 offsetof(struct thread_info, fpstate)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:54:   DEFINE(TI_VFPSTATE,		offsetof(struct thread_info, vfpstate));
@ 54 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_VFPSTATE #240 offsetof(struct thread_info, vfpstate)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:56:   DEFINE(VFP_CPU,		offsetof(union vfp_state, hard.cpu));
@ 56 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:60:   DEFINE(TI_THUMBEE_STATE,	offsetof(struct thread_info, thumbee_state));
@ 60 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_THUMBEE_STATE #520 offsetof(struct thread_info, thumbee_state)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:65:   BLANK();
@ 65 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:66:   DEFINE(S_R0,			offsetof(struct pt_regs, ARM_r0));
@ 66 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R0 #0 offsetof(struct pt_regs, ARM_r0)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:67:   DEFINE(S_R1,			offsetof(struct pt_regs, ARM_r1));
@ 67 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R1 #4 offsetof(struct pt_regs, ARM_r1)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:68:   DEFINE(S_R2,			offsetof(struct pt_regs, ARM_r2));
@ 68 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R2 #8 offsetof(struct pt_regs, ARM_r2)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:69:   DEFINE(S_R3,			offsetof(struct pt_regs, ARM_r3));
@ 69 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R3 #12 offsetof(struct pt_regs, ARM_r3)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:70:   DEFINE(S_R4,			offsetof(struct pt_regs, ARM_r4));
@ 70 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R4 #16 offsetof(struct pt_regs, ARM_r4)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:71:   DEFINE(S_R5,			offsetof(struct pt_regs, ARM_r5));
@ 71 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R5 #20 offsetof(struct pt_regs, ARM_r5)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:72:   DEFINE(S_R6,			offsetof(struct pt_regs, ARM_r6));
@ 72 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R6 #24 offsetof(struct pt_regs, ARM_r6)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:73:   DEFINE(S_R7,			offsetof(struct pt_regs, ARM_r7));
@ 73 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R7 #28 offsetof(struct pt_regs, ARM_r7)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:74:   DEFINE(S_R8,			offsetof(struct pt_regs, ARM_r8));
@ 74 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R8 #32 offsetof(struct pt_regs, ARM_r8)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:75:   DEFINE(S_R9,			offsetof(struct pt_regs, ARM_r9));
@ 75 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R9 #36 offsetof(struct pt_regs, ARM_r9)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:76:   DEFINE(S_R10,			offsetof(struct pt_regs, ARM_r10));
@ 76 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R10 #40 offsetof(struct pt_regs, ARM_r10)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:77:   DEFINE(S_FP,			offsetof(struct pt_regs, ARM_fp));
@ 77 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_FP #44 offsetof(struct pt_regs, ARM_fp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:78:   DEFINE(S_IP,			offsetof(struct pt_regs, ARM_ip));
@ 78 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_IP #48 offsetof(struct pt_regs, ARM_ip)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:79:   DEFINE(S_SP,			offsetof(struct pt_regs, ARM_sp));
@ 79 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_SP #52 offsetof(struct pt_regs, ARM_sp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:80:   DEFINE(S_LR,			offsetof(struct pt_regs, ARM_lr));
@ 80 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_LR #56 offsetof(struct pt_regs, ARM_lr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:81:   DEFINE(S_PC,			offsetof(struct pt_regs, ARM_pc));
@ 81 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PC #60 offsetof(struct pt_regs, ARM_pc)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:82:   DEFINE(S_PSR,			offsetof(struct pt_regs, ARM_cpsr));
@ 82 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:83:   DEFINE(S_OLD_R0,		offsetof(struct pt_regs, ARM_ORIG_r0));
@ 83 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:84:   DEFINE(PT_REGS_SIZE,		sizeof(struct pt_regs));
@ 84 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PT_REGS_SIZE #72 sizeof(struct pt_regs)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:85:   DEFINE(SVC_DACR,		offsetof(struct svc_pt_regs, dacr));
@ 85 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_DACR #72 offsetof(struct svc_pt_regs, dacr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:86:   DEFINE(SVC_REGS_SIZE,		sizeof(struct svc_pt_regs));
@ 86 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_REGS_SIZE #76 sizeof(struct svc_pt_regs)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:87:   BLANK();
@ 87 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:88:   DEFINE(SIGFRAME_RC3_OFFSET,	offsetof(struct sigframe, retcode[3]));
@ 88 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIGFRAME_RC3_OFFSET #756 offsetof(struct sigframe, retcode[3])"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:89:   DEFINE(RT_SIGFRAME_RC3_OFFSET, offsetof(struct rt_sigframe, sig.retcode[3]));
@ 89 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->RT_SIGFRAME_RC3_OFFSET #884 offsetof(struct rt_sigframe, sig.retcode[3])"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:90:   BLANK();
@ 90 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:92:   DEFINE(L2X0_R_PHY_BASE,	offsetof(struct l2x0_regs, phy_base));
@ 92 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PHY_BASE #0 offsetof(struct l2x0_regs, phy_base)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:93:   DEFINE(L2X0_R_AUX_CTRL,	offsetof(struct l2x0_regs, aux_ctrl));
@ 93 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_AUX_CTRL #4 offsetof(struct l2x0_regs, aux_ctrl)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:94:   DEFINE(L2X0_R_TAG_LATENCY,	offsetof(struct l2x0_regs, tag_latency));
@ 94 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_TAG_LATENCY #8 offsetof(struct l2x0_regs, tag_latency)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:95:   DEFINE(L2X0_R_DATA_LATENCY,	offsetof(struct l2x0_regs, data_latency));
@ 95 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_DATA_LATENCY #12 offsetof(struct l2x0_regs, data_latency)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:96:   DEFINE(L2X0_R_FILTER_START,	offsetof(struct l2x0_regs, filter_start));
@ 96 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_FILTER_START #16 offsetof(struct l2x0_regs, filter_start)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:97:   DEFINE(L2X0_R_FILTER_END,	offsetof(struct l2x0_regs, filter_end));
@ 97 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_FILTER_END #20 offsetof(struct l2x0_regs, filter_end)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:98:   DEFINE(L2X0_R_PREFETCH_CTRL,	offsetof(struct l2x0_regs, prefetch_ctrl));
@ 98 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PREFETCH_CTRL #24 offsetof(struct l2x0_regs, prefetch_ctrl)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:99:   DEFINE(L2X0_R_PWR_CTRL,	offsetof(struct l2x0_regs, pwr_ctrl));
@ 99 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PWR_CTRL #28 offsetof(struct l2x0_regs, pwr_ctrl)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:100:   BLANK();
@ 100 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:103:   DEFINE(MM_CONTEXT_ID,		offsetof(struct mm_struct, context.id.counter));
@ 103 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MM_CONTEXT_ID #368 offsetof(struct mm_struct, context.id.counter)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:104:   BLANK();
@ 104 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:106:   DEFINE(VMA_VM_MM,		offsetof(struct vm_area_struct, vm_mm));
@ 106 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_MM #8 offsetof(struct vm_area_struct, vm_mm)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:107:   DEFINE(VMA_VM_FLAGS,		offsetof(struct vm_area_struct, vm_flags));
@ 107 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_FLAGS #16 offsetof(struct vm_area_struct, vm_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:108:   BLANK();
@ 108 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:109:   DEFINE(VM_EXEC,	       	VM_EXEC);
@ 109 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VM_EXEC #4 VM_EXEC"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:110:   BLANK();
@ 110 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:111:   DEFINE(PAGE_SZ,	       	PAGE_SIZE);
@ 111 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PAGE_SZ #4096 PAGE_SIZE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:112:   BLANK();
@ 112 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:113:   DEFINE(SYS_ERROR0,		0x9f0000);
@ 113 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SYS_ERROR0 #10420224 0x9f0000"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:114:   BLANK();
@ 114 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:115:   DEFINE(SIZEOF_MACHINE_DESC,	sizeof(struct machine_desc));
@ 115 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:116:   DEFINE(MACHINFO_TYPE,		offsetof(struct machine_desc, nr));
@ 116 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:117:   DEFINE(MACHINFO_NAME,		offsetof(struct machine_desc, name));
@ 117 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_NAME #4 offsetof(struct machine_desc, name)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:118:   BLANK();
@ 118 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:119:   DEFINE(PROC_INFO_SZ,		sizeof(struct proc_info_list));
@ 119 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROC_INFO_SZ #52 sizeof(struct proc_info_list)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:120:   DEFINE(PROCINFO_INITFUNC,	offsetof(struct proc_info_list, __cpu_flush));
@ 120 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:121:   DEFINE(PROCINFO_MM_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_mm_mmu_flags));
@ 121 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:122:   DEFINE(PROCINFO_IO_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_io_mmu_flags));
@ 122 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:123:   BLANK();
@ 123 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:125:   DEFINE(PROCESSOR_DABT_FUNC,	offsetof(struct processor, _data_abort));
@ 125 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCESSOR_DABT_FUNC #0 offsetof(struct processor, _data_abort)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:128:   DEFINE(PROCESSOR_PABT_FUNC,	offsetof(struct processor, _prefetch_abort));
@ 128 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCESSOR_PABT_FUNC #4 offsetof(struct processor, _prefetch_abort)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:131:   DEFINE(CPU_SLEEP_SIZE,	offsetof(struct processor, suspend_size));
@ 131 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_SLEEP_SIZE #40 offsetof(struct processor, suspend_size)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:132:   DEFINE(CPU_DO_SUSPEND,	offsetof(struct processor, do_suspend));
@ 132 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_SUSPEND #44 offsetof(struct processor, do_suspend)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:133:   DEFINE(CPU_DO_RESUME,		offsetof(struct processor, do_resume));
@ 133 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_RESUME #48 offsetof(struct processor, do_resume)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:136:   DEFINE(CACHE_FLUSH_KERN_ALL,	offsetof(struct cpu_cache_fns, flush_kern_all));
@ 136 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_FLUSH_KERN_ALL #4 offsetof(struct cpu_cache_fns, flush_kern_all)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:139:   DEFINE(SLEEP_SAVE_SP_SZ,	sizeof(struct sleep_save_sp));
@ 139 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_SZ #8 sizeof(struct sleep_save_sp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:140:   DEFINE(SLEEP_SAVE_SP_PHYS,	offsetof(struct sleep_save_sp, save_ptr_stash_phys));
@ 140 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_PHYS #4 offsetof(struct sleep_save_sp, save_ptr_stash_phys)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:141:   DEFINE(SLEEP_SAVE_SP_VIRT,	offsetof(struct sleep_save_sp, save_ptr_stash));
@ 141 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_VIRT #0 offsetof(struct sleep_save_sp, save_ptr_stash)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:143:   DEFINE(ARM_SMCCC_QUIRK_ID_OFFS,	offsetof(struct arm_smccc_quirk, id));
@ 143 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_QUIRK_ID_OFFS #0 offsetof(struct arm_smccc_quirk, id)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:144:   DEFINE(ARM_SMCCC_QUIRK_STATE_OFFS,	offsetof(struct arm_smccc_quirk, state));
@ 144 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->ARM_SMCCC_QUIRK_STATE_OFFS #4 offsetof(struct arm_smccc_quirk, state)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:145:   BLANK();
@ 145 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:146:   DEFINE(DMA_BIDIRECTIONAL,	DMA_BIDIRECTIONAL);
@ 146 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:147:   DEFINE(DMA_TO_DEVICE,		DMA_TO_DEVICE);
@ 147 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_TO_DEVICE #1 DMA_TO_DEVICE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:148:   DEFINE(DMA_FROM_DEVICE,	DMA_FROM_DEVICE);
@ 148 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:149:   BLANK();
@ 149 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:150:   DEFINE(CACHE_WRITEBACK_ORDER, __CACHE_WRITEBACK_ORDER);
@ 150 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:151:   DEFINE(CACHE_WRITEBACK_GRANULE, __CACHE_WRITEBACK_GRANULE);
@ 151 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:152:   BLANK();
@ 152 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:154:   DEFINE(VDSO_DATA_SIZE,	sizeof(union vdso_data_store));
@ 154 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VDSO_DATA_SIZE #4096 sizeof(union vdso_data_store)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:156:   BLANK();
@ 156 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:168:   DEFINE(KEXEC_START_ADDR,	offsetof(struct kexec_relocate_data, kexec_start_address));
@ 168 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->KEXEC_START_ADDR #0 offsetof(struct kexec_relocate_data, kexec_start_address)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:169:   DEFINE(KEXEC_INDIR_PAGE,	offsetof(struct kexec_relocate_data, kexec_indirection_page));
@ 169 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->KEXEC_INDIR_PAGE #4 offsetof(struct kexec_relocate_data, kexec_indirection_page)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:170:   DEFINE(KEXEC_MACH_TYPE,	offsetof(struct kexec_relocate_data, kexec_mach_type));
@ 170 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->KEXEC_MACH_TYPE #8 offsetof(struct kexec_relocate_data, kexec_mach_type)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:171:   DEFINE(KEXEC_R2,		offsetof(struct kexec_relocate_data, kexec_r2));
@ 171 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->KEXEC_R2 #12 offsetof(struct kexec_relocate_data, kexec_r2)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:173: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	bx	lr	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (GNU) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
