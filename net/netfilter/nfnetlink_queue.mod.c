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
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0x853199eb, "nf_register_queue_handler" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x3fcc46d3, "nf_reinject" },
	{ 0x25d89497, "nf_ct_hook" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xf61c234b, "__nla_reserve" },
	{ 0x714b06aa, "nla_put" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xc9a9b50a, "skb_tx_error" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x2ae8bb86, "skb_zerocopy" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x1b2315eb, "skb_zerocopy_headlen" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfec8a246, "skb_checksum_help" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc2b8eda2, "netstamp_needed_key" },
	{ 0x5f2c19e0, "nfnl_ct_hook" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x7171121c, "overflowgid" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8399b0d1, "__skb_gso_segment" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7e319881, "nf_queue_entry_get_refs" },
	{ 0x11756637, "nf_queue_entry_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0x9d669763, "memcpy" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xb49adf6f, "skb_copy_expand" },
	{ 0xab5af012, "___pskb_trim" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x1449535e, "module_put" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "F5230AAB5DEE53ABA33C9DC");
