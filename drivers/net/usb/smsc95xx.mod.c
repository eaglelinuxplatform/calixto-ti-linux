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
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe61a6643, "__current" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3498111e, "usbnet_read_cmd_nopm" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0x22ba307e, "usbnet_write_cmd_nopm" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x41a3298e, "generic_handle_domain_irq" },
	{ 0x24e279ed, "phy_start" },
	{ 0x57d93982, "phy_stop" },
	{ 0xe8dab918, "phy_print_status" },
	{ 0xc25dd92a, "usbnet_defer_kevent" },
	{ 0x30cd649e, "phy_get_pause" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0xb480680b, "genphy_read_status" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0x66c85e73, "phy_mii_ioctl" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xfd9857e0, "phy_init_hw" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0xf102732a, "crc16" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x2a4f8448, "usb_autopm_get_interface_no_resume" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0xeefd6e6b, "phy_disconnect" },
	{ 0xf64bf83e, "mdiobus_unregister" },
	{ 0xc4f26f39, "mdiobus_free" },
	{ 0xcc4a4347, "__irq_resolve_mapping" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x540eb906, "irq_domain_remove" },
	{ 0x774704f2, "irq_domain_free_fwnode" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xabc58048, "skb_trim" },
	{ 0xc925e021, "usbnet_skb_return" },
	{ 0xa4d6267b, "usbnet_write_cmd_async" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x92997ed8, "_printk" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb15842f1, "platform_get_ethdev_address" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7d6ade8, "__irq_domain_alloc_fwnode" },
	{ 0x23e83cac, "__irq_domain_add" },
	{ 0x31dcaf79, "irq_create_mapping_affinity" },
	{ 0x9d669763, "memcpy" },
	{ 0x444262e, "irq_set_chip_and_handler_name" },
	{ 0xe6f07264, "mdiobus_alloc_size" },
	{ 0xc9010af0, "__mdiobus_register" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x72a9500c, "phy_find_first" },
	{ 0x79fc80a2, "phy_connect_direct" },
	{ 0xdef5544e, "phy_attached_info" },
	{ 0x91ea03ad, "irq_domain_simple_ops" },
	{ 0xc0d45a96, "dummy_irq_chip" },
	{ 0xa2e53f1a, "handle_simple_irq" },
	{ 0x1fb2e619, "usbnet_open" },
	{ 0x6b22f33b, "usbnet_stop" },
	{ 0xe6b3c983, "usbnet_start_xmit" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0xeab93120, "usbnet_change_mtu" },
	{ 0x99cecf53, "usbnet_tx_timeout" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0x3f4b7a1, "usbnet_get_drvinfo" },
	{ 0xec39a359, "usbnet_get_msglevel" },
	{ 0x89f41044, "usbnet_set_msglevel" },
	{ 0x653cb4b2, "phy_ethtool_nway_reset" },
	{ 0xf5ecd173, "net_selftest" },
	{ 0xfb52ce6e, "ethtool_op_get_ts_info" },
	{ 0x3b3ed9a8, "phy_ethtool_get_link_ksettings" },
	{ 0x530b695e, "phy_ethtool_set_link_ksettings" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbnet,usbcore");

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v184Fp0051d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3666800157DDEFB9E8CAF55");
