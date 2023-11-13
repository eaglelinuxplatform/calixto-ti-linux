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

SYMBOL_CRC(ipv4_synproxy_hook, 0xdfc51e0f, "_gpl");
SYMBOL_CRC(ipv6_synproxy_hook, 0x9c746019, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_fini, 0xf929b67a, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_init, 0x28434b89, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_fini, 0x36a76568, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_init, 0xe7cd989b, "_gpl");
SYMBOL_CRC(synproxy_init_timestamp_cookie, 0x1f099794, "_gpl");
SYMBOL_CRC(synproxy_net_id, 0xca9fc082, "_gpl");
SYMBOL_CRC(synproxy_parse_options, 0xb69870dc, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack, 0xb74cf344, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack_ipv6, 0x0668ba0e, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack, 0x13ff278f, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack_ipv6, 0xeab236a9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xcbdfe454, "nf_ct_tmpl_alloc" },
	{ 0xea04305f, "nf_ct_ext_add" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe929b214, "nf_ct_tmpl_free" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x46372883, "seq_puts" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf14d0631, "ip_route_me_harder" },
	{ 0xcc5290ad, "ip_local_out" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x5f754e5a, "memset" },
	{ 0xa317ff37, "__nf_ip6_route" },
	{ 0x4712670c, "xfrm_lookup" },
	{ 0x79b21b27, "ip6_local_out" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x18428692, "__cookie_v6_init_sequence" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0x9843f501, "__cookie_v4_check" },
	{ 0x9f5c6dc2, "__cookie_v6_check" },
	{ 0x27950dfc, "nf_ct_seqadj_init" },
	{ 0xef706529, "consume_skb" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "246D577FD42568BDE6679A3");
