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
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:lb035q02");
MODULE_ALIAS("of:N*T*Clgphilips,lb035q02");
MODULE_ALIAS("of:N*T*Clgphilips,lb035q02C*");

MODULE_INFO(srcversion, "19F0B346A63B3CBE7CD6D4C");
