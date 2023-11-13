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
	{ 0x4d4c3ded, "phy_init" },
	{ 0xd27c06a3, "phy_power_on" },
	{ 0xf0f95e51, "musb_readl" },
	{ 0x6af8c6dc, "musb_writel" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x239bc445, "phy_power_off" },
	{ 0x878aa441, "phy_exit" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xe35a02d6, "omap_control_usb_set_mode" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xcaf22e05, "musb_interrupt" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2734197f, "musb_readb" },
	{ 0x719a5e41, "musb_readw" },
	{ 0x98bbaff2, "devm_phy_get" },
	{ 0x2a6ef5b0, "devm_usb_get_phy_by_phandle" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xe6ff0ece, "device_set_of_node_from_dev" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x7535ef29, "of_find_device_by_node" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0x5f754e5a, "memset" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x2bf043bf, "of_irq_get_byname" },
	{ 0xd7b4d559, "platform_device_add_data" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0x1467da49, "platform_device_put" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x7aedadb0, "musb_set_peripheral" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x801d36c6, "musb_set_host" },
	{ 0xdc974313, "musbhs_dma_controller_create" },
	{ 0x9c4f249d, "musbhs_dma_controller_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "musb_hdrc");

MODULE_ALIAS("of:N*T*Cti,omap4-musb");
MODULE_ALIAS("of:N*T*Cti,omap4-musbC*");
MODULE_ALIAS("of:N*T*Cti,omap3-musb");
MODULE_ALIAS("of:N*T*Cti,omap3-musbC*");

MODULE_INFO(srcversion, "F534021BAE00CC236A545BE");
