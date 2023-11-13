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
	{ 0x714b06aa, "nla_put" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2692191, "nf_defrag_ipv4_enable" },
	{ 0xefe7da83, "nf_defrag_ipv6_enable" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x36cbf366, "nf_defrag_ipv4_disable" },
	{ 0x86f9b8a, "nf_defrag_ipv6_disable" },
	{ 0x7dc4e0bd, "nf_tproxy_get_sock_v4" },
	{ 0x6b5a1209, "nf_tproxy_laddr4" },
	{ 0xe6efd823, "nf_tproxy_get_sock_v6" },
	{ 0x137239ab, "nf_tproxy_laddr6" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xd6c27114, "sock_gen_put" },
	{ 0x4f7d5ab5, "nf_tproxy_handle_time_wait6" },
	{ 0x669a7a53, "nf_tproxy_handle_time_wait4" },
	{ 0x55c94cf2, "sock_edemux" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_defrag_ipv4,nf_defrag_ipv6,nf_tproxy_ipv4,nf_tproxy_ipv6");


MODULE_INFO(srcversion, "2BB29D161C6E54E0D2A9DB6");
