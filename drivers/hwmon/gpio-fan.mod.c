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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x3d9f12c6, "gpiod_count" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x12f222b7, "devm_hwmon_device_register_with_groups" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x1beecb6e, "devm_thermal_of_cooling_device_register" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x7bdac3ca, "of_prop_next_u32" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hwmon");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "1C3B2FBC302E519D7D8CCEC");
