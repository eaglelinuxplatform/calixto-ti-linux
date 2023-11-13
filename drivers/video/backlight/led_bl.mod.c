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
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x34d2c3cf, "of_count_phandle_with_args" },
	{ 0x7b4acbd0, "devm_of_led_get" },
	{ 0x661ffe2f, "of_property_count_elems_of_size" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x2e82f96a, "backlight_device_register" },
	{ 0x77c0a9cf, "led_sysfs_disable" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x83dd6206, "led_set_brightness" },
	{ 0xf08a1869, "backlight_device_unregister" },
	{ 0x8b9c7cc0, "led_sysfs_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("of:N*T*Cled-backlight");
MODULE_ALIAS("of:N*T*Cled-backlightC*");

MODULE_INFO(srcversion, "B3FC4F1021014D0E791BA6E");
