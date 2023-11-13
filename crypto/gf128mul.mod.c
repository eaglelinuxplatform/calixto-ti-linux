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

SYMBOL_CRC(gf128mul_4k_bbe, 0xd70d35a1, "");
SYMBOL_CRC(gf128mul_4k_lle, 0x5a4d313e, "");
SYMBOL_CRC(gf128mul_64k_bbe, 0x5e373fb4, "");
SYMBOL_CRC(gf128mul_bbe, 0x1068004b, "");
SYMBOL_CRC(gf128mul_free_64k, 0xd60736ec, "");
SYMBOL_CRC(gf128mul_init_4k_bbe, 0x9b2560b9, "");
SYMBOL_CRC(gf128mul_init_4k_lle, 0x83581089, "");
SYMBOL_CRC(gf128mul_init_64k_bbe, 0x3755f990, "");
SYMBOL_CRC(gf128mul_lle, 0x9e13f6f6, "");
SYMBOL_CRC(gf128mul_x8_ble, 0x7a1bcd59, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "13C8812C6225043F4B51008");
