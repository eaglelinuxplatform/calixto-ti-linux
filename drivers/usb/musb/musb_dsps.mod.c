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
	{ 0x6af8c6dc, "musb_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf0f95e51, "musb_readl" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x9d669763, "memcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x88a45189, "cppi41_dma_controller_create" },
	{ 0x239bc445, "phy_power_off" },
	{ 0x878aa441, "phy_exit" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x78ce6f43, "debugfs_create_regset32" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2734197f, "musb_readb" },
	{ 0xb4a8834, "musb_writeb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1a198313, "musb_queue_resume_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0xe6ff0ece, "device_set_of_node_from_dev" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xe983d7f1, "musb_get_mode" },
	{ 0x5dbb64d6, "usb_get_maximum_speed" },
	{ 0xd7b4d559, "platform_device_add_data" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0x1467da49, "platform_device_put" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe9f55364, "of_match_node" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0xf8740bf4, "of_iomap" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x552626c4, "usb_get_dr_mode" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xcaf22e05, "musb_interrupt" },
	{ 0x92997ed8, "_printk" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x2a6ef5b0, "devm_usb_get_phy_by_phandle" },
	{ 0x98bbaff2, "devm_phy_get" },
	{ 0x4d4c3ded, "phy_init" },
	{ 0xd27c06a3, "phy_power_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8e8f6627, "cppi41_dma_controller_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "musb_hdrc,usb-common");

MODULE_ALIAS("of:N*T*Cti,musb-am33xx");
MODULE_ALIAS("of:N*T*Cti,musb-am33xxC*");
MODULE_ALIAS("of:N*T*Cti,musb-dm816");
MODULE_ALIAS("of:N*T*Cti,musb-dm816C*");

MODULE_INFO(srcversion, "76839E67056389B79C908CC");
