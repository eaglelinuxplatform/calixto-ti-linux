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

SYMBOL_CRC(phonet_stream_ops, 0x4e5eee45, "");
SYMBOL_CRC(pn_sock_get_port, 0x2e4d7228, "");
SYMBOL_CRC(pn_sock_hash, 0x46114f0a, "");
SYMBOL_CRC(pn_sock_unhash, 0xbf6b838d, "");
SYMBOL_CRC(phonet_header_ops, 0x89e4c154, "");
SYMBOL_CRC(phonet_proto_register, 0x6dd96846, "");
SYMBOL_CRC(phonet_proto_unregister, 0xe43e20b2, "");
SYMBOL_CRC(pn_skb_send, 0x3c41f9bc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa10179ab, "skb_free_datagram" },
	{ 0xf143e50f, "sock_queue_rcv_skb_reason" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1638c53f, "sock_i_uid" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x5e068c61, "register_net_sysctl" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xef706529, "consume_skb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa30f63fc, "dev_add_pack" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x5c6d77ac, "sock_common_getsockopt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xab5af012, "___pskb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x24d5c01a, "sock_no_connect" },
	{ 0x3c1417d0, "sock_common_setsockopt" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6769b918, "sock_register" },
	{ 0x36aeab1d, "datagram_poll" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x365fa5c1, "netlink_capable" },
	{ 0xe61a6643, "__current" },
	{ 0x34d08fa4, "rtnl_set_sk_err" },
	{ 0xa1861658, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1449535e, "module_put" },
	{ 0x48f5a611, "__sk_receive_skb" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0x45312867, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7e9acefb, "dev_remove_pack" },
	{ 0xb2942dad, "dev_get_by_index" },
	{ 0x5625faaa, "sk_free" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0x714b06aa, "nla_put" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0x8bcafe56, "rtnl_register_module" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xc7827b8f, "sock_no_sendpage" },
	{ 0xf758551a, "netif_rx" },
	{ 0x45abdd7b, "sock_common_recvmsg" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd8d8000e, "sk_common_release" },
	{ 0xcee00205, "seq_pad" },
	{ 0x3fbfd9c1, "sock_i_ino" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x5562e403, "prepare_to_wait_exclusive" },
	{ 0x94794b4e, "skb_recv_datagram" },
	{ 0x1a928ba4, "sock_alloc_send_pskb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xf3ea16fe, "rtnl_notify" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x9cc51289, "skb_clone" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0x46372883, "seq_puts" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b629328, "release_sock" },
	{ 0xa6e3c970, "_find_first_bit_le" },
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "74AE222EE2C28649F6704CB");
