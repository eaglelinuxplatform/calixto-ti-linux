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
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0x3498111e, "usbnet_read_cmd_nopm" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0x22ba307e, "usbnet_write_cmd_nopm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa4c69723, "mii_ethtool_set_link_ksettings" },
	{ 0xd2819f0a, "mii_ethtool_get_link_ksettings" },
	{ 0xea405eab, "generic_mii_ioctl" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x6277a7f9, "usbnet_link_change" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0xa4d6267b, "usbnet_write_cmd_async" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9cc51289, "skb_clone" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xc925e021, "usbnet_skb_return" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x2c7a3c99, "usbnet_update_max_qlen" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf2def9b7, "eth_platform_get_mac_address" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x3718ef36, "mii_nway_restart" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x32dbd174, "netif_set_tso_max_size" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x5f754e5a, "memset" },
	{ 0x8952c97b, "mii_ethtool_gset" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x1fb2e619, "usbnet_open" },
	{ 0x6b22f33b, "usbnet_stop" },
	{ 0xe6b3c983, "usbnet_start_xmit" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x99cecf53, "usbnet_tx_timeout" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0xec39a359, "usbnet_get_msglevel" },
	{ 0x89f41044, "usbnet_set_msglevel" },
	{ 0x42063f7f, "usbnet_nway_reset" },
	{ 0xc765e4fe, "ethtool_op_get_link" },
	{ 0xfb52ce6e, "ethtool_op_get_ts_info" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbnet,usbcore");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Ed*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Fd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p0010d*dc*dsc*dp*icFFiscFFip00in*");

MODULE_INFO(srcversion, "4F20279445CFFBEE8F4234B");
