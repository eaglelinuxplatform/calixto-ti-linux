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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0xfea15b62, "input_event" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x3bc709f, "pm_stay_awake" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x87249862, "input_set_capability" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x81a2253d, "devm_request_any_context_irq" },
	{ 0x3c92364, "device_get_next_child_node" },
	{ 0x4be2f4af, "devm_fwnode_gpiod_get_index" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0xd6d20ab5, "devm_gpio_request_one" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x8f672aa5, "gpiod_is_active_low" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x70e23312, "gpiod_set_debounce" },
	{ 0x979baacc, "gpiod_cansleep" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x3edd43d0, "device_get_child_node_count" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0xf969a542, "device_property_read_string" },
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeb03b707, "of_fwnode_ops" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8374079f, "pm_relax" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xdf36b4fe, "input_device_enabled" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AA304F720A39428E1CFD9A5");
