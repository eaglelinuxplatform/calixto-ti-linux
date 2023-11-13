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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x637493f3, "__wake_up" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x5a924416, "gpiod_get_raw_value" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0x582f4d93, "spi_sync" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x54910a26, "touchscreen_report_pos" },
	{ 0xfea15b62, "input_event" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x80748366, "spi_setup" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x87249862, "input_set_capability" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0x425e5fb7, "touchscreen_parse_properties" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xd6d20ab5, "devm_gpio_request_one" },
	{ 0x70e23312, "gpiod_set_debounce" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x12f222b7, "devm_hwmon_device_register_with_groups" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xb614efcc, "devm_device_add_group" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x45962907, "devm_kfree" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x7a185693, "of_property_read_variable_u16_array" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hwmon");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "743430915D5D58EF7666845");
