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

SYMBOL_CRC(tsc200x_pm_ops, 0xe2208a6c, "_gpl");
SYMBOL_CRC(tsc200x_probe, 0x45542ca1, "_gpl");
SYMBOL_CRC(tsc200x_regmap_config, 0x46478ada, "_gpl");
SYMBOL_CRC(tsc200x_remove, 0xb7ed5de6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x54910a26, "touchscreen_report_pos" },
	{ 0xfea15b62, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x87249862, "input_set_capability" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0x425e5fb7, "touchscreen_parse_properties" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xf70284f2, "input_register_device" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "278222F23BDB7F4C995AB1B");
