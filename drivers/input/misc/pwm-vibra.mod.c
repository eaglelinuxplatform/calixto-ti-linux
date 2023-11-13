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
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x6de6683e, "devm_pwm_get" },
	{ 0x86a0e65, "pwm_apply_state" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x87249862, "input_set_capability" },
	{ 0x502d2707, "input_ff_create_memless" },
	{ 0xf70284f2, "input_register_device" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("of:N*T*Cpwm-vibrator");
MODULE_ALIAS("of:N*T*Cpwm-vibratorC*");

MODULE_INFO(srcversion, "B5113D290F06136F0438B4C");
