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

SYMBOL_CRC(nft_fib_policy, 0x6c18ec7d, "");
SYMBOL_CRC(nft_fib_dump, 0x231afccb, "_gpl");
SYMBOL_CRC(nft_fib_init, 0x1183add5, "_gpl");
SYMBOL_CRC(nft_fib_reduce, 0x22c10ba3, "_gpl");
SYMBOL_CRC(nft_fib_store_result, 0x009b55c7, "_gpl");
SYMBOL_CRC(nft_fib_validate, 0x573c7138, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf34237a1, "nft_chain_validate_hooks" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x328a05f1, "strncpy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x283e727a, "nft_reg_track_update" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "CA28BE3B32F5CB6A2902DC9");
