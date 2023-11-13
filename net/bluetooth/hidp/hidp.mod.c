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

SYMBOL_CRC(hidp_hid_driver, 0x4b43c3c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x65572367, "l2cap_unregister_user" },
	{ 0x4dec6038, "memscan" },
	{ 0xa432e62d, "bt_procfs_cleanup" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x5af52c69, "bt_procfs_init" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x109eed98, "set_user_nice" },
	{ 0x5ea40bcf, "sock_no_sendmsg" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x24d5c01a, "sock_no_connect" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x47c9369a, "__module_get" },
	{ 0x51943974, "get_device" },
	{ 0xda54e138, "l2cap_conn_get" },
	{ 0x48151c29, "hid_allocate_device" },
	{ 0x341b95fb, "hid_destroy_device" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x8e0ee2fe, "l2cap_register_user" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xe61a6643, "__current" },
	{ 0xa1861658, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x9df7532e, "bt_sock_link" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b1e52b6, "fput" },
	{ 0x4253aa7e, "down_write" },
	{ 0x45312867, "init_net" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x695e33e9, "__module_put_and_kthread_exit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5625faaa, "sk_free" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0x71c90087, "memcmp" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xc08e7dfc, "sock_no_bind" },
	{ 0x55b304b0, "l2cap_is_socket" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0xccec0039, "l2cap_conn_put" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfbe071f0, "bt_sock_unlink" },
	{ 0x462add47, "sock_no_recvmsg" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfea15b62, "input_event" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfb1d7438, "down_read" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xc6a6bcfb, "hid_input_report" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xeea0399, "strscpy" },
	{ 0xa80342cb, "bt_sock_register" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x27faf67, "sock_no_getname" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xe8b4798, "hid_parse_report" },
	{ 0x56a2100e, "sockfd_lookup" },
	{ 0x2e44d803, "kernel_sendmsg" },
	{ 0xa7b3181c, "up_read" },
	{ 0x58df116c, "hid_ignore" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0xc3779e9b, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "CC40CD58081A3CE86C5FE47");
