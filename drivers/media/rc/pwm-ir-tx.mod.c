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
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x6de6683e, "devm_pwm_get" },
	{ 0xf268f7bd, "devm_rc_allocate_device" },
	{ 0x808d2604, "devm_rc_register_device" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x86a0e65, "pwm_apply_state" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Cpwm-ir-tx");
MODULE_ALIAS("of:N*T*Cpwm-ir-txC*");

MODULE_INFO(srcversion, "7E6D2CFB2736926271BAB9E");
