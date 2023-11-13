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
	{ 0x815588a6, "clk_enable" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x1981fc7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x1255d9d2, "devm_phy_create" },
	{ 0x67da50dc, "__devm_of_phy_provider_register" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0x4214047c, "of_phy_simple_xlate" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4534861e, "regmap_read" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,dm8168-usb-phy");
MODULE_ALIAS("of:N*T*Cti,dm8168-usb-phyC*");

MODULE_INFO(srcversion, "D30B4CA8E3A4BD3239A3CB7");
