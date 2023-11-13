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

SYMBOL_CRC(ti_emif_copy_pm_function_table, 0xbcf322c5, "_gpl");
SYMBOL_CRC(ti_emif_get_mem_type, 0x49a8a623, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd2db3ca2, "devm_platform_get_and_ioremap_resource" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xfa03858a, "sram_exec_copy" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0x7d461ffb, "of_gen_pool_get" },
	{ 0x2f5b0fdb, "gen_pool_alloc_algo_owner" },
	{ 0x90609db6, "gen_pool_virt_to_phys" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,emif-am3352");
MODULE_ALIAS("of:N*T*Cti,emif-am3352C*");
MODULE_ALIAS("of:N*T*Cti,emif-am4372");
MODULE_ALIAS("of:N*T*Cti,emif-am4372C*");

MODULE_INFO(srcversion, "04B9D12B81747888C9A83C1");
