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
	{ 0x283e727a, "nft_reg_track_update" },
	{ 0x6076d899, "nft_expr_reduce_bitwise" },
	{ 0xf34237a1, "nft_chain_validate_hooks" },
	{ 0x714b06aa, "nla_put" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x1f8529bb, "nf_sk_lookup_slow_v6" },
	{ 0xd6c27114, "sock_gen_put" },
	{ 0x98e288d2, "nf_sk_lookup_slow_v4" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_socket_ipv6,nf_socket_ipv4");


MODULE_INFO(srcversion, "6EFE40F288FE5556D6334D1");
