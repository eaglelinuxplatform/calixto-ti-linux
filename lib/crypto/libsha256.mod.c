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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(sha224_final, 0xa3fea172, "");
SYMBOL_CRC(sha224_update, 0xf3107926, "");
SYMBOL_CRC(sha256, 0xe39b2ea5, "");
SYMBOL_CRC(sha256_final, 0x61e272c9, "");
SYMBOL_CRC(sha256_update, 0x7b5b8f31, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9BC043AEA309149E489FAB8");
