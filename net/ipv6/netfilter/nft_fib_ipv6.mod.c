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

SYMBOL_CRC(nft_fib6_eval, 0x4b04df43, "_gpl");
SYMBOL_CRC(nft_fib6_eval_type, 0x433d24ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ef56660, "ipv6_chk_addr" },
	{ 0xa317ff37, "__nf_ip6_route" },
	{ 0x53036ac9, "dst_release" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe89e829d, "nft_register_expr" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x9b55c7, "nft_fib_store_result" },
	{ 0x36634aa3, "ip6_route_lookup" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x1183add5, "nft_fib_init" },
	{ 0x231afccb, "nft_fib_dump" },
	{ 0x573c7138, "nft_fib_validate" },
	{ 0x22c10ba3, "nft_fib_reduce" },
	{ 0x6c18ec7d, "nft_fib_policy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "E124A45FF723FE9EBFCDBF2");
