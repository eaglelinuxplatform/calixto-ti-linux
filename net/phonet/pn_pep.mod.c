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
	{ 0x62741661, "skb_copy_bits" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xef706529, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4e5eee45, "phonet_stream_ops" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x3c41f9bc, "pn_skb_send" },
	{ 0x9d669763, "memcpy" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe43e20b2, "phonet_proto_unregister" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x48f5a611, "__sk_receive_skb" },
	{ 0x5625faaa, "sk_free" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x2e4d7228, "pn_sock_get_port" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xd8d8000e, "sk_common_release" },
	{ 0xed0858a, "sock_rfree" },
	{ 0x6dd96846, "phonet_proto_register" },
	{ 0x46114f0a, "pn_sock_hash" },
	{ 0x37ba4336, "skb_set_owner_w" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x94794b4e, "skb_recv_datagram" },
	{ 0x1a928ba4, "sock_alloc_send_pskb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xa564252d, "sk_stream_wait_connect" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0xbf6b838d, "pn_sock_unhash" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0x7b629328, "release_sock" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "phonet");


MODULE_INFO(srcversion, "559E3FD83C8440E57E2037E");
