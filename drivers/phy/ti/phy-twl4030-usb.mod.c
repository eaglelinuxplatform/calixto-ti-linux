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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x1255d9d2, "devm_phy_create" },
	{ 0x67da50dc, "__devm_of_phy_provider_register" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0xa64a9908, "device_create_file" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x414ea59c, "phy_create_lookup" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x4214047c, "of_phy_simple_xlate" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x214a0676, "device_remove_file" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0x9492220, "musb_mailbox" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "musb_hdrc");

MODULE_ALIAS("of:N*T*Cti,twl4030-usb");
MODULE_ALIAS("of:N*T*Cti,twl4030-usbC*");

MODULE_INFO(srcversion, "75DF598ECE8B68C9CE51923");
