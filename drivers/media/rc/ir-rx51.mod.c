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
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7a9fee92, "pwm_get" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x86a0e65, "pwm_apply_state" },
	{ 0xe0bc36c2, "pwm_put" },
	{ 0x637493f3, "__wake_up" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d669763, "memcpy" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xf268f7bd, "devm_rc_allocate_device" },
	{ 0x808d2604, "devm_rc_register_device" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Cnokia,n900-ir");
MODULE_ALIAS("of:N*T*Cnokia,n900-irC*");

MODULE_INFO(srcversion, "1762FD949CB8D1DCD80DD98");
