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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x433d24ac, "nft_fib6_eval_type" },
	{ 0x4b04df43, "nft_fib6_eval" },
	{ 0x3ba2336a, "nft_fib4_eval_type" },
	{ 0x1220fcbb, "nft_fib4_eval" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x1183add5, "nft_fib_init" },
	{ 0x231afccb, "nft_fib_dump" },
	{ 0x573c7138, "nft_fib_validate" },
	{ 0x22c10ba3, "nft_fib_reduce" },
	{ 0x6c18ec7d, "nft_fib_policy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib_ipv6,nft_fib_ipv4,nft_fib");


MODULE_INFO(srcversion, "D4253E7B13A864B5D71401F");
