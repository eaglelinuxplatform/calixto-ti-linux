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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(lp55xx_deinit_device, 0x470fdc46, "_gpl");
SYMBOL_CRC(lp55xx_init_device, 0xcc5879da, "_gpl");
SYMBOL_CRC(lp55xx_is_extclk_used, 0xdb52c4ba, "_gpl");
SYMBOL_CRC(lp55xx_of_populate_pdata, 0x9f62537d, "_gpl");
SYMBOL_CRC(lp55xx_read, 0xa99db34b, "_gpl");
SYMBOL_CRC(lp55xx_register_leds, 0x2fbc0982, "_gpl");
SYMBOL_CRC(lp55xx_register_sysfs, 0xc65d965c, "_gpl");
SYMBOL_CRC(lp55xx_unregister_sysfs, 0x43180bfd, "_gpl");
SYMBOL_CRC(lp55xx_update_bits, 0x1709b7a9, "_gpl");
SYMBOL_CRC(lp55xx_write, 0x3a3ea23b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0xb5dd1bec, "gpiod_set_consumer_name" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x163ce293, "of_property_read_variable_u8_array" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xef6d0a5, "of_get_next_available_child" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");


MODULE_INFO(srcversion, "EBCCE106A894A41F4147926");
