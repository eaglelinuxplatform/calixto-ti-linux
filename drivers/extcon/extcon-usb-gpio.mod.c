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
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xb98aac63, "pinctrl_pm_select_default_state" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc2ad49c3, "pinctrl_pm_select_sleep_state" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xa324780b, "extcon_set_state_sync" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xae6b96bb, "devm_extcon_dev_allocate" },
	{ 0xb8d66b53, "devm_extcon_dev_register" },
	{ 0x70e23312, "gpiod_set_debounce" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpioC*");

MODULE_INFO(srcversion, "0714297A62A397583B8853D");
