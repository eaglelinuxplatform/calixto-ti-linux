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

SYMBOL_CRC(__usb_get_extra_descriptor, 0x4cf24332, "_gpl");
SYMBOL_CRC(usb_alloc_coherent, 0x8f1bf125, "_gpl");
SYMBOL_CRC(usb_alloc_dev, 0xfa6ee304, "_gpl");
SYMBOL_CRC(usb_altnum_to_altsetting, 0x2eca2346, "_gpl");
SYMBOL_CRC(usb_check_bulk_endpoints, 0xaa1dfa28, "_gpl");
SYMBOL_CRC(usb_check_int_endpoints, 0xb3245b81, "_gpl");
SYMBOL_CRC(usb_disabled, 0x19a304ba, "_gpl");
SYMBOL_CRC(usb_find_alt_setting, 0xb6463f9f, "_gpl");
SYMBOL_CRC(usb_find_common_endpoints, 0x93c7edeb, "_gpl");
SYMBOL_CRC(usb_find_common_endpoints_reverse, 0x1e9c590a, "_gpl");
SYMBOL_CRC(usb_find_interface, 0xff866189, "_gpl");
SYMBOL_CRC(usb_for_each_dev, 0x4ad0bb45, "_gpl");
SYMBOL_CRC(usb_free_coherent, 0x69859f69, "_gpl");
SYMBOL_CRC(usb_get_current_frame_number, 0x5035f09d, "_gpl");
SYMBOL_CRC(usb_get_dev, 0x84c17484, "_gpl");
SYMBOL_CRC(usb_get_intf, 0xfffd8b17, "_gpl");
SYMBOL_CRC(usb_ifnum_to_if, 0xeed58c47, "_gpl");
SYMBOL_CRC(usb_intf_get_dma_device, 0xde37ed91, "_gpl");
SYMBOL_CRC(usb_lock_device_for_reset, 0x9690f14f, "_gpl");
SYMBOL_CRC(usb_put_dev, 0x3ed8948b, "_gpl");
SYMBOL_CRC(usb_put_intf, 0x34b6c9f4, "_gpl");
SYMBOL_CRC(ehci_cf_port_reset_rwsem, 0x59a1fab8, "_gpl");
SYMBOL_CRC(usb_disable_lpm, 0x24fc2742, "_gpl");
SYMBOL_CRC(usb_disable_ltm, 0x9d9440fa, "_gpl");
SYMBOL_CRC(usb_enable_lpm, 0xf8571622, "_gpl");
SYMBOL_CRC(usb_enable_ltm, 0x413f719a, "_gpl");
SYMBOL_CRC(usb_ep0_reinit, 0x1637727c, "_gpl");
SYMBOL_CRC(usb_hub_claim_port, 0x3afbbc0d, "_gpl");
SYMBOL_CRC(usb_hub_clear_tt_buffer, 0xf0b3e7a3, "_gpl");
SYMBOL_CRC(usb_hub_find_child, 0x90251d4c, "_gpl");
SYMBOL_CRC(usb_hub_release_port, 0x96595068, "_gpl");
SYMBOL_CRC(usb_queue_reset_device, 0xaa6357eb, "_gpl");
SYMBOL_CRC(usb_reset_device, 0x1f4cdf7a, "_gpl");
SYMBOL_CRC(usb_root_hub_lost_power, 0xc453ac99, "_gpl");
SYMBOL_CRC(usb_set_device_state, 0xd0a3db9e, "_gpl");
SYMBOL_CRC(usb_unlocked_disable_lpm, 0x83fdf628, "_gpl");
SYMBOL_CRC(usb_unlocked_enable_lpm, 0x55681970, "_gpl");
SYMBOL_CRC(usb_wakeup_enabled_descendants, 0x7db0ce31, "_gpl");
SYMBOL_CRC(usb_wakeup_notification, 0x7d3a4f7d, "_gpl");
SYMBOL_CRC(__usb_create_hcd, 0xa1376585, "_gpl");
SYMBOL_CRC(usb_add_hcd, 0xb895aa29, "_gpl");
SYMBOL_CRC(usb_alloc_streams, 0x8b69e56e, "_gpl");
SYMBOL_CRC(usb_bus_idr, 0x3461ba36, "_gpl");
SYMBOL_CRC(usb_bus_idr_lock, 0x2181b0a1, "_gpl");
SYMBOL_CRC(usb_calc_bus_time, 0x7e64181d, "_gpl");
SYMBOL_CRC(usb_create_hcd, 0xd0cdcd50, "_gpl");
SYMBOL_CRC(usb_create_shared_hcd, 0xa7f7e9f3, "_gpl");
SYMBOL_CRC(usb_free_streams, 0x4e18a152, "_gpl");
SYMBOL_CRC(usb_get_hcd, 0xe9d3b946, "_gpl");
SYMBOL_CRC(usb_hc_died, 0x14d1c51e, "_gpl");
SYMBOL_CRC(usb_hcd_check_unlink_urb, 0x9f194991, "_gpl");
SYMBOL_CRC(usb_hcd_end_port_resume, 0x1db078a8, "_gpl");
SYMBOL_CRC(usb_hcd_giveback_urb, 0xda4d9ee0, "_gpl");
SYMBOL_CRC(usb_hcd_irq, 0x70cf032f, "_gpl");
SYMBOL_CRC(usb_hcd_is_primary_hcd, 0x8b5091e3, "_gpl");
SYMBOL_CRC(usb_hcd_link_urb_to_ep, 0x0d547228, "_gpl");
SYMBOL_CRC(usb_hcd_map_urb_for_dma, 0xf68da5ea, "_gpl");
SYMBOL_CRC(usb_hcd_platform_shutdown, 0x6a629c28, "_gpl");
SYMBOL_CRC(usb_hcd_poll_rh_status, 0x195835b2, "_gpl");
SYMBOL_CRC(usb_hcd_resume_root_hub, 0x15ce5904, "_gpl");
SYMBOL_CRC(usb_hcd_setup_local_mem, 0x781ef4a9, "_gpl");
SYMBOL_CRC(usb_hcd_start_port_resume, 0xbe704cae, "_gpl");
SYMBOL_CRC(usb_hcd_unlink_urb_from_ep, 0x3f2b3508, "_gpl");
SYMBOL_CRC(usb_hcd_unmap_urb_for_dma, 0xdb0a1dca, "_gpl");
SYMBOL_CRC(usb_hcd_unmap_urb_setup_for_dma, 0x5f15d216, "_gpl");
SYMBOL_CRC(usb_hcds_loaded, 0xc17515d7, "_gpl");
SYMBOL_CRC(usb_mon_deregister, 0xfed11ed1, "_gpl");
SYMBOL_CRC(usb_mon_register, 0xf97805d7, "_gpl");
SYMBOL_CRC(usb_put_hcd, 0x6ba7a5f7, "_gpl");
SYMBOL_CRC(usb_remove_hcd, 0xefb60ad6, "_gpl");
SYMBOL_CRC(usb_alloc_urb, 0xd30a346c, "_gpl");
SYMBOL_CRC(usb_anchor_empty, 0x614782f1, "_gpl");
SYMBOL_CRC(usb_anchor_resume_wakeups, 0x9f140889, "_gpl");
SYMBOL_CRC(usb_anchor_suspend_wakeups, 0x508afef4, "_gpl");
SYMBOL_CRC(usb_anchor_urb, 0x7439b55a, "_gpl");
SYMBOL_CRC(usb_block_urb, 0xb7bc0708, "_gpl");
SYMBOL_CRC(usb_free_urb, 0xd7f575dd, "_gpl");
SYMBOL_CRC(usb_get_from_anchor, 0xec62b0cc, "_gpl");
SYMBOL_CRC(usb_get_urb, 0xf80287bb, "_gpl");
SYMBOL_CRC(usb_init_urb, 0xf9848d2c, "_gpl");
SYMBOL_CRC(usb_kill_anchored_urbs, 0xf47de486, "_gpl");
SYMBOL_CRC(usb_kill_urb, 0x67a16781, "_gpl");
SYMBOL_CRC(usb_pipe_type_check, 0xde75268e, "_gpl");
SYMBOL_CRC(usb_poison_anchored_urbs, 0x2f63e634, "_gpl");
SYMBOL_CRC(usb_poison_urb, 0xd022af8b, "_gpl");
SYMBOL_CRC(usb_scuttle_anchored_urbs, 0xfaba248a, "_gpl");
SYMBOL_CRC(usb_submit_urb, 0x993f0de1, "_gpl");
SYMBOL_CRC(usb_unanchor_urb, 0x1414da88, "_gpl");
SYMBOL_CRC(usb_unlink_anchored_urbs, 0xef83eed1, "_gpl");
SYMBOL_CRC(usb_unlink_urb, 0xe302d1e1, "_gpl");
SYMBOL_CRC(usb_unpoison_anchored_urbs, 0x906dd327, "_gpl");
SYMBOL_CRC(usb_unpoison_urb, 0x81c1f232, "_gpl");
SYMBOL_CRC(usb_urb_ep_type_check, 0xa43b54fd, "_gpl");
SYMBOL_CRC(usb_wait_anchor_empty_timeout, 0x3c72724e, "_gpl");
SYMBOL_CRC(cdc_parse_cdc_header, 0xc6ba13e6, "");
SYMBOL_CRC(usb_bulk_msg, 0xa0208b0f, "_gpl");
SYMBOL_CRC(usb_clear_halt, 0xd97313de, "_gpl");
SYMBOL_CRC(usb_control_msg, 0xf4da8394, "_gpl");
SYMBOL_CRC(usb_control_msg_recv, 0xfd73e05f, "_gpl");
SYMBOL_CRC(usb_control_msg_send, 0x404511c6, "_gpl");
SYMBOL_CRC(usb_driver_set_configuration, 0x3dea65d7, "_gpl");
SYMBOL_CRC(usb_get_descriptor, 0x284369fc, "_gpl");
SYMBOL_CRC(usb_get_status, 0xcae55146, "_gpl");
SYMBOL_CRC(usb_interrupt_msg, 0x62b07e4f, "_gpl");
SYMBOL_CRC(usb_reset_configuration, 0x0c5dfd90, "_gpl");
SYMBOL_CRC(usb_reset_endpoint, 0xbcedd639, "_gpl");
SYMBOL_CRC(usb_set_configuration, 0x7da3f23e, "_gpl");
SYMBOL_CRC(usb_set_interface, 0x357e9105, "_gpl");
SYMBOL_CRC(usb_sg_cancel, 0x0189e868, "_gpl");
SYMBOL_CRC(usb_sg_init, 0xe28542d3, "_gpl");
SYMBOL_CRC(usb_sg_wait, 0xf5856c89, "_gpl");
SYMBOL_CRC(usb_string, 0x3e64127e, "_gpl");
SYMBOL_CRC(usb_autopm_get_interface, 0xa05df63f, "_gpl");
SYMBOL_CRC(usb_autopm_get_interface_async, 0x6f72cce8, "_gpl");
SYMBOL_CRC(usb_autopm_get_interface_no_resume, 0x2a4f8448, "_gpl");
SYMBOL_CRC(usb_autopm_put_interface, 0x48dff8dd, "_gpl");
SYMBOL_CRC(usb_autopm_put_interface_async, 0x6b6f37a8, "_gpl");
SYMBOL_CRC(usb_autopm_put_interface_no_suspend, 0x3f495589, "_gpl");
SYMBOL_CRC(usb_deregister, 0xa6fa3c0c, "_gpl");
SYMBOL_CRC(usb_deregister_device_driver, 0xff790b27, "_gpl");
SYMBOL_CRC(usb_device_match_id, 0x6d461ba3, "_gpl");
SYMBOL_CRC(usb_disable_autosuspend, 0xb6001447, "_gpl");
SYMBOL_CRC(usb_driver_claim_interface, 0xf368ce6b, "_gpl");
SYMBOL_CRC(usb_driver_release_interface, 0x2ab8fd87, "_gpl");
SYMBOL_CRC(usb_enable_autosuspend, 0x7884076d, "_gpl");
SYMBOL_CRC(usb_match_id, 0x4691141e, "_gpl");
SYMBOL_CRC(usb_match_one_id, 0x92ad6b83, "_gpl");
SYMBOL_CRC(usb_register_device_driver, 0x99f0bf1e, "_gpl");
SYMBOL_CRC(usb_register_driver, 0x52c9ee7b, "_gpl");
SYMBOL_CRC(usb_show_dynids, 0x845b2069, "_gpl");
SYMBOL_CRC(usb_store_new_id, 0x8b030c95, "_gpl");
SYMBOL_CRC(usb_deregister_dev, 0x0ec16d85, "_gpl");
SYMBOL_CRC(usb_register_dev, 0xd89ed76b, "_gpl");
SYMBOL_CRC(usb_register_notify, 0x89bbafc6, "_gpl");
SYMBOL_CRC(usb_unregister_notify, 0x811dc334, "_gpl");
SYMBOL_CRC(usb_choose_configuration, 0x6b5bf5b6, "_gpl");
SYMBOL_CRC(usb_phy_roothub_alloc, 0xd4497940, "_gpl");
SYMBOL_CRC(usb_phy_roothub_calibrate, 0x851e6003, "_gpl");
SYMBOL_CRC(usb_phy_roothub_exit, 0xe39d0794, "_gpl");
SYMBOL_CRC(usb_phy_roothub_init, 0xc93ee1e7, "_gpl");
SYMBOL_CRC(usb_phy_roothub_power_off, 0x8c89e3b8, "_gpl");
SYMBOL_CRC(usb_phy_roothub_power_on, 0x9c803020, "_gpl");
SYMBOL_CRC(usb_phy_roothub_resume, 0xa323308e, "_gpl");
SYMBOL_CRC(usb_phy_roothub_set_mode, 0x5bdae35b, "_gpl");
SYMBOL_CRC(usb_phy_roothub_suspend, 0xf969d571, "_gpl");
SYMBOL_CRC(usb_of_get_device_node, 0xa7029b22, "_gpl");
SYMBOL_CRC(usb_of_get_interface_node, 0xf88240f8, "_gpl");
SYMBOL_CRC(usb_of_has_combined_node, 0x67e0abf9, "_gpl");
SYMBOL_CRC(usb_hcd_pci_pm_ops, 0xbdf8eec0, "_gpl");
SYMBOL_CRC(usb_hcd_pci_probe, 0xe5dc4115, "_gpl");
SYMBOL_CRC(usb_hcd_pci_remove, 0x252ffdb5, "_gpl");
SYMBOL_CRC(usb_hcd_pci_shutdown, 0xbbca6470, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x2f5b6a75, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x760a0f4f, "yield" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x1697d536, "__class_create" },
	{ 0xe6ff0ece, "device_set_of_node_from_dev" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x477347d3, "dma_pool_create" },
	{ 0xcabc8ce8, "bus_unregister_notifier" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x6531ce6f, "pci_enable_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b5dc7d2, "devm_memremap" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x26d8e86a, "param_get_string" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x1b34f795, "dmam_alloc_attrs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a4a365d, "driver_remove_file" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd6991a08, "sysfs_add_file_to_group" },
	{ 0xa90e5e16, "driver_attach" },
	{ 0xacaaba89, "device_unregister" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xdc430db2, "gen_pool_dma_alloc_align" },
	{ 0x49970de8, "finish_wait" },
	{ 0x10fe9b11, "pci_get_device" },
	{ 0x774fba91, "dma_unmap_page_attrs" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x512e2917, "pci_dev_run_wake" },
	{ 0xb020ff70, "devm_ioremap" },
	{ 0x1dc36668, "pci_prepare_to_sleep" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xde22425, "current_time" },
	{ 0x9d669763, "memcpy" },
	{ 0xbacafb2f, "component_del" },
	{ 0xd2a61657, "remap_pfn_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xd09b5103, "kobject_get_path" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xabbb5ae1, "bus_for_each_drv" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x20b2fa3f, "pci_irq_vector" },
	{ 0x51943974, "get_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xd5ac24e5, "blocking_notifier_chain_register" },
	{ 0x4a9d88f7, "param_set_copystring" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x89fdba70, "device_create_bin_file" },
	{ 0x9a5ec9c0, "__put_cred" },
	{ 0xec3f2003, "__suspend_report_result" },
	{ 0x7d09596b, "dma_pool_alloc" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x7ade9187, "gen_pool_dma_alloc" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0xe4893f71, "dma_map_page_attrs" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0xecf4e01, "__devm_request_region" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0xb8083db7, "device_reprobe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8805a073, "blocking_notifier_call_chain" },
	{ 0x308629fc, "of_get_next_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeea1d74f, "debugfs_lookup_and_remove" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x29fb02d9, "driver_create_file" },
	{ 0x7d59dd46, "pm_wq" },
	{ 0x878aa441, "phy_exit" },
	{ 0x2e9bda82, "bus_register_notifier" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0x6481ef87, "bus_for_each_dev" },
	{ 0x9f984513, "strrchr" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x305d2083, "sysfs_create_link" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0xa7843ba0, "cdev_add" },
	{ 0xa64a9908, "device_create_file" },
	{ 0xa346975c, "idr_remove" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4e7cbc7e, "kobject_uevent_env" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe1057349, "sysfs_unmerge_group" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xaf159bd8, "bus_find_device" },
	{ 0xc33aa545, "device_add" },
	{ 0xd1f3e39c, "sysfs_remove_link" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd27fa87, "memchr" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x4d0e8846, "init_uts_ns" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf66696c7, "device_create" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0xd6b93c1, "sysfs_merge_group" },
	{ 0x329ed743, "device_attach" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd27c06a3, "phy_power_on" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf9493ce3, "no_seek_end_llseek" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x622844f4, "sysfs_remove_file_from_group" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x514209cc, "of_device_is_available" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd89da37f, "movable_zone" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc8d1d2, "device_register" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x7875340b, "device_bind_driver" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xb2a8cc10, "device_match_devt" },
	{ 0xfc182d24, "pci_alloc_irq_vectors_affinity" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb340014f, "pci_set_master" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x7d6c2636, "gen_pool_add_owner" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x966297b, "pm_runtime_no_callbacks" },
	{ 0x239bc445, "phy_power_off" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x44db0616, "devm_gen_pool_create" },
	{ 0xfb1d7438, "down_read" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb9b61c88, "dev_pm_qos_flags" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x41c10d93, "phy_set_mode_ext" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa3657481, "_dev_notice" },
	{ 0xeea0399, "strscpy" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7c74c7da, "pm_runtime_forbid" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xfb24d4ab, "blocking_notifier_chain_unregister" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x45159cd8, "pm_runtime_allow" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x3fba701, "wait_for_completion_killable_timeout" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xe06699b2, "sg_next" },
	{ 0xb58cea90, "__register_chrdev" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x709019dd, "device_pm_wait_for_dev" },
	{ 0x46399ea2, "pci_disable_device" },
	{ 0x1d51c57c, "kill_pid_usb_asyncio" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xef0af09a, "dma_mmap_attrs" },
	{ 0xd4c500, "usb_decode_interval" },
	{ 0x34d2c3cf, "of_count_phandle_with_args" },
	{ 0xd472c890, "usb_hcd_amd_remote_wakeup_quirk" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0xa3171abe, "dev_pm_qos_add_request" },
	{ 0xec29f5ee, "pm_runtime_barrier" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xdedb388d, "component_add" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xea07d716, "page_address" },
	{ 0xe6f84149, "device_release_driver" },
	{ 0x97255bdf, "strlen" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x400623e9, "phy_calibrate" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x79672c7a, "dev_pm_qos_expose_flags" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeb94011d, "dev_pm_qos_remove_request" },
	{ 0x79577703, "pci_free_irq_vectors" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xa7b3181c, "up_read" },
	{ 0xddec41ac, "driver_register" },
	{ 0x6390d26a, "put_pid" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x59e4979d, "devm_of_phy_get_by_index" },
	{ 0x49bc6156, "cdev_del" },
	{ 0xb0d11909, "device_remove_bin_file" },
	{ 0x214a0676, "device_remove_file" },
	{ 0xa51a2967, "_find_next_zero_bit_le" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4d4c3ded, "phy_init" },
	{ 0x92b57248, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usb-common");

MODULE_ALIAS("usb:v0424p5534d*dc*dsc*dp*ic09isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p*d*dc*dsc*dp*ic09isc*ip*in*");
MODULE_ALIAS("usb:v0451p8142d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc09dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic09isc*ip*in*");

MODULE_INFO(srcversion, "686E020E1ED651722A7AFC0");
