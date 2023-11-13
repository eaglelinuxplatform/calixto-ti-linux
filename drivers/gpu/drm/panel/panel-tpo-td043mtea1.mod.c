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
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x80748366, "spi_setup" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:td043mtea1");
MODULE_ALIAS("of:N*T*Ctpo,td043mtea1");
MODULE_ALIAS("of:N*T*Ctpo,td043mtea1C*");

MODULE_INFO(srcversion, "A5D6A260D3B072367CF0DC0");
