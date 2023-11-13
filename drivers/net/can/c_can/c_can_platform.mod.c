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
	{ 0x8180199d, "c_can_power_up" },
	{ 0x4e0577fc, "netif_device_attach" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x85ec2d87, "c_can_power_down" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6d8fb77, "netif_device_detach" },
	{ 0x836965fe, "unregister_c_can_dev" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x3506de0a, "free_c_can_dev" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x77efac6a, "alloc_c_can_dev" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1981fc7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x493867fd, "of_property_read_u32_index" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x9f5e362b, "register_c_can_dev" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x4534861e, "regmap_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "B959927DCAA3D55B7158CB5");
