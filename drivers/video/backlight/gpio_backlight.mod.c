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
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x6c70f75a, "devm_backlight_device_register" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0xc1f94c5c, "gpiod_get_direction" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-backlight");
MODULE_ALIAS("of:N*T*Cgpio-backlightC*");

MODULE_INFO(srcversion, "78111C59526E4CCA8C55232");
