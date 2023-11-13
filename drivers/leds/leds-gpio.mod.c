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
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x979baacc, "gpiod_cansleep" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0xb5dd1bec, "gpiod_set_consumer_name" },
	{ 0x3edd43d0, "device_get_child_node_count" },
	{ 0x3c92364, "device_get_next_child_node" },
	{ 0xc6547c59, "led_init_default_state_get" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x4be2f4af, "devm_fwnode_gpiod_get_index" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xd6d20ab5, "devm_gpio_request_one" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "4769AB7588F43C9420B6DF6");
