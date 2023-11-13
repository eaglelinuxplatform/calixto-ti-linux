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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x3edd43d0, "device_get_child_node_count" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x3c92364, "device_get_next_child_node" },
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0x4534861e, "regmap_read" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x989e4a7, "device_property_read_u8_array" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "B4588B426406742359E21E6");
