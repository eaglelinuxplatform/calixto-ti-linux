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
	{ 0x5852cbdf, "crypto_register_rng" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0xbb6508da, "random_get_entropy_fallback" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd132618c, "crypto_unregister_rng" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "841A8ED39A436A47777901D");
