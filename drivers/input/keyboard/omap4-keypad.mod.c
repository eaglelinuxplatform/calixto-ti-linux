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
	{ 0x5e29ca2, "bitmap_from_arr64" },
	{ 0xfea15b62, "input_event" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xbea1de1d, "dev_pm_clear_wake_irq" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xeff6e460, "matrix_keypad_parse_properties" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0x87249862, "input_set_capability" },
	{ 0xf349eb74, "matrix_keypad_build_keymap" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x4158b409, "dev_pm_set_wake_irq" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,omap4-keypad");
MODULE_ALIAS("of:N*T*Cti,omap4-keypadC*");

MODULE_INFO(srcversion, "B5CBB83738ED699D1A03ED3");
