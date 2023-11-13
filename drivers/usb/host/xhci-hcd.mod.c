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

SYMBOL_CRC(xhci_add_endpoint, 0x6e2b9357, "_gpl");
SYMBOL_CRC(xhci_check_bandwidth, 0x8dd7ae1f, "_gpl");
SYMBOL_CRC(xhci_drop_endpoint, 0x18796b69, "_gpl");
SYMBOL_CRC(xhci_gen_setup, 0x75ee04be, "_gpl");
SYMBOL_CRC(xhci_get_endpoint_index, 0x57d4050a, "_gpl");
SYMBOL_CRC(xhci_init_driver, 0x427d4e4d, "_gpl");
SYMBOL_CRC(xhci_reset_bandwidth, 0xd9e5d56b, "_gpl");
SYMBOL_CRC(xhci_resume, 0xe44cbb4f, "_gpl");
SYMBOL_CRC(xhci_run, 0xff657a3f, "_gpl");
SYMBOL_CRC(xhci_shutdown, 0x2b79e393, "_gpl");
SYMBOL_CRC(xhci_suspend, 0x0e277163, "_gpl");
SYMBOL_CRC(xhci_update_hub_device, 0x3c14f047, "_gpl");
SYMBOL_CRC(xhci_get_ep_ctx, 0x644e50fb, "_gpl");
SYMBOL_CRC(xhci_ext_cap_init, 0xbe02b8b3, "_gpl");
SYMBOL_CRC(xhci_dbg_trace, 0x7c444201, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_dbg_quirks, 0xd7dccd23, "_gpl");
SYMBOL_CRC(__traceiter_xhci_dbg_quirks, 0x4c549b36, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_dbg_quirks, 0xaa996bf7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x800d430b, "param_ops_ullong" },
	{ 0x1467da49, "platform_device_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb3139dde, "usb_asmedia_modifyflowcontrol" },
	{ 0x477347d3, "dma_pool_create" },
	{ 0x5a14de15, "radix_tree_insert" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x15ce5904, "usb_hcd_resume_root_hub" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x3f2b3508, "usb_hcd_unlink_urb_from_ep" },
	{ 0xbe704cae, "usb_hcd_start_port_resume" },
	{ 0x53080d69, "usb_amd_pt_check_port" },
	{ 0x14d1c51e, "usb_hc_died" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdc13d2, "__kmalloc_node" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x386d9ce9, "radix_tree_lookup" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x7d3a4f7d, "usb_wakeup_notification" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0xb0a3c5d2, "trace_print_symbols_seq" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x20b2fa3f, "pci_irq_vector" },
	{ 0xdaf65445, "vsnprintf" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf3eb1323, "kstrtou16_from_user" },
	{ 0x7d09596b, "dma_pool_alloc" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf68da5ea, "usb_hcd_map_urb_for_dma" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x70cf032f, "usb_hcd_irq" },
	{ 0x1e7af141, "kmalloc_node_trace" },
	{ 0x78ce6f43, "debugfs_create_regset32" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0x9f194991, "usb_hcd_check_unlink_urb" },
	{ 0xdfc41206, "iommu_get_domain_for_dev" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdba5e9a, "radix_tree_delete" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xde016815, "device_create_managed_software_node" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x1db078a8, "usb_hcd_end_port_resume" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xd547228, "usb_hcd_link_urb_to_ep" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xfc182d24, "pci_alloc_irq_vectors_affinity" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8b5091e3, "usb_hcd_is_primary_hcd" },
	{ 0xb22e16d5, "radix_tree_maybe_preload" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0b3e7a3, "usb_hub_clear_tt_buffer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7c74c7da, "pm_runtime_forbid" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x45159cd8, "pm_runtime_allow" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0xda4d9ee0, "usb_hcd_giveback_urb" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1a51c881, "sg_pcopy_from_buffer" },
	{ 0xe06699b2, "sg_next" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x195835b2, "usb_hcd_poll_rh_status" },
	{ 0xb6f23552, "usb_disable_xhci_ports" },
	{ 0x34937f96, "single_release" },
	{ 0xdc2cbe84, "dma_set_mask" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xf01014b6, "single_open" },
	{ 0xdb0a1dca, "usb_hcd_unmap_urb_for_dma" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x79577703, "pci_free_irq_vectors" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x270ac400, "sg_pcopy_to_buffer" },
	{ 0xc453ac99, "usb_root_hub_lost_power" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common");


MODULE_INFO(srcversion, "443C68B4A8568D253C54E1A");
