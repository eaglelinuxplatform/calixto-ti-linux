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

SYMBOL_CRC(alloc_can_err_skb, 0x4ca74fb8, "_gpl");
SYMBOL_CRC(alloc_can_skb, 0x4dc4e086, "_gpl");
SYMBOL_CRC(alloc_canfd_skb, 0x7745357b, "_gpl");
SYMBOL_CRC(alloc_canxl_skb, 0x8494b43f, "_gpl");
SYMBOL_CRC(can_dropped_invalid_skb, 0xdb3a866b, "_gpl");
SYMBOL_CRC(can_free_echo_skb, 0x1d6ce776, "_gpl");
SYMBOL_CRC(can_get_echo_skb, 0x218cd2c5, "_gpl");
SYMBOL_CRC(can_put_echo_skb, 0x86fb860b, "_gpl");
SYMBOL_CRC(can_eth_ioctl_hwts, 0x695943d6, "");
SYMBOL_CRC(can_ethtool_op_get_ts_info_hwts, 0xa5ee7801, "");
SYMBOL_CRC(alloc_candev_mqs, 0x7f4d2733, "_gpl");
SYMBOL_CRC(can_bus_off, 0xa40763fd, "_gpl");
SYMBOL_CRC(can_change_mtu, 0xd8dbc698, "_gpl");
SYMBOL_CRC(can_change_state, 0x18667841, "_gpl");
SYMBOL_CRC(can_get_state_str, 0x10d892eb, "_gpl");
SYMBOL_CRC(close_candev, 0xfb4f5212, "_gpl");
SYMBOL_CRC(free_candev, 0xb38eafe1, "_gpl");
SYMBOL_CRC(of_can_transceiver, 0x70a2c88e, "_gpl");
SYMBOL_CRC(open_candev, 0xf63c2e74, "_gpl");
SYMBOL_CRC(register_candev, 0xac1a24d2, "_gpl");
SYMBOL_CRC(safe_candev_priv, 0x7041e80d, "_gpl");
SYMBOL_CRC(unregister_candev, 0x51fa4b3a, "_gpl");
SYMBOL_CRC(can_fd_dlc2len, 0xf12d9387, "_gpl");
SYMBOL_CRC(can_fd_len2dlc, 0x6047ede6, "_gpl");
SYMBOL_CRC(can_skb_get_frame_len, 0x7366ecd6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa941bb7, "skb_put" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x6a1f1cad, "skb_tstamp_tx" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xef706529, "consume_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0xf601e4a8, "rtnl_link_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xe61a6643, "__current" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xba2259bb, "rtnl_link_unregister" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x714b06aa, "nla_put" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x5f754e5a, "memset" },
	{ 0x1bfef773, "sock_efree" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xabc58048, "skb_trim" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7FD4BD22B80E52383A1C64");
