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
	{ 0xf34237a1, "nft_chain_validate_hooks" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xa8288e3c, "nf_reject_skb_v6_unreach" },
	{ 0xcefe3cb4, "nf_reject_skb_v4_unreach" },
	{ 0x55895bb5, "nf_reject_skb_v6_tcp_reset" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0x62018bb3, "nf_reject_skb_v4_tcp_reset" },
	{ 0x44d8a3, "nft_reject_init" },
	{ 0x9ec5554d, "nft_reject_dump" },
	{ 0x1e8872d6, "nft_reject_policy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv6,nf_reject_ipv4,nft_reject");


MODULE_INFO(srcversion, "E07BBD3213132D7E6CD9858");
