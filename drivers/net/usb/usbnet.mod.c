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

SYMBOL_CRC(usbnet_device_suggests_idle, 0xef3927bf, "");
SYMBOL_CRC(usbnet_link_change, 0x6277a7f9, "");
SYMBOL_CRC(usbnet_manage_power, 0x718efd65, "");
SYMBOL_CRC(usbnet_change_mtu, 0xeab93120, "_gpl");
SYMBOL_CRC(usbnet_defer_kevent, 0xc25dd92a, "_gpl");
SYMBOL_CRC(usbnet_disconnect, 0x50620bf7, "_gpl");
SYMBOL_CRC(usbnet_get_drvinfo, 0x03f4b7a1, "_gpl");
SYMBOL_CRC(usbnet_get_endpoints, 0xef0efa87, "_gpl");
SYMBOL_CRC(usbnet_get_ethernet_addr, 0xdce4b0a7, "_gpl");
SYMBOL_CRC(usbnet_get_link, 0xc5fab446, "_gpl");
SYMBOL_CRC(usbnet_get_link_ksettings_internal, 0x212dc9d8, "_gpl");
SYMBOL_CRC(usbnet_get_link_ksettings_mii, 0x6e1ae30b, "_gpl");
SYMBOL_CRC(usbnet_get_msglevel, 0xec39a359, "_gpl");
SYMBOL_CRC(usbnet_nway_reset, 0x42063f7f, "_gpl");
SYMBOL_CRC(usbnet_open, 0x1fb2e619, "_gpl");
SYMBOL_CRC(usbnet_pause_rx, 0x04c4bcbb, "_gpl");
SYMBOL_CRC(usbnet_probe, 0xcf652830, "_gpl");
SYMBOL_CRC(usbnet_purge_paused_rxq, 0xb65defea, "_gpl");
SYMBOL_CRC(usbnet_read_cmd, 0x7ffaa210, "_gpl");
SYMBOL_CRC(usbnet_read_cmd_nopm, 0x3498111e, "_gpl");
SYMBOL_CRC(usbnet_resume, 0x295a5aaa, "_gpl");
SYMBOL_CRC(usbnet_resume_rx, 0x2bb3159a, "_gpl");
SYMBOL_CRC(usbnet_set_link_ksettings_mii, 0x47faae43, "_gpl");
SYMBOL_CRC(usbnet_set_msglevel, 0x89f41044, "_gpl");
SYMBOL_CRC(usbnet_set_rx_mode, 0xbcbb97f2, "_gpl");
SYMBOL_CRC(usbnet_skb_return, 0xc925e021, "_gpl");
SYMBOL_CRC(usbnet_start_xmit, 0xe6b3c983, "_gpl");
SYMBOL_CRC(usbnet_status_start, 0xdfe14ca3, "_gpl");
SYMBOL_CRC(usbnet_status_stop, 0x105bc9ca, "_gpl");
SYMBOL_CRC(usbnet_stop, 0x6b22f33b, "_gpl");
SYMBOL_CRC(usbnet_suspend, 0xdc2e7392, "_gpl");
SYMBOL_CRC(usbnet_tx_timeout, 0x99cecf53, "_gpl");
SYMBOL_CRC(usbnet_unlink_rx_urbs, 0x1de48ce3, "_gpl");
SYMBOL_CRC(usbnet_update_max_qlen, 0x2c7a3c99, "_gpl");
SYMBOL_CRC(usbnet_write_cmd, 0x7146c4e9, "_gpl");
SYMBOL_CRC(usbnet_write_cmd_async, 0xa4d6267b, "_gpl");
SYMBOL_CRC(usbnet_write_cmd_nopm, 0x22ba307e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0x3e64127e, "usb_string" },
	{ 0x6f83fba8, "hex2bin" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xf758551a, "netif_rx" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe61a6643, "__current" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xd2819f0a, "mii_ethtool_get_link_ksettings" },
	{ 0xa4c69723, "mii_ethtool_set_link_ksettings" },
	{ 0x3718ef36, "mii_nway_restart" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0xef706529, "consume_skb" },
	{ 0xec62b0cc, "usb_get_from_anchor" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x77e5e614, "mii_link_ok" },
	{ 0xc765e4fe, "ethtool_op_get_link" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6b6f37a8, "usb_autopm_put_interface_async" },
	{ 0xf80287bb, "usb_get_urb" },
	{ 0xe302d1e1, "usb_unlink_urb" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xeea0399, "strscpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc6d8fb77, "netif_device_detach" },
	{ 0x4e0577fc, "netif_device_attach" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0x44ce35dc, "alloc_etherdev_mqs" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xaa1dfa28, "usb_check_bulk_endpoints" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6f72cce8, "usb_autopm_get_interface_async" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x6a1f1cad, "skb_tstamp_tx" },
	{ 0x7439b55a, "usb_anchor_urb" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0x637493f3, "__wake_up" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0x2a4f8448, "usb_autopm_get_interface_no_resume" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xd97313de, "usb_clear_halt" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0xfb52ce6e, "ethtool_op_get_ts_info" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");


MODULE_INFO(srcversion, "D5929A3AE81386CC355F71A");
