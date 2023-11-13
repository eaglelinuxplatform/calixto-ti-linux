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
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x86a0e65, "pwm_apply_state" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3edd43d0, "device_get_child_node_count" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x3c92364, "device_get_next_child_node" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xc6547c59, "led_init_default_state_get" },
	{ 0x7bf7b1ac, "devm_fwnode_pwm_get" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeb03b707, "of_fwnode_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("of:N*T*Cpwm-leds");
MODULE_ALIAS("of:N*T*Cpwm-ledsC*");

MODULE_INFO(srcversion, "4C8952602F0E6A1EF79C66F");
