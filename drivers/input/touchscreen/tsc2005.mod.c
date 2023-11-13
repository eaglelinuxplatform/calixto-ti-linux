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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb7ed5de6, "tsc200x_remove" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x80748366, "spi_setup" },
	{ 0xe97a08b, "__devm_regmap_init_spi" },
	{ 0x45542ca1, "tsc200x_probe" },
	{ 0x46478ada, "tsc200x_regmap_config" },
	{ 0xe2208a6c, "tsc200x_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "tsc200x-core");

MODULE_ALIAS("of:N*T*Cti,tsc2005");
MODULE_ALIAS("of:N*T*Cti,tsc2005C*");

MODULE_INFO(srcversion, "F5251C3DD3F69EFD3B7D20A");
