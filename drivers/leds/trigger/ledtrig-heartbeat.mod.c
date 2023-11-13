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
	{ 0xe4c02d0b, "led_trigger_register" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xcf01f610, "panic_notifier_list" },
	{ 0x9e69e4f0, "led_trigger_unregister" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49626748, "led_set_brightness_nosleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0BFB6FB9928D5E9BF3431EF");
