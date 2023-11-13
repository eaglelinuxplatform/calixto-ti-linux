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

SYMBOL_CRC(rxrpc_debug_id, 0x31bf3ca3, "");
SYMBOL_CRC(rxrpc_kernel_begin_call, 0x9e91fb6f, "");
SYMBOL_CRC(rxrpc_kernel_check_life, 0x7fdcc1b0, "");
SYMBOL_CRC(rxrpc_kernel_end_call, 0x4480f7b2, "");
SYMBOL_CRC(rxrpc_kernel_get_epoch, 0x3df26b68, "");
SYMBOL_CRC(rxrpc_kernel_new_call_notification, 0x25b63518, "");
SYMBOL_CRC(rxrpc_kernel_set_max_life, 0x5d1757f8, "");
SYMBOL_CRC(rxrpc_sock_set_min_security_level, 0x1e97587c, "");
SYMBOL_CRC(rxrpc_kernel_charge_accept, 0xd9eaec86, "");
SYMBOL_CRC(key_type_rxrpc, 0x683ddb8d, "");
SYMBOL_CRC(rxrpc_get_null_key, 0xa5b915e5, "");
SYMBOL_CRC(rxrpc_get_server_data_key, 0x5dcc9510, "");
SYMBOL_CRC(rxrpc_kernel_get_peer, 0x97cf7d4d, "");
SYMBOL_CRC(rxrpc_kernel_get_srtt, 0xe3d87e33, "");
SYMBOL_CRC(rxrpc_kernel_recv_data, 0xc93e0855, "");
SYMBOL_CRC(rxrpc_kernel_abort_call, 0xdd78002c, "");
SYMBOL_CRC(rxrpc_kernel_send_data, 0x0c7b4784, "");
SYMBOL_CRC(rxrpc_kernel_set_tx_length, 0xd0efd613, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x24ced989, "key_alloc" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x47925794, "idr_find" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5e068c61, "register_net_sysctl" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xef706529, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27d58057, "udp_sock_create4" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0x581cde4e, "up" },
	{ 0x1a4baaff, "unregister_key_type" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x10093000, "key_type_keyring" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xa225f47e, "sock_dequeue_err_skb" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x30f4ef5d, "csum_and_copy_from_iter" },
	{ 0x637493f3, "__wake_up" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0xa0dfa64f, "ip_route_output_flow" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x554caf8, "key_instantiate_and_link" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x479aac1, "seq_list_next_rcu" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc84a0a7e, "seq_hlist_start_rcu" },
	{ 0x276e46bc, "register_key_type" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x91a923c6, "put_cmsg" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x92997ed8, "_printk" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x6769b918, "sock_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3c4dbe3d, "crypto_skcipher_decrypt" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xe61a6643, "__current" },
	{ 0xa1861658, "proto_register" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x58fad869, "__var_waitqueue" },
	{ 0x800473f, "__cond_resched" },
	{ 0xa346975c, "idr_remove" },
	{ 0x7d15c1ac, "__sock_recv_timestamp" },
	{ 0xd852dc4e, "key_put" },
	{ 0xc924678a, "__kmalloc_node_track_caller" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x4253aa7e, "down_write" },
	{ 0x45312867, "init_net" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xbf7347b2, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xdd27fa87, "memchr" },
	{ 0xd83fc458, "sock_enable_timestamps" },
	{ 0xde8c237a, "ip_sock_set_mtu_discover" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xf0ef52e8, "down" },
	{ 0x5625faaa, "sk_free" },
	{ 0xee2d05d3, "sock_wake_async" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xd27e0c1, "kernel_sock_shutdown" },
	{ 0x954f099c, "idr_preload" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x9e3b34de, "unregister_pernet_device" },
	{ 0x71c90087, "memcmp" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0xf86f27cd, "idr_alloc_cyclic" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xfe71ea37, "__sock_recv_wifi_status" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17014822, "key_revoke" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x43e6d46a, "key_validate" },
	{ 0xc7827b8f, "sock_no_sendpage" },
	{ 0x4143ff0e, "crypto_alloc_sync_skcipher" },
	{ 0x12e3c7a5, "setup_udp_tunnel_sock" },
	{ 0x17363758, "proc_remove" },
	{ 0xd2b32a14, "udp_sock_create6" },
	{ 0xfb1d7438, "down_read" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x71139293, "keyring_search" },
	{ 0x1c0aff59, "ip_sock_set_recverr" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x5562e403, "prepare_to_wait_exclusive" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbaadb85e, "request_key_tag" },
	{ 0x30aec204, "generic_key_instantiate" },
	{ 0x1a928ba4, "sock_alloc_send_pskb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x27faf67, "sock_no_getname" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x60181f35, "skb_copy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x53036ac9, "dst_release" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xf1cc1ee5, "sock_release" },
	{ 0x7adc0fbf, "rb_replace_node_rcu" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x46372883, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x7a240ee, "sock_no_ioctl" },
	{ 0x2d6ad720, "_proc_mkdir" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x50944630, "seq_list_start_head_rcu" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x2e44d803, "kernel_sendmsg" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x4668d780, "skb_to_sgvec" },
	{ 0xa7b3181c, "up_read" },
	{ 0x9e223cc8, "register_pernet_device" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x7b629328, "release_sock" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0xf14c7d14, "crypto_alloc_skcipher" },
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "D72E495A73FD57EACF29653");
