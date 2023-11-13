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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(wl1251_alloc_hw, 0xdb49a554, "_gpl");
SYMBOL_CRC(wl1251_free_hw, 0x292f34aa, "_gpl");
SYMBOL_CRC(wl1251_init_ieee80211, 0x5ad969ca, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xef706529, "consume_skb" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x3c82f653, "ieee80211_free_hw" },
	{ 0x9edcd102, "ieee80211_probereq_get" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x23329d7c, "ieee80211_beacon_loss" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4111549, "ieee80211_nullfunc_get" },
	{ 0x1f0483dd, "ieee80211_pspoll_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcd2680dd, "ieee80211_register_hw" },
	{ 0x98366c1f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe61a6643, "__current" },
	{ 0xb49adf6f, "skb_copy_expand" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x90f0becb, "ieee80211_queue_delayed_work" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9c5238c5, "ieee80211_wake_queues" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb6ad681a, "ieee80211_alloc_hw_nm" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x5f754e5a, "memset" },
	{ 0x999315c9, "ieee80211_tx_status" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0x8acc6814, "ieee80211_stop_queues" },
	{ 0xabc58048, "skb_trim" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0x98b5927b, "ieee80211_scan_completed" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x5a2470b2, "ieee80211_unregister_hw" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe8721e7, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x320da0c7, "ieee80211_cqm_rssi_notify" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xef9df396, "ieee80211_queue_work" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x7585a43c, "ieee80211_rx_napi" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "835FF123B150C8DF0A5233D");
