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
	{ 0xaa328067, "mipi_dsi_driver_register_full" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca82eed1, "mipi_dsi_detach" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x2c6007e1, "put_device" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x9a112e6e, "mipi_dsi_dcs_read" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2ff1575b, "mipi_dsi_dcs_write" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xe61a6643, "__current" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0x1874f36c, "devm_of_find_backlight" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0x6c70f75a, "devm_backlight_device_register" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0x7cd22a42, "mipi_dsi_attach" },
	{ 0xf63a681d, "mipi_dsi_driver_unregister" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0x5d241a39, "mipi_dsi_dcs_set_display_off" },
	{ 0x9a0b5589, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x9051dc6, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xea151cdf, "mipi_dsi_dcs_set_pixel_format" },
	{ 0x586ec71, "mipi_dsi_dcs_set_column_address" },
	{ 0x9d6281bd, "mipi_dsi_dcs_set_page_address" },
	{ 0xaf029030, "mipi_dsi_dcs_set_display_on" },
	{ 0x14259d8a, "mipi_dsi_dcs_set_tear_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Ctpo,taal");
MODULE_ALIAS("of:N*T*Ctpo,taalC*");
MODULE_ALIAS("of:N*T*Cnokia,himalaya");
MODULE_ALIAS("of:N*T*Cnokia,himalayaC*");
MODULE_ALIAS("of:N*T*Cmotorola,droid4-panel");
MODULE_ALIAS("of:N*T*Cmotorola,droid4-panelC*");

MODULE_INFO(srcversion, "490FDC197A77B2FF63500A7");
