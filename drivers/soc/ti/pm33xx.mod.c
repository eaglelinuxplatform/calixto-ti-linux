#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x9ac11b74, "suspend_set_ops" },
	{ 0x5fd609a5, "wkup_m3_ipc_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xbeaae683, "devm_nvmem_device_get" },
	{ 0xe18960ba, "nvmem_device_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ffa34f1, "omap_rtc_power_off_program" },
	{ 0x90609db6, "gen_pool_virt_to_phys" },
	{ 0xfa03858a, "sram_exec_copy" },
	{ 0xbcf322c5, "ti_emif_copy_pm_function_table" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa531471e, "clk_save_context" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6259d291, "clk_restore_context" },
	{ 0x92997ed8, "_printk" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0xe97c4103, "ioremap" },
	{ 0xa38534e, "wkup_m3_ipc_get" },
	{ 0x6f69cb95, "of_find_compatible_node" },
	{ 0x7d461ffb, "of_gen_pool_get" },
	{ 0x2f5b0fdb, "gen_pool_alloc_algo_owner" },
	{ 0xa87cdeaa, "of_find_node_by_name" },
	{ 0x514209cc, "of_device_is_available" },
	{ 0x85d66832, "of_clk_get_by_name" },
	{ 0x49a8a623, "ti_emif_get_mem_type" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xf8740bf4, "of_iomap" },
	{ 0xeae4e37e, "rtc_class_open" },
	{ 0xc96fb674, "nvmem_device_read" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wkup_m3_ipc,rtc-omap,ti-emif-sram");


MODULE_INFO(srcversion, "B648D6C84287AF2EA688891");
