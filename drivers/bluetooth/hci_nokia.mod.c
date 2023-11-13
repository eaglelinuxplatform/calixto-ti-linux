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
	{ 0xa5ce587d, "__serdev_device_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b2958fd, "hci_uart_unregister_device" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xa63c4e18, "serdev_device_wait_until_sent" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8c2536b4, "__skb_pad" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xc37335b0, "complete" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0x854279cf, "h4_recv_buf" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x11cfa8b1, "hci_uart_register_device" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xc1d377d7, "serdev_device_set_tiocm" },
	{ 0x5bc987b7, "serdev_device_set_flow_control" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0x56708ddc, "serdev_device_write_flush" },
	{ 0x163f10e9, "serdev_device_set_baudrate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x303cb71d, "serdev_device_get_tiocm" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd6759535, "hci_uart_tx_wakeup" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdfd28095, "btbcm_set_bdaddr" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hci_uart,bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cnokia,h4p-bluetooth");
MODULE_ALIAS("of:N*T*Cnokia,h4p-bluetoothC*");

MODULE_INFO(srcversion, "3ACD52201C7C19B56DED462");
