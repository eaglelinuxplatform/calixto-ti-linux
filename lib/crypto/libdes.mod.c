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

SYMBOL_CRC(des3_ede_decrypt, 0x574eda34, "_gpl");
SYMBOL_CRC(des3_ede_encrypt, 0x856a5ef3, "_gpl");
SYMBOL_CRC(des3_ede_expand_key, 0xa77b3b62, "_gpl");
SYMBOL_CRC(des_decrypt, 0xa6aa9857, "_gpl");
SYMBOL_CRC(des_encrypt, 0x0105b595, "_gpl");
SYMBOL_CRC(des_expand_key, 0xa8fb743d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7683110462500D43AC2856");
