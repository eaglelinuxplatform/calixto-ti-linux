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
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf349eb74, "matrix_keypad_build_keymap" },
	{ 0x87249862, "input_set_capability" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5b11e76c, "gpiod_direction_output_raw" },
	{ 0x27a8b3d2, "gpiod_direction_input" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x3d9f12c6, "gpiod_count" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x9072477d, "gpiod_set_raw_value_cansleep" },
	{ 0x5f754e5a, "memset" },
	{ 0xef4769d9, "gpiod_get_raw_value_cansleep" },
	{ 0xfea15b62, "input_event" },
	{ 0x9d669763, "memcpy" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "C4044129BB47030EEEBF983");
