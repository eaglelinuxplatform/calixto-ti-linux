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

SYMBOL_CRC(bt_accept_dequeue, 0x472de1f5, "");
SYMBOL_CRC(bt_accept_enqueue, 0x442be99e, "");
SYMBOL_CRC(bt_accept_unlink, 0x90af1b04, "");
SYMBOL_CRC(bt_procfs_cleanup, 0xa432e62d, "");
SYMBOL_CRC(bt_procfs_init, 0x5af52c69, "");
SYMBOL_CRC(bt_sock_ioctl, 0x1220d700, "");
SYMBOL_CRC(bt_sock_link, 0x9df7532e, "");
SYMBOL_CRC(bt_sock_poll, 0x57649756, "");
SYMBOL_CRC(bt_sock_reclassify_lock, 0xc181807f, "");
SYMBOL_CRC(bt_sock_recvmsg, 0x3cd71f63, "");
SYMBOL_CRC(bt_sock_register, 0xa80342cb, "");
SYMBOL_CRC(bt_sock_stream_recvmsg, 0x0d391033, "");
SYMBOL_CRC(bt_sock_unlink, 0xfbe071f0, "");
SYMBOL_CRC(bt_sock_unregister, 0x8fea24bd, "");
SYMBOL_CRC(bt_sock_wait_ready, 0xc2454e5f, "");
SYMBOL_CRC(bt_sock_wait_state, 0xc5c11172, "");
SYMBOL_CRC(bt_debugfs, 0x1fe8a83e, "_gpl");
SYMBOL_CRC(__hci_cmd_send, 0x9edbec28, "");
SYMBOL_CRC(hci_alloc_dev_priv, 0xb64afbf2, "");
SYMBOL_CRC(hci_free_dev, 0x8730615d, "");
SYMBOL_CRC(hci_recv_diag, 0x10c384db, "");
SYMBOL_CRC(hci_recv_frame, 0xeb02ea03, "");
SYMBOL_CRC(hci_register_cb, 0x6a332bb5, "");
SYMBOL_CRC(hci_register_dev, 0x86816953, "");
SYMBOL_CRC(hci_release_dev, 0xe8259c1d, "");
SYMBOL_CRC(hci_reset_dev, 0xa59293cc, "");
SYMBOL_CRC(hci_resume_dev, 0x8caf1c77, "");
SYMBOL_CRC(hci_set_fw_info, 0x538bff85, "");
SYMBOL_CRC(hci_set_hw_info, 0x381b1660, "");
SYMBOL_CRC(hci_suspend_dev, 0xf8c85ed5, "");
SYMBOL_CRC(hci_unregister_cb, 0x025a8576, "");
SYMBOL_CRC(hci_unregister_dev, 0x3b439a1c, "");
SYMBOL_CRC(hci_conn_check_secure, 0x1953eca4, "");
SYMBOL_CRC(hci_conn_security, 0xed99e11a, "");
SYMBOL_CRC(hci_conn_switch_role, 0x7cdb38a8, "");
SYMBOL_CRC(hci_get_route, 0xa5842346, "");
SYMBOL_CRC(hci_mgmt_chan_register, 0x7c395e68, "");
SYMBOL_CRC(hci_mgmt_chan_unregister, 0x32425a2d, "");
SYMBOL_CRC(l2cap_chan_close, 0xecb05126, "");
SYMBOL_CRC(l2cap_conn_get, 0xda54e138, "");
SYMBOL_CRC(l2cap_conn_put, 0xccec0039, "");
SYMBOL_CRC(l2cap_register_user, 0x8e0ee2fe, "");
SYMBOL_CRC(l2cap_unregister_user, 0x65572367, "");
SYMBOL_CRC(l2cap_add_psm, 0xc1a7c287, "_gpl");
SYMBOL_CRC(l2cap_chan_connect, 0x93cd0087, "_gpl");
SYMBOL_CRC(l2cap_chan_create, 0x735cd581, "_gpl");
SYMBOL_CRC(l2cap_chan_del, 0x7b04b152, "_gpl");
SYMBOL_CRC(l2cap_chan_list, 0x4da4fbde, "_gpl");
SYMBOL_CRC(l2cap_chan_put, 0x4d50c91b, "_gpl");
SYMBOL_CRC(l2cap_chan_send, 0x2e3a1d76, "_gpl");
SYMBOL_CRC(l2cap_chan_set_defaults, 0x3ece7688, "_gpl");
SYMBOL_CRC(l2cap_is_socket, 0x55b304b0, "");
SYMBOL_CRC(baswap, 0x7b5ce5c3, "");
SYMBOL_CRC(bt_err, 0x7b8c32f1, "");
SYMBOL_CRC(bt_err_ratelimited, 0xd7613212, "");
SYMBOL_CRC(bt_info, 0x0718b8b7, "");
SYMBOL_CRC(bt_status, 0x7bd9427a, "");
SYMBOL_CRC(bt_to_errno, 0x7aad008b, "");
SYMBOL_CRC(bt_warn, 0x214e4265, "");
SYMBOL_CRC(bt_warn_ratelimited, 0xddacccf6, "");
SYMBOL_CRC(__hci_cmd_sync, 0xc48a8a57, "");
SYMBOL_CRC(__hci_cmd_sync_ev, 0x729d78a9, "");
SYMBOL_CRC(__hci_cmd_sync_sk, 0x098a83e3, "");
SYMBOL_CRC(__hci_cmd_sync_status, 0x45fc2c35, "");
SYMBOL_CRC(__hci_cmd_sync_status_sk, 0xe181a40f, "");
SYMBOL_CRC(hci_cmd_sync, 0xc7915338, "");
SYMBOL_CRC(hci_cmd_sync_cancel, 0xf54e820f, "");
SYMBOL_CRC(hci_cmd_sync_queue, 0x7d62266f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa10179ab, "skb_free_datagram" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf143e50f, "sock_queue_rcv_skb_reason" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1638c53f, "sock_i_uid" },
	{ 0x5bfd598c, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x1697d536, "__class_create" },
	{ 0x47925794, "idr_find" },
	{ 0x532eda00, "debugfs_attr_write" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb5cfa080, "crypto_shash_tfm_digest" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3ecbeb4b, "debugfs_create_u16" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x24d5c01a, "sock_no_connect" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x637493f3, "__wake_up" },
	{ 0x47c9369a, "__module_get" },
	{ 0xdaf65445, "vsnprintf" },
	{ 0x51943974, "get_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd45ddb66, "kstrtobool_from_user" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xdaa3bc85, "__pskb_copy_fclone" },
	{ 0x91a923c6, "put_cmsg" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x92997ed8, "_printk" },
	{ 0xf60dca88, "crypto_alloc_kpp" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6769b918, "sock_register" },
	{ 0x36aeab1d, "datagram_poll" },
	{ 0xc699b4a, "__sock_recv_cmsgs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x2c6007e1, "put_device" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xe61a6643, "__current" },
	{ 0xa1861658, "proto_register" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x1449535e, "module_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xa346975c, "idr_remove" },
	{ 0x5f1940b4, "debugfs_attr_read" },
	{ 0x7d15c1ac, "__sock_recv_timestamp" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0x88664211, "sk_filter_trim_cap" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x45312867, "init_net" },
	{ 0x7b41a657, "crypto_shash_setkey" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc33aa545, "device_add" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x7a339792, "simple_attr_release" },
	{ 0x4d0e8846, "init_uts_ns" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0x5625faaa, "sk_free" },
	{ 0x6469bf39, "device_move" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x70059627, "seq_putc" },
	{ 0xf102732a, "crc16" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2a51ad5b, "iov_iter_kvec" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0xa24491bf, "ida_free" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x71c90087, "memcmp" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0x64b48ee7, "device_find_child" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x1cfee4f1, "device_del" },
	{ 0xcfc8c3f6, "__sock_queue_rcv_skb" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xfe71ea37, "__sock_recv_wifi_status" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa8f7601d, "__get_task_comm" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xabc58048, "skb_trim" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xead23951, "skb_unlink" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x3fbfd9c1, "sock_i_ino" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xbbf7c6bb, "sk_capable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x94794b4e, "skb_recv_datagram" },
	{ 0x1a928ba4, "sock_alloc_send_pskb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60181f35, "skb_copy" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x2e8c8f1c, "skb_pull_data" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x46372883, "seq_puts" },
	{ 0xb12ab068, "sock_gettstamp" },
	{ 0x34937f96, "single_release" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf62cf01d, "proc_create_seq_private" },
	{ 0x2af4ecf, "debugfs_create_u8" },
	{ 0xf01014b6, "single_open" },
	{ 0xfe175386, "crypto_alloc_shash" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x41fbd233, "fwnode_property_read_u8_array" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b629328, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x92b57248, "flush_work" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xffb94ef0, "_test_and_change_bit" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ecdh_generic,libaes");


MODULE_INFO(srcversion, "96F9A36C0A48484199D9B77");
