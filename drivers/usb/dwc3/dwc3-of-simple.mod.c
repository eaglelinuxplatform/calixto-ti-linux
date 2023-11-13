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
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x3ebeee25, "of_reset_control_array_get" },
	{ 0x40f0683e, "reset_control_put" },
	{ 0xe9f037bc, "clk_bulk_get_all" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x5097d865, "of_platform_populate" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xa8caa845, "clk_bulk_put_all" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x32aea1d0, "of_platform_depopulate" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crockchip,rk3399-dwc3");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-dwc3C*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-usb-uctl");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-usb-uctlC*");
MODULE_ALIAS("of:N*T*Csprd,sc9860-dwc3");
MODULE_ALIAS("of:N*T*Csprd,sc9860-dwc3C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-dwc3");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-dwc3C*");
MODULE_ALIAS("of:N*T*Chisilicon,hi3670-dwc3");
MODULE_ALIAS("of:N*T*Chisilicon,hi3670-dwc3C*");
MODULE_ALIAS("of:N*T*Cintel,keembay-dwc3");
MODULE_ALIAS("of:N*T*Cintel,keembay-dwc3C*");

MODULE_INFO(srcversion, "6C8C97B27343AB95C77BE4A");
