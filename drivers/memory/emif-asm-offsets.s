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
	.file	"emif-asm-offsets.c"
@ GNU C11 (GCC) version 11.4.0 (arm-oe-linux-gnueabi)
@	compiled by GNU C version 11.4.0, GMP version 6.2.1, MPFR version 4.1.1, MPC version 1.2.1, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed: -mlittle-endian -mno-fdpic -mabi=aapcs-linux -mfpu=vfp -marm -mtune=arm1136j-s -mfloat-abi=soft -mtls-dialect=gnu -march=armv6k -O2 -std=gnu11 -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables -fno-delete-null-pointer-checks -fno-allow-store-data-races -fstack-protector-strong -fomit-frame-pointer -fno-stack-clash-protection -fno-strict-overflow -fstack-check=no -fconserve-stack
	.text
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
@ ./include/linux/ti-emif-sram.h:58: 	DEFINE(EMIF_SDCFG_VAL_OFFSET,
	.syntax divided
@ 58 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_SDCFG_VAL_OFFSET #0 offsetof(struct emif_regs_amx3, emif_sdcfg_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:60: 	DEFINE(EMIF_TIMING1_VAL_OFFSET,
@ 60 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING1_VAL_OFFSET #4 offsetof(struct emif_regs_amx3, emif_timing1_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:62: 	DEFINE(EMIF_TIMING2_VAL_OFFSET,
@ 62 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING2_VAL_OFFSET #8 offsetof(struct emif_regs_amx3, emif_timing2_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:64: 	DEFINE(EMIF_TIMING3_VAL_OFFSET,
@ 64 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING3_VAL_OFFSET #12 offsetof(struct emif_regs_amx3, emif_timing3_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:66: 	DEFINE(EMIF_REF_CTRL_VAL_OFFSET,
@ 66 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_REF_CTRL_VAL_OFFSET #16 offsetof(struct emif_regs_amx3, emif_ref_ctrl_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:68: 	DEFINE(EMIF_ZQCFG_VAL_OFFSET,
@ 68 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_ZQCFG_VAL_OFFSET #20 offsetof(struct emif_regs_amx3, emif_zqcfg_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:70: 	DEFINE(EMIF_PMCR_VAL_OFFSET,
@ 70 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PMCR_VAL_OFFSET #24 offsetof(struct emif_regs_amx3, emif_pmcr_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:72: 	DEFINE(EMIF_PMCR_SHDW_VAL_OFFSET,
@ 72 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PMCR_SHDW_VAL_OFFSET #28 offsetof(struct emif_regs_amx3, emif_pmcr_shdw_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:74: 	DEFINE(EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET,
@ 74 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET #32 offsetof(struct emif_regs_amx3, emif_rd_wr_level_ramp_ctrl)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:76: 	DEFINE(EMIF_RD_WR_EXEC_THRESH_OFFSET,
@ 76 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_RD_WR_EXEC_THRESH_OFFSET #36 offsetof(struct emif_regs_amx3, emif_rd_wr_exec_thresh)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:78: 	DEFINE(EMIF_COS_CONFIG_OFFSET,
@ 78 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_COS_CONFIG_OFFSET #40 offsetof(struct emif_regs_amx3, emif_cos_config)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:80: 	DEFINE(EMIF_PRIORITY_TO_COS_MAPPING_OFFSET,
@ 80 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PRIORITY_TO_COS_MAPPING_OFFSET #44 offsetof(struct emif_regs_amx3, emif_priority_to_cos_mapping)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:82: 	DEFINE(EMIF_CONNECT_ID_SERV_1_MAP_OFFSET,
@ 82 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_CONNECT_ID_SERV_1_MAP_OFFSET #48 offsetof(struct emif_regs_amx3, emif_connect_id_serv_1_map)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:84: 	DEFINE(EMIF_CONNECT_ID_SERV_2_MAP_OFFSET,
@ 84 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_CONNECT_ID_SERV_2_MAP_OFFSET #52 offsetof(struct emif_regs_amx3, emif_connect_id_serv_2_map)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:86: 	DEFINE(EMIF_OCP_CONFIG_VAL_OFFSET,
@ 86 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_OCP_CONFIG_VAL_OFFSET #56 offsetof(struct emif_regs_amx3, emif_ocp_config_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:88: 	DEFINE(EMIF_LPDDR2_NVM_TIM_OFFSET,
@ 88 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_LPDDR2_NVM_TIM_OFFSET #60 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:90: 	DEFINE(EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET,
@ 90 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET #64 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim_shdw)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:92: 	DEFINE(EMIF_DLL_CALIB_CTRL_VAL_OFFSET,
@ 92 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DLL_CALIB_CTRL_VAL_OFFSET #68 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:94: 	DEFINE(EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET,
@ 94 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET #72 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val_shdw)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:96: 	DEFINE(EMIF_DDR_PHY_CTLR_1_OFFSET,
@ 96 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DDR_PHY_CTLR_1_OFFSET #76 offsetof(struct emif_regs_amx3, emif_ddr_phy_ctlr_1)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:98: 	DEFINE(EMIF_EXT_PHY_CTRL_VALS_OFFSET,
@ 98 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_EXT_PHY_CTRL_VALS_OFFSET #80 offsetof(struct emif_regs_amx3, emif_ext_phy_ctrl_vals)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:100: 	DEFINE(EMIF_REGS_AMX3_SIZE, sizeof(struct emif_regs_amx3));
@ 100 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_REGS_AMX3_SIZE #560 sizeof(struct emif_regs_amx3)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:102: 	BLANK();
@ 102 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->"
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:104: 	DEFINE(EMIF_PM_BASE_ADDR_VIRT_OFFSET,
@ 104 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_BASE_ADDR_VIRT_OFFSET #0 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_virt)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:106: 	DEFINE(EMIF_PM_BASE_ADDR_PHYS_OFFSET,
@ 106 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_BASE_ADDR_PHYS_OFFSET #4 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_phys)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:108: 	DEFINE(EMIF_PM_CONFIG_OFFSET,
@ 108 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_CONFIG_OFFSET #8 offsetof(struct ti_emif_pm_data, ti_emif_sram_config)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:110: 	DEFINE(EMIF_PM_REGS_VIRT_OFFSET,
@ 110 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_REGS_VIRT_OFFSET #12 offsetof(struct ti_emif_pm_data, regs_virt)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:112: 	DEFINE(EMIF_PM_REGS_PHYS_OFFSET,
@ 112 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_REGS_PHYS_OFFSET #16 offsetof(struct ti_emif_pm_data, regs_phys)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:114: 	DEFINE(EMIF_PM_DATA_SIZE, sizeof(struct ti_emif_pm_data));
@ 114 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_DATA_SIZE #24 sizeof(struct ti_emif_pm_data)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:116: 	BLANK();
@ 116 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->"
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:118: 	DEFINE(EMIF_PM_SAVE_CONTEXT_OFFSET,
@ 118 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_SAVE_CONTEXT_OFFSET #0 offsetof(struct ti_emif_pm_functions, save_context)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:120: 	DEFINE(EMIF_PM_RESTORE_CONTEXT_OFFSET,
@ 120 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_RESTORE_CONTEXT_OFFSET #4 offsetof(struct ti_emif_pm_functions, restore_context)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:122: 	DEFINE(EMIF_PM_RUN_HW_LEVELING,
@ 122 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_RUN_HW_LEVELING #8 offsetof(struct ti_emif_pm_functions, run_hw_leveling)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:124: 	DEFINE(EMIF_PM_ENTER_SR_OFFSET,
@ 124 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_ENTER_SR_OFFSET #12 offsetof(struct ti_emif_pm_functions, enter_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:126: 	DEFINE(EMIF_PM_EXIT_SR_OFFSET,
@ 126 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_EXIT_SR_OFFSET #16 offsetof(struct ti_emif_pm_functions, exit_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:128: 	DEFINE(EMIF_PM_ABORT_SR_OFFSET,
@ 128 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_ABORT_SR_OFFSET #20 offsetof(struct ti_emif_pm_functions, abort_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:130: 	DEFINE(EMIF_PM_FUNCTIONS_SIZE, sizeof(struct ti_emif_pm_functions));
@ 130 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_FUNCTIONS_SIZE #24 sizeof(struct ti_emif_pm_functions)"	@
@ 0 "" 2
@ drivers/memory/emif-asm-offsets.c:14: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	bx	lr	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (GNU) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
