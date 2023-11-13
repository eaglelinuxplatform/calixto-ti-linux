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
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x86a0e65, "pwm_apply_state" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf08a1869, "backlight_device_unregister" },
	{ 0xa50e0dba, "pwm_free" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x6de6683e, "devm_pwm_get" },
	{ 0x2e82f96a, "backlight_device_register" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xfdba06aa, "regulator_is_enabled" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x45962907, "devm_kfree" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xf8206c2, "pwm_request" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "0CFBEBC4D40EA45B70A8A88");
