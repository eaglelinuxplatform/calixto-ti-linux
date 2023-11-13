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

SYMBOL_CRC(ppp_channel_index, 0x56d9e1ce, "");
SYMBOL_CRC(ppp_dev_name, 0x7a3c3a4d, "");
SYMBOL_CRC(ppp_input, 0x9476aa92, "");
SYMBOL_CRC(ppp_input_error, 0x4a606210, "");
SYMBOL_CRC(ppp_output_wakeup, 0xa1580ac0, "");
SYMBOL_CRC(ppp_register_channel, 0xa2a72c3d, "");
SYMBOL_CRC(ppp_register_compressor, 0x56e16c29, "");
SYMBOL_CRC(ppp_register_net_channel, 0x1c8632ee, "");
SYMBOL_CRC(ppp_unit_number, 0xa93b0cca, "");
SYMBOL_CRC(ppp_unregister_channel, 0xe8f53019, "");
SYMBOL_CRC(ppp_unregister_compressor, 0xe9cc57cf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x1449535e, "module_put" },
	{ 0x2a928918, "slhc_free" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x1eacf58c, "bpf_prog_destroy" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x9a6fff32, "unregister_netdevice_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x47925794, "idr_find" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xa346975c, "idr_remove" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf5c838c1, "netdev_name_in_use" },
	{ 0x130d9731, "register_netdevice" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x54cd9e03, "fget" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x8b1e52b6, "fput" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x637493f3, "__wake_up" },
	{ 0xd932a814, "ns_capable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x9e223cc8, "register_pernet_device" },
	{ 0xb58cea90, "__register_chrdev" },
	{ 0x1697d536, "__class_create" },
	{ 0xf601e4a8, "rtnl_link_register" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xf66696c7, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9e3b34de, "unregister_pernet_device" },
	{ 0xba2259bb, "rtnl_link_unregister" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0xe61a6643, "__current" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x9ff92188, "iov_iter_init" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x18c95432, "__put_net" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x74b8e674, "slhc_toss" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xef706529, "consume_skb" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0xabc58048, "skb_trim" },
	{ 0xc0f3bf34, "netdev_printk" },
	{ 0x6cf91262, "skb_pull_rcsum" },
	{ 0x471f723e, "skb_scrub_packet" },
	{ 0xf758551a, "netif_rx" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xd653b126, "sched_clock" },
	{ 0xf348ff41, "bpf_stats_enabled_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xebae6476, "bpf_prog_create" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x15f90688, "slhc_init" },
	{ 0xfb1d7438, "down_read" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8C39EB7EF53DDFA3F899861");
