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
	{ 0xe914e41e, "strcpy" },
	{ 0xa432e62d, "bt_procfs_cleanup" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x5af52c69, "bt_procfs_init" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x109eed98, "set_user_nice" },
	{ 0x5ea40bcf, "sock_no_sendmsg" },
	{ 0x943dc8aa, "crc32_be" },
	{ 0x9d669763, "memcpy" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x24d5c01a, "sock_no_connect" },
	{ 0x637493f3, "__wake_up" },
	{ 0x47c9369a, "__module_get" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xe61a6643, "__current" },
	{ 0xa1861658, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x1449535e, "module_put" },
	{ 0x9df7532e, "bt_sock_link" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0x8b1e52b6, "fput" },
	{ 0x4253aa7e, "down_write" },
	{ 0x45312867, "init_net" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x695e33e9, "__module_put_and_kthread_exit" },
	{ 0x5625faaa, "sk_free" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x71c90087, "memcmp" },
	{ 0xc08e7dfc, "sock_no_bind" },
	{ 0x55b304b0, "l2cap_is_socket" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0xfbe071f0, "bt_sock_unlink" },
	{ 0x462add47, "sock_no_recvmsg" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xf758551a, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfb1d7438, "down_read" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xa80342cb, "bt_sock_register" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x27faf67, "sock_no_getname" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x56a2100e, "sockfd_lookup" },
	{ 0x2e44d803, "kernel_sendmsg" },
	{ 0xa7b3181c, "up_read" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9B81BD6253270BF3BBDADA1");
