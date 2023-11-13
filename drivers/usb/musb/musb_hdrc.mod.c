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

SYMBOL_CRC(musb_dma_controller_create, 0xd8651d4f, "");
SYMBOL_CRC(musb_dma_controller_destroy, 0xc3b88afe, "");
SYMBOL_CRC(musb_clearb, 0xe59efb0e, "_gpl");
SYMBOL_CRC(musb_clearw, 0x669594ad, "_gpl");
SYMBOL_CRC(musb_dma_completion, 0x74a30b53, "_gpl");
SYMBOL_CRC(musb_get_mode, 0xe983d7f1, "_gpl");
SYMBOL_CRC(musb_interrupt, 0xcaf22e05, "_gpl");
SYMBOL_CRC(musb_mailbox, 0x09492220, "_gpl");
SYMBOL_CRC(musb_queue_resume_work, 0x1a198313, "_gpl");
SYMBOL_CRC(musb_readb, 0x2734197f, "_gpl");
SYMBOL_CRC(musb_readl, 0xf0f95e51, "_gpl");
SYMBOL_CRC(musb_readw, 0x719a5e41, "_gpl");
SYMBOL_CRC(musb_set_host, 0x801d36c6, "_gpl");
SYMBOL_CRC(musb_set_peripheral, 0x7aedadb0, "_gpl");
SYMBOL_CRC(musb_writeb, 0x0b4a8834, "_gpl");
SYMBOL_CRC(musb_writel, 0x6af8c6dc, "_gpl");
SYMBOL_CRC(musb_writew, 0xade3e56c, "_gpl");
SYMBOL_CRC(musb_root_disconnect, 0xe873db64, "_gpl");
SYMBOL_CRC(dma_controller_irq, 0x7147dc7f, "_gpl");
SYMBOL_CRC(musbhs_dma_controller_create, 0xdc974313, "_gpl");
SYMBOL_CRC(musbhs_dma_controller_create_noirq, 0x668bc1ba, "_gpl");
SYMBOL_CRC(musbhs_dma_controller_destroy, 0x9c4f249d, "_gpl");
SYMBOL_CRC(tusb_dma_controller_create, 0x460c5f60, "_gpl");
SYMBOL_CRC(tusb_dma_controller_destroy, 0xc693a18c, "_gpl");
SYMBOL_CRC(cppi41_dma_controller_create, 0x88a45189, "_gpl");
SYMBOL_CRC(cppi41_dma_controller_destroy, 0x8e8f6627, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x15ce5904, "usb_hcd_resume_root_hub" },
	{ 0x3f2b3508, "usb_hcd_unlink_urb_from_ep" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6fe8073d, "usb_phy_set_charger_current" },
	{ 0xacaaba89, "device_unregister" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x21732aee, "dma_sync_single_for_device" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2f0d9053, "usb_otg_state_string" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdaf65445, "vsnprintf" },
	{ 0xf0ed2ef4, "__raw_writesb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x552626c4, "usb_get_dr_mode" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x77b46ffb, "usb_ep_set_maxpacket_limit" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x92997ed8, "_printk" },
	{ 0xf68da5ea, "usb_hcd_map_urb_for_dma" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xc5ad24c7, "usb_add_gadget_udc" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xe61a6643, "__current" },
	{ 0x9f194991, "usb_hcd_check_unlink_urb" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0xc322d103, "sg_miter_next" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x45962907, "devm_kfree" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa0607daf, "sg_miter_stop" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c07c83e, "sg_miter_start" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa86c0c8f, "usb_gadget_udc_reset" },
	{ 0xd547228, "usb_hcd_link_urb_to_ep" },
	{ 0x66b4cd72, "dma_sync_single_for_cpu" },
	{ 0x5f754e5a, "memset" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xda4d9ee0, "usb_hcd_giveback_urb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x1d6408f9, "platform_bus_type" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x7eb00a3f, "usb_gadget_giveback_request" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xa020b68f, "usb_del_gadget_udc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x195835b2, "usb_hcd_poll_rh_status" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xd0cdcd50, "usb_create_hcd" },
	{ 0x34937f96, "single_release" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0x97255bdf, "strlen" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf01014b6, "single_open" },
	{ 0xdb0a1dca, "usb_hcd_unmap_urb_for_dma" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0xf7163ec9, "__raw_readsb" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x78502cb1, "of_property_read_string_helper" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common,udc-core");


MODULE_INFO(srcversion, "0476105993FBF72FBEB4DE7");
