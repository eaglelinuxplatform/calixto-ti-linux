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
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xc0dc9a67, "w1_add_master_device" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x60009a5f, "w1_remove_master_device" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cti,omap3-1w");
MODULE_ALIAS("of:N*T*Cti,omap3-1wC*");
MODULE_ALIAS("of:N*T*Cti,am4372-hdq");
MODULE_ALIAS("of:N*T*Cti,am4372-hdqC*");

MODULE_INFO(srcversion, "5CC0012E104A5984602D492");
