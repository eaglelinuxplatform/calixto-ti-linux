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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xdd69bc72, "nft_fwd_dup_netdev_offload" },
	{ 0xf34237a1, "nft_chain_validate_hooks" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xdd4b2942, "nf_fwd_netdev_egress" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0xcf08021a, "neigh_xmit" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "76760650023775B169A7EB7");
