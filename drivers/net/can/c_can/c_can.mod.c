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

SYMBOL_CRC(alloc_c_can_dev, 0x77efac6a, "_gpl");
SYMBOL_CRC(c_can_power_down, 0x85ec2d87, "_gpl");
SYMBOL_CRC(c_can_power_up, 0x8180199d, "_gpl");
SYMBOL_CRC(free_c_can_dev, 0x3506de0a, "_gpl");
SYMBOL_CRC(register_c_can_dev, 0x9f5e362b, "_gpl");
SYMBOL_CRC(unregister_c_can_dev, 0x836965fe, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x86fb860b, "can_put_echo_skb" },
	{ 0x218cd2c5, "can_get_echo_skb" },
	{ 0xc515deca, "netif_napi_add_weight" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa319d44e, "__netif_napi_del" },
	{ 0xf63c2e74, "open_candev" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xb98aac63, "pinctrl_pm_select_default_state" },
	{ 0xad9c69dc, "napi_complete_done" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xeb6d1c30, "__napi_schedule" },
	{ 0x4dc4e086, "alloc_can_skb" },
	{ 0x51fa4b3a, "unregister_candev" },
	{ 0xd8dbc698, "can_change_mtu" },
	{ 0xf7638cf, "pinctrl_put" },
	{ 0xdb3a866b, "can_dropped_invalid_skb" },
	{ 0xc2ad49c3, "pinctrl_pm_select_sleep_state" },
	{ 0xb38eafe1, "free_candev" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7f4d2733, "alloc_candev_mqs" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xc0f3bf34, "netdev_printk" },
	{ 0xa8f78035, "napi_enable" },
	{ 0x678ad63f, "netif_receive_skb" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xfb4f5212, "close_candev" },
	{ 0x78815511, "pinctrl_get" },
	{ 0xa40763fd, "can_bus_off" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x81da5304, "pinctrl_lookup_state" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x84851077, "pinctrl_select_state" },
	{ 0x4ca74fb8, "alloc_can_err_skb" },
	{ 0x46ab96d, "napi_schedule_prep" },
	{ 0xa6ea037b, "napi_disable" },
	{ 0xac1a24d2, "register_candev" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfb52ce6e, "ethtool_op_get_ts_info" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "524AB3E20B6D5A7FA299AE7");
