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
	{ 0xe6f07264, "mdiobus_alloc_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x89f41044, "usbnet_set_msglevel" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x77e5e614, "mii_link_ok" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0x68902153, "phy_connect" },
	{ 0xeab93120, "usbnet_change_mtu" },
	{ 0xa4d6267b, "usbnet_write_cmd_async" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0xdef5544e, "phy_attached_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x530b695e, "phy_ethtool_set_link_ksettings" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x1de48ce3, "usbnet_unlink_rx_urbs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x47faae43, "usbnet_set_link_ksettings_mii" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xde6d7534, "phylink_create" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xec39a359, "usbnet_get_msglevel" },
	{ 0x106b527, "mii_check_media" },
	{ 0x1fb2e619, "usbnet_open" },
	{ 0xc925e021, "usbnet_skb_return" },
	{ 0x3f616804, "genphy_resume" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x99cecf53, "usbnet_tx_timeout" },
	{ 0x16ca1a8a, "phylink_suspend" },
	{ 0x6e1ae30b, "usbnet_get_link_ksettings_mii" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0xb49adf6f, "skb_copy_expand" },
	{ 0x3b3ed9a8, "phy_ethtool_get_link_ksettings" },
	{ 0x22ba307e, "usbnet_write_cmd_nopm" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc5fab446, "usbnet_get_link" },
	{ 0x9d16cc24, "phy_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0xe6b3c983, "usbnet_start_xmit" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3498111e, "usbnet_read_cmd_nopm" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x3f4b7a1, "usbnet_get_drvinfo" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0xc4f26f39, "mdiobus_free" },
	{ 0xc0a8f4be, "phylink_resume" },
	{ 0xa05b9f7b, "phylink_generic_validate" },
	{ 0xf2def9b7, "eth_platform_get_mac_address" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x3718ef36, "mii_nway_restart" },
	{ 0x24e279ed, "phy_start" },
	{ 0x5f754e5a, "memset" },
	{ 0x42063f7f, "usbnet_nway_reset" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0xe8dab918, "phy_print_status" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xf5ecd173, "net_selftest" },
	{ 0xf64bf83e, "mdiobus_unregister" },
	{ 0xeea0399, "strscpy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2c7a3c99, "usbnet_update_max_qlen" },
	{ 0x6b22f33b, "usbnet_stop" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xea405eab, "generic_mii_ioctl" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5a1fed7b, "mdiobus_get_phy" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0x653cb4b2, "phy_ethtool_nway_reset" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xc9010af0, "__mdiobus_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6277a7f9, "usbnet_link_change" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x57d93982, "phy_stop" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xeceb9489, "phy_do_ioctl_running" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0xeefd6e6b, "phy_disconnect" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8952c97b, "mii_ethtool_gset" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x593c9f33, "phylink_connect_phy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbnet,usbcore,phylink");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "77969A7B3723A1C9F701C43");
