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

SYMBOL_CRC(nf_nat_setup_info, 0xcaebfe48, "");
SYMBOL_CRC(nf_ct_nat_ext_add, 0x99e051a6, "_gpl");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0x811beede, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0x8961a5ac, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0x61172718, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0x2c85a881, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0x6a046dc3, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0x99e11b02, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0xd4120a83, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0x468cc5bc, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0xcf3fa90b, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0x8081cef2, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0x3617d405, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0x67cd05c1, "");
SYMBOL_CRC(nf_nat_follow_master, 0x523f329d, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0x8e24237c, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0x2710a063, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0x241a85a1, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x29d04f72, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0x53e0d02f, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0xabb7dc69, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xea04305f, "nf_ct_ext_add" },
	{ 0x4e70f340, "__do_once_done" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xa627be55, "nf_ip6_checksum" },
	{ 0x511ef809, "nf_hook_entries_insert_raw" },
	{ 0x4712670c, "xfrm_lookup" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x57b2186b, "nf_ct_seqadj_set" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x5adb68b1, "nf_ct_helper_expectfn_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc7826aa2, "__xfrm_decode_session" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0xf27bb6a8, "nf_ct_helper_expectfn_register" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xf5cd2774, "ip6_route_me_harder" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x658d457a, "nf_conntrack_tuple_taken" },
	{ 0x92997ed8, "_printk" },
	{ 0x917568d3, "nf_ct_iterate_cleanup_net" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x1449535e, "module_put" },
	{ 0x3b07947f, "ipv6_dev_get_saddr" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x41befd5d, "nf_ct_expect_related_report" },
	{ 0x4d3d2a, "nf_conntrack_alter_reply" },
	{ 0xf14d0631, "ip_route_me_harder" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xc3df8e88, "nf_hook_entries_delete_raw" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0xc7f98859, "inet_select_addr" },
	{ 0x71c90087, "memcmp" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xf4afda6, "skb_checksum" },
	{ 0x5f754e5a, "memset" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2488d0e0, "nf_ip_checksum" },
	{ 0xa7e9bc70, "nf_ct_iterate_destroy" },
	{ 0x91a9c232, "__siphash_unaligned" },
	{ 0x6ce87238, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x18c95432, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7a9663ef, "__skb_checksum" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x53036ac9, "dst_release" },
	{ 0x45d5a7cd, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xf65e6332, "nf_nat_hook" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "65316081B51EF2B948F701F");
