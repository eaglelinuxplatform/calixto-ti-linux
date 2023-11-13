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

SYMBOL_CRC(omap_usb2_set_comparator, 0x00d48f33, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x34145292, "usb_get_phy" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x4001ce5e, "soc_device_match" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x1981fc7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x493867fd, "of_property_read_u32_index" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x1255d9d2, "devm_phy_create" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x67da50dc, "__devm_of_phy_provider_register" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x7535ef29, "of_find_device_by_node" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x14a9184c, "omap_control_phy_power" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4214047c, "of_phy_simple_xlate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap-usb2");
MODULE_ALIAS("of:N*T*Cti,omap-usb2C*");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2C*");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,am654-usb2");
MODULE_ALIAS("of:N*T*Cti,am654-usb2C*");

MODULE_INFO(srcversion, "915AFF75F182ACC880C6277");
