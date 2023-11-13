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

SYMBOL_CRC(__lbs_cmd, 0x82d635df, "_gpl");
SYMBOL_CRC(lbs_cmd_copyback, 0x94c16bed, "_gpl");
SYMBOL_CRC(lbs_host_sleep_cfg, 0x8d64b1a2, "_gpl");
SYMBOL_CRC(lbs_add_card, 0xf0977fe8, "_gpl");
SYMBOL_CRC(lbs_debug, 0xf64277de, "_gpl");
SYMBOL_CRC(lbs_host_to_card_done, 0x1f122c4a, "_gpl");
SYMBOL_CRC(lbs_notify_command_response, 0x1d389555, "_gpl");
SYMBOL_CRC(lbs_queue_event, 0xd079f675, "_gpl");
SYMBOL_CRC(lbs_remove_card, 0xb2663d31, "_gpl");
SYMBOL_CRC(lbs_resume, 0x064ff2c1, "_gpl");
SYMBOL_CRC(lbs_start_card, 0xe8f36367, "_gpl");
SYMBOL_CRC(lbs_stop_card, 0xfa85bf4c, "_gpl");
SYMBOL_CRC(lbs_suspend, 0x5258915f, "_gpl");
SYMBOL_CRC(lbs_process_rxed_packet, 0x6e078bdb, "_gpl");
SYMBOL_CRC(lbs_send_tx_feedback, 0x7590bf47, "_gpl");
SYMBOL_CRC(lbs_get_firmware, 0xd0a93220, "_gpl");
SYMBOL_CRC(lbs_get_firmware_async, 0xa588019c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7f7e9cb3, "cfg80211_scan_done" },
	{ 0xef706529, "consume_skb" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x49970de8, "finish_wait" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0xd76244d7, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xbbcf9635, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x7850420b, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x13c0c526, "wiphy_register" },
	{ 0x93bc40ed, "cfg80211_put_bss" },
	{ 0xc6d8fb77, "netif_device_detach" },
	{ 0xe61a6643, "__current" },
	{ 0x4e0577fc, "netif_device_attach" },
	{ 0x4632de65, "ieee80211_get_channel_khz" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5a3b05a9, "cfg80211_ibss_joined" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf3ddbe01, "cfg80211_michael_mic_failure" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xb172a861, "wiphy_unregister" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x71c90087, "memcmp" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x164bab18, "cfg80211_get_bss" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf758551a, "netif_rx" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x89be8566, "netdev_alert" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x780cb1be, "cfg80211_inform_bss_data" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x429c0c31, "ieee80211_bss_get_elem" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x26ae97b0, "cfg80211_connect_done" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x188ee3ff, "wiphy_free" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x8fbd4c14, "ieee80211_get_num_supported_channels" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "5A0CB6BEFECCE0FE5DFFBE5");
