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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5bfd598c, "simple_attr_open" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xfea15b62, "input_event" },
	{ 0x2dbb0fa9, "input_mt_report_slot_state" },
	{ 0xd38f1873, "input_mt_report_pointer_emulation" },
	{ 0x54910a26, "touchscreen_report_pos" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xe61a6643, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0xeea0399, "strscpy" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0x425e5fb7, "touchscreen_parse_properties" },
	{ 0x9839cd76, "input_mt_init_slots" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb614efcc, "devm_device_add_group" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x3ecbeb4b, "debugfs_create_u16" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x74141ad, "simple_attr_read" },
	{ 0x5aabdf37, "simple_attr_write" },
	{ 0x7a339792, "simple_attr_release" },
	{ 0xe450090f, "simple_open" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "B3961803442651220B9AD93");
