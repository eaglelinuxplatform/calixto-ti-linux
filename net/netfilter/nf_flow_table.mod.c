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

SYMBOL_CRC(flow_offload_add, 0x7778eaa0, "_gpl");
SYMBOL_CRC(flow_offload_alloc, 0xea6b24de, "_gpl");
SYMBOL_CRC(flow_offload_free, 0xff9f29d8, "_gpl");
SYMBOL_CRC(flow_offload_lookup, 0xfdca01be, "_gpl");
SYMBOL_CRC(flow_offload_refresh, 0xa96609df, "_gpl");
SYMBOL_CRC(flow_offload_route_init, 0x385d274c, "_gpl");
SYMBOL_CRC(flow_offload_teardown, 0x02fcf971, "_gpl");
SYMBOL_CRC(nf_flow_dnat_port, 0x64806fd5, "_gpl");
SYMBOL_CRC(nf_flow_snat_port, 0xdc599d46, "_gpl");
SYMBOL_CRC(nf_flow_table_cleanup, 0x313ec3c5, "_gpl");
SYMBOL_CRC(nf_flow_table_free, 0x244c1fd4, "_gpl");
SYMBOL_CRC(nf_flow_table_init, 0x8802612f, "_gpl");
SYMBOL_CRC(nf_flow_offload_ip_hook, 0x016c4da5, "_gpl");
SYMBOL_CRC(nf_flow_offload_ipv6_hook, 0xf5102176, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv4, 0x7c5272bb, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv6, 0x67b02d8f, "_gpl");
SYMBOL_CRC(nf_flow_table_offload_setup, 0x7a1a0847, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x200b2041, "in6addr_any" },
	{ 0x2d17728f, "flow_rule_alloc" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x125c5ab7, "skb_gso_validate_network_len" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcf08021a, "neigh_xmit" },
	{ 0x2d52254e, "flow_block_cb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6011eb03, "rhashtable_init" },
	{ 0x3b08a01d, "rhashtable_walk_enter" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xe61a6643, "__current" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xb2942dad, "dev_get_by_index" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x1cea3104, "rhashtable_walk_start_check" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf05c5710, "flow_indr_dev_setup_offload" },
	{ 0x621eb946, "rhashtable_walk_stop" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x5f754e5a, "memset" },
	{ 0xa7119f65, "rht_bucket_nested_insert" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xac62049e, "rhashtable_destroy" },
	{ 0xfb1d7438, "down_read" },
	{ 0x6ce87238, "inet_proto_csum_replace16" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6bb04338, "rhashtable_insert_slow" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x50f3795b, "neigh_destroy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x9fac5147, "nf_ct_acct_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x53036ac9, "dst_release" },
	{ 0x21a9138a, "rhashtable_walk_next" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xa7b3181c, "up_read" },
	{ 0xd5dd942d, "rhashtable_walk_exit" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "496774ADE3A64B83D6FE188");
