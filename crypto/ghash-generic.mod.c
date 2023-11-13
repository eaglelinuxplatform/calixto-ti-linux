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
	{ 0xb8a804a2, "crypto_register_shash" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x83581089, "gf128mul_init_4k_lle" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5a4d313e, "gf128mul_4k_lle" },
	{ 0x7acda05e, "crypto_unregister_shash" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "gf128mul");


MODULE_INFO(srcversion, "898564ECBC481CBC5408CB4");
