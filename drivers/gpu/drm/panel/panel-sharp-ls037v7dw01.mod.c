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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Csharp,ls037v7dw01");
MODULE_ALIAS("of:N*T*Csharp,ls037v7dw01C*");

MODULE_INFO(srcversion, "55250FF3AEC26A0B44858D1");
