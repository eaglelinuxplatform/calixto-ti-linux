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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x22ba307e, "usbnet_write_cmd_nopm" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3498111e, "usbnet_read_cmd_nopm" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc25dd92a, "usbnet_defer_kevent" },
	{ 0x5f754e5a, "memset" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0xeab93120, "usbnet_change_mtu" },
	{ 0xea405eab, "generic_mii_ioctl" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xf102732a, "crc16" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xabc58048, "skb_trim" },
	{ 0xc925e021, "usbnet_skb_return" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x106b527, "mii_check_media" },
	{ 0x8952c97b, "mii_ethtool_gset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3718ef36, "mii_nway_restart" },
	{ 0x92997ed8, "_printk" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb15842f1, "platform_get_ethdev_address" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x1fb2e619, "usbnet_open" },
	{ 0x6b22f33b, "usbnet_stop" },
	{ 0xe6b3c983, "usbnet_start_xmit" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x99cecf53, "usbnet_tx_timeout" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0x3f4b7a1, "usbnet_get_drvinfo" },
	{ 0xec39a359, "usbnet_get_msglevel" },
	{ 0x89f41044, "usbnet_set_msglevel" },
	{ 0x42063f7f, "usbnet_nway_reset" },
	{ 0xc5fab446, "usbnet_get_link" },
	{ 0x6e1ae30b, "usbnet_get_link_ksettings_mii" },
	{ 0x47faae43, "usbnet_set_link_ksettings_mii" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbnet,usbcore");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F99D34DC121AD2C42896C3B");
