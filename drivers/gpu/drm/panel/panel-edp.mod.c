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
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x8296d1aa, "__dp_aux_dp_driver_register" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x2c6007e1, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xf01014b6, "single_open" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x46372883, "seq_puts" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x61ddff67, "drm_add_edid_modes" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0xc75dc0a8, "drm_connector_set_panel_orientation" },
	{ 0x5138844c, "drm_get_edid" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xbdac567a, "drm_display_info_set_bus_formats" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0x6754afda, "drm_mode_create" },
	{ 0x66cf2f64, "drm_display_mode_from_videomode" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbd62d4fc, "dp_aux_dp_driver_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xc7b0dffa, "of_drm_get_panel_orientation" },
	{ 0xa51c67b9, "of_find_i2c_adapter_by_node" },
	{ 0x6d881014, "of_get_display_timing" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xbaf650fc, "drm_panel_of_backlight" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x3bf87eb4, "drm_panel_dp_aux_backlight" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xe49f3338, "drm_edid_get_panel_id" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe9f55364, "of_match_node" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x34937f96, "single_release" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm_dp_aux_bus,drm,drm_display_helper");

MODULE_ALIAS("of:N*T*Cedp-panel");
MODULE_ALIAS("of:N*T*Cedp-panelC*");
MODULE_ALIAS("of:N*T*Cauo,b101ean01");
MODULE_ALIAS("of:N*T*Cauo,b101ean01C*");
MODULE_ALIAS("of:N*T*Cauo,b116xa01");
MODULE_ALIAS("of:N*T*Cauo,b116xa01C*");
MODULE_ALIAS("of:N*T*Cauo,b116xw03");
MODULE_ALIAS("of:N*T*Cauo,b116xw03C*");
MODULE_ALIAS("of:N*T*Cauo,b133han05");
MODULE_ALIAS("of:N*T*Cauo,b133han05C*");
MODULE_ALIAS("of:N*T*Cauo,b133htn01");
MODULE_ALIAS("of:N*T*Cauo,b133htn01C*");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,b140han06");
MODULE_ALIAS("of:N*T*Cauo,b140han06C*");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51C*");
MODULE_ALIAS("of:N*T*Cboe,nv110wtm-n61");
MODULE_ALIAS("of:N*T*Cboe,nv110wtm-n61C*");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n61");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n61C*");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n62");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n62C*");
MODULE_ALIAS("of:N*T*Cboe,nv140fhmn49");
MODULE_ALIAS("of:N*T*Cboe,nv140fhmn49C*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bca-ea1");
MODULE_ALIAS("of:N*T*Cinnolux,n116bca-ea1C*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bge");
MODULE_ALIAS("of:N*T*Cinnolux,n116bgeC*");
MODULE_ALIAS("of:N*T*Cinnolux,n125hce-gn1");
MODULE_ALIAS("of:N*T*Cinnolux,n125hce-gn1C*");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1C*");
MODULE_ALIAS("of:N*T*Civo,m133nwf4-r0");
MODULE_ALIAS("of:N*T*Civo,m133nwf4-r0C*");
MODULE_ALIAS("of:N*T*Ckingdisplay,kd116n21-30nv-a010");
MODULE_ALIAS("of:N*T*Ckingdisplay,kd116n21-30nv-a010C*");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0v");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0vC*");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1C*");
MODULE_ALIAS("of:N*T*Clg,lp120up1");
MODULE_ALIAS("of:N*T*Clg,lp120up1C*");
MODULE_ALIAS("of:N*T*Clg,lp129qe");
MODULE_ALIAS("of:N*T*Clg,lp129qeC*");
MODULE_ALIAS("of:N*T*Cneweast,wjfh116008a");
MODULE_ALIAS("of:N*T*Cneweast,wjfh116008aC*");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301C*");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01b");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01bC*");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31C*");
MODULE_ALIAS("of:N*T*Csharp,lq140m1jw46");
MODULE_ALIAS("of:N*T*Csharp,lq140m1jw46C*");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sra");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sraC*");
MODULE_ALIAS("of:N*T*Cti,panel-edp");
MODULE_ALIAS("of:N*T*Cti,panel-edpC*");

MODULE_INFO(srcversion, "F40401A6A60098B355C4474");
