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
	{ 0x574d857, "xt_register_target" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x36a76568, "nf_synproxy_ipv6_fini" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0xe7cd989b, "nf_synproxy_ipv6_init" },
	{ 0xacf79f82, "xt_unregister_target" },
	{ 0xa627be55, "nf_ip6_checksum" },
	{ 0xb69870dc, "synproxy_parse_options" },
	{ 0x668ba0e, "synproxy_recv_client_ack_ipv6" },
	{ 0xef706529, "consume_skb" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xeab236a9, "synproxy_send_client_synack_ipv6" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "A65220212D1F6A380653B93");
