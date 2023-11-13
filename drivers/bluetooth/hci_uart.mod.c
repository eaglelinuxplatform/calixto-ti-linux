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

SYMBOL_CRC(hci_uart_tx_wakeup, 0xd6759535, "_gpl");
SYMBOL_CRC(hci_uart_register_device, 0x11cfa8b1, "_gpl");
SYMBOL_CRC(hci_uart_unregister_device, 0x6b2958fd, "_gpl");
SYMBOL_CRC(h4_recv_buf, 0x854279cf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7517b5d, "percpu_free_rwsem" },
	{ 0x7bdbc381, "tty_set_termios" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xe935972e, "percpu_down_write" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x3b85282a, "tty_register_ldisc" },
	{ 0x163f10e9, "serdev_device_set_baudrate" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xace36f38, "btbcm_finalize" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x4c698fc7, "nvmem_cell_get" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x9d7f13ba, "btbcm_initialize" },
	{ 0x5bc987b7, "serdev_device_set_flow_control" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8a29b19, "serdev_device_open" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbe014857, "devm_free_irq" },
	{ 0x651e8678, "tty_driver_flush_buffer" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xe9a7fe16, "nvmem_cell_read" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0xb1bfe711, "btbcm_read_pcm_int_params" },
	{ 0x85bf8b48, "percpu_up_write" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x989e4a7, "device_property_read_u8_array" },
	{ 0x18bfb585, "devm_clk_put" },
	{ 0x56708ddc, "serdev_device_write_flush" },
	{ 0x303cb71d, "serdev_device_get_tiocm" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xd2fbec6b, "n_tty_ioctl_helper" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xf7e06aba, "tty_ldisc_flush" },
	{ 0xe31af042, "__percpu_init_rwsem" },
	{ 0x71c90087, "memcmp" },
	{ 0xa5ce587d, "__serdev_device_driver_register" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1d377d7, "serdev_device_set_tiocm" },
	{ 0x718b8b7, "bt_info" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2b74b566, "serdev_device_write_buf" },
	{ 0xabc58048, "skb_trim" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3f53b95d, "tty_unregister_ldisc" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2bf043bf, "of_irq_get_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x42fa3fb9, "serdev_device_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfcf050c0, "__percpu_down_read" },
	{ 0xaf5cc7dd, "btbcm_write_pcm_int_params" },
	{ 0xdfd28095, "btbcm_set_bdaddr" },
	{ 0x7de1e468, "tty_unthrottle" },
	{ 0xa59293cc, "hci_reset_dev" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6edabf60, "btbcm_check_bdaddr" },
	{ 0xa4368e36, "rcuwait_wake_up" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x86816953, "hci_register_dev" },
	{ 0x214e4265, "bt_warn" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x10c384db, "hci_recv_diag" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-bt");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-btC*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");

MODULE_INFO(srcversion, "425B10CF4C77EF60FC41CD0");
