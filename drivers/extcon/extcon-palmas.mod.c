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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4534861e, "regmap_read" },
	{ 0xa324780b, "extcon_set_state_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x70e23312, "gpiod_set_debounce" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xae6b96bb, "devm_extcon_dev_allocate" },
	{ 0xb8d66b53, "devm_extcon_dev_register" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-usb");
MODULE_ALIAS("of:N*T*Cti,palmas-usbC*");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vid");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vidC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb");
MODULE_ALIAS("of:N*T*Cti,twl6035-usbC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vid");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vidC*");

MODULE_INFO(srcversion, "99DA795D8B80DE73C0F74FA");
