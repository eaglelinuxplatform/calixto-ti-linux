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

SYMBOL_CRC(cdc_ncm_bind_common, 0xf1ca2212, "_gpl");
SYMBOL_CRC(cdc_ncm_change_mtu, 0x8627f2a3, "_gpl");
SYMBOL_CRC(cdc_ncm_fill_tx_frame, 0x9be3ff34, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_fixup, 0xba71127c, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp16, 0xcde91e14, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_ndp32, 0xc2263549, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth16, 0x713befd6, "_gpl");
SYMBOL_CRC(cdc_ncm_rx_verify_nth32, 0xed05f828, "_gpl");
SYMBOL_CRC(cdc_ncm_select_altsetting, 0x8b0e4e43, "_gpl");
SYMBOL_CRC(cdc_ncm_tx_fixup, 0xe71407c4, "_gpl");
SYMBOL_CRC(cdc_ncm_unbind, 0x900233b6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2ab8fd87, "usb_driver_release_interface" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x2eca2346, "usb_altnum_to_altsetting" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6277a7f9, "usbnet_link_change" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2c7a3c99, "usbnet_update_max_qlen" },
	{ 0x1de48ce3, "usbnet_unlink_rx_urbs" },
	{ 0xe61a6643, "__current" },
	{ 0x79b11dab, "netif_tx_lock" },
	{ 0xe6b3c983, "usbnet_start_xmit" },
	{ 0xc6f22195, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xc925e021, "usbnet_skb_return" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xaa152108, "hrtimer_active" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc6ba13e6, "cdc_parse_cdc_header" },
	{ 0xeed58c47, "usb_ifnum_to_if" },
	{ 0xf368ce6b, "usb_driver_claim_interface" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdce4b0a7, "usbnet_get_ethernet_addr" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x3f4b7a1, "usbnet_get_drvinfo" },
	{ 0xec39a359, "usbnet_get_msglevel" },
	{ 0x89f41044, "usbnet_set_msglevel" },
	{ 0x42063f7f, "usbnet_nway_reset" },
	{ 0xc5fab446, "usbnet_get_link" },
	{ 0xfb52ce6e, "ethtool_op_get_ts_info" },
	{ 0x212dc9d8, "usbnet_get_link_ksettings_internal" },
	{ 0x1fb2e619, "usbnet_open" },
	{ 0x6b22f33b, "usbnet_stop" },
	{ 0xbcbb97f2, "usbnet_set_rx_mode" },
	{ 0xb4fc417d, "eth_mac_addr" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x99cecf53, "usbnet_tx_timeout" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0x718efd65, "usbnet_manage_power" },
	{ 0xc06ff1d3, "usbnet_cdc_update_filter" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usbnet,cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "D87DE139303CD71387FC6D0");
