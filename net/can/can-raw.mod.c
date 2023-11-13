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
	{ 0xa10179ab, "skb_free_datagram" },
	{ 0xf143e50f, "sock_queue_rcv_skb_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcd7d1c3f, "_copy_to_iter" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x96a69000, "can_rx_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x24d5c01a, "sock_no_connect" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8f61f245, "sk_error_report" },
	{ 0xb5685e97, "can_proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x36aeab1d, "datagram_poll" },
	{ 0xc699b4a, "__sock_recv_cmsgs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x976b2644, "can_send" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0xc924678a, "__kmalloc_node_track_caller" },
	{ 0xb2942dad, "dev_get_by_index" },
	{ 0x5625faaa, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0x9f37c57d, "sock_recv_errqueue" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0xc7827b8f, "sock_no_sendpage" },
	{ 0xa37377f0, "sock_cmsg_send" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x94794b4e, "skb_recv_datagram" },
	{ 0x1a928ba4, "sock_alloc_send_pskb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9cc51289, "skb_clone" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0xf4ff9af0, "can_proto_unregister" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb12ab068, "sock_gettstamp" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x903b4efc, "can_rx_register" },
	{ 0x7b629328, "release_sock" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "3197B110EA85A12CB7EC3DA");
