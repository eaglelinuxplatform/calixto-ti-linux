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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(phylink_caps_to_linkmodes, 0x66e8b5b0, "_gpl");
SYMBOL_CRC(phylink_connect_phy, 0x593c9f33, "_gpl");
SYMBOL_CRC(phylink_create, 0xde6d7534, "_gpl");
SYMBOL_CRC(phylink_decode_usxgmii_word, 0x3b0b75e7, "_gpl");
SYMBOL_CRC(phylink_destroy, 0xf3083a1d, "_gpl");
SYMBOL_CRC(phylink_disconnect_phy, 0x983276da, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_eee, 0x2c8e28ee, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_pauseparam, 0xf8fe5642, "_gpl");
SYMBOL_CRC(phylink_ethtool_get_wol, 0x08213956, "_gpl");
SYMBOL_CRC(phylink_ethtool_ksettings_get, 0xc430fe5f, "_gpl");
SYMBOL_CRC(phylink_ethtool_ksettings_set, 0x6ee0efb4, "_gpl");
SYMBOL_CRC(phylink_ethtool_nway_reset, 0x6fa426d2, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_eee, 0x57727285, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_pauseparam, 0x15c4e3e2, "_gpl");
SYMBOL_CRC(phylink_ethtool_set_wol, 0x62104126, "_gpl");
SYMBOL_CRC(phylink_expects_phy, 0x4278d56a, "_gpl");
SYMBOL_CRC(phylink_fwnode_phy_connect, 0xde0c25cb, "_gpl");
SYMBOL_CRC(phylink_generic_validate, 0xa05b9f7b, "_gpl");
SYMBOL_CRC(phylink_get_capabilities, 0xd903f419, "_gpl");
SYMBOL_CRC(phylink_get_eee_err, 0x825c7340, "_gpl");
SYMBOL_CRC(phylink_init_eee, 0xec02ebe0, "_gpl");
SYMBOL_CRC(phylink_mac_change, 0x12135396, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_an_restart, 0x059430b8, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_config, 0x3ca7f7b7, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_decode_state, 0x153a08b1, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_encode_advertisement, 0x5dc19747, "_gpl");
SYMBOL_CRC(phylink_mii_c22_pcs_get_state, 0x4a8e8fc5, "_gpl");
SYMBOL_CRC(phylink_mii_c45_pcs_get_state, 0xe73dfb2d, "_gpl");
SYMBOL_CRC(phylink_mii_ioctl, 0xde66f4a7, "_gpl");
SYMBOL_CRC(phylink_of_phy_connect, 0x40fc1879, "_gpl");
SYMBOL_CRC(phylink_resume, 0xc0a8f4be, "_gpl");
SYMBOL_CRC(phylink_set_port_modes, 0xc1d15a4c, "_gpl");
SYMBOL_CRC(phylink_speed_down, 0x59e0695d, "_gpl");
SYMBOL_CRC(phylink_speed_up, 0x5d0c4dcc, "_gpl");
SYMBOL_CRC(phylink_start, 0x911fcd6c, "_gpl");
SYMBOL_CRC(phylink_stop, 0xdcb0a2c0, "_gpl");
SYMBOL_CRC(phylink_suspend, 0x16ca1a8a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xd59a1587, "linkmode_resolve_pause" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xc0f3bf34, "netdev_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb1b0e08, "gpiod_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92b57248, "flush_work" },
	{ 0xeefd6e6b, "phy_disconnect" },
	{ 0x7b9e4062, "phy_ethtool_get_wol" },
	{ 0x4cd9eda7, "phy_ethtool_set_wol" },
	{ 0xbe088984, "phy_get_eee_err" },
	{ 0x7cfea38d, "phy_init_eee" },
	{ 0x4eb6e139, "phy_ethtool_get_eee" },
	{ 0x2482509a, "phy_ethtool_set_eee" },
	{ 0x390360ab, "mdiobus_read" },
	{ 0xb2b9ea3b, "mdiobus_write" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x66c85e73, "phy_mii_ioctl" },
	{ 0x33f28147, "phy_speed_down" },
	{ 0xdbaaf763, "phy_speed_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c81055b, "phy_restart_aneg" },
	{ 0xf4689d50, "linkmode_set_pause" },
	{ 0x7740ef64, "phy_set_asym_pause" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x57d93982, "phy_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x30cd649e, "phy_get_pause" },
	{ 0x3b3d7eda, "mdiobus_modify" },
	{ 0xe8ce38f1, "mdiobus_modify_changed" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x24e279ed, "phy_start" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc2ced324, "fwnode_get_named_child_node" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0x4c605032, "fwnode_gpiod_get_index" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x3e637a04, "phy_support_asym_pause" },
	{ 0x5f754e5a, "memset" },
	{ 0x835012b, "phy_get_rate_matching" },
	{ 0x112e2db2, "phy_attached_info_irq" },
	{ 0x14de2bd4, "phy_request_interrupt" },
	{ 0x7000ffa0, "phy_attach_direct" },
	{ 0x103ab75e, "phy_detach" },
	{ 0x22859573, "fwnode_get_phy_node" },
	{ 0x2b54eaba, "fwnode_phy_find_device" },
	{ 0xcc7285c4, "phy_device_free" },
	{ 0xd5f90592, "phy_ethtool_ksettings_set" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x5a524b64, "phy_ethtool_ksettings_get" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F869711610399E6D5978D08");
