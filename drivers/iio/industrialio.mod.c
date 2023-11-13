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

SYMBOL_CRC(__iio_device_register, 0x6d38e373, "");
SYMBOL_CRC(iio_bus_type, 0xb773c22f, "");
SYMBOL_CRC(iio_device_alloc, 0x7ca19dd7, "");
SYMBOL_CRC(iio_device_free, 0xf4ff0406, "");
SYMBOL_CRC(iio_device_get_clock, 0x0fa67143, "");
SYMBOL_CRC(iio_device_set_clock, 0xf77ddd0f, "");
SYMBOL_CRC(iio_device_unregister, 0x1826c1bb, "");
SYMBOL_CRC(iio_get_time_ns, 0xce96afe6, "");
SYMBOL_CRC(iio_read_const_attr, 0x7d9e3f0c, "");
SYMBOL_CRC(iio_read_mount_matrix, 0xe79f146b, "");
SYMBOL_CRC(__devm_iio_device_register, 0x376dd2cb, "_gpl");
SYMBOL_CRC(devm_iio_device_alloc, 0xf2a95050, "_gpl");
SYMBOL_CRC(iio_buffer_enabled, 0x2e354057, "_gpl");
SYMBOL_CRC(iio_device_claim_direct_mode, 0xfdfafefe, "_gpl");
SYMBOL_CRC(iio_device_get_current_mode, 0xcf2da44c, "_gpl");
SYMBOL_CRC(iio_device_id, 0xbc56964a, "_gpl");
SYMBOL_CRC(iio_device_release_direct_mode, 0x4fddcca4, "_gpl");
SYMBOL_CRC(iio_enum_available_read, 0x95c63d50, "_gpl");
SYMBOL_CRC(iio_enum_read, 0x618615e9, "_gpl");
SYMBOL_CRC(iio_enum_write, 0x6a4d1bcc, "_gpl");
SYMBOL_CRC(iio_format_value, 0x20ce344a, "_gpl");
SYMBOL_CRC(iio_get_debugfs_dentry, 0x4549fb53, "_gpl");
SYMBOL_CRC(iio_show_mount_matrix, 0xabdc2376, "_gpl");
SYMBOL_CRC(iio_str_to_fixpoint, 0x26f6b499, "_gpl");
SYMBOL_CRC(iio_push_event, 0x87e32bcc, "");
SYMBOL_CRC(devm_fwnode_iio_channel_get_by_name, 0x14837665, "_gpl");
SYMBOL_CRC(devm_iio_channel_get, 0x080a9c02, "_gpl");
SYMBOL_CRC(devm_iio_channel_get_all, 0x8f7007c4, "_gpl");
SYMBOL_CRC(devm_iio_map_array_register, 0xd8151953, "_gpl");
SYMBOL_CRC(fwnode_iio_channel_get_by_name, 0x008ebd28, "_gpl");
SYMBOL_CRC(iio_channel_get, 0xf5da8d1c, "_gpl");
SYMBOL_CRC(iio_channel_get_all, 0xd531efea, "_gpl");
SYMBOL_CRC(iio_channel_release, 0xeec7485c, "_gpl");
SYMBOL_CRC(iio_channel_release_all, 0xda1116a3, "_gpl");
SYMBOL_CRC(iio_convert_raw_to_processed, 0x248b5bf5, "_gpl");
SYMBOL_CRC(iio_get_channel_ext_info_count, 0xeb02c37e, "_gpl");
SYMBOL_CRC(iio_get_channel_type, 0xefb5e364, "_gpl");
SYMBOL_CRC(iio_map_array_register, 0x46f28cab, "_gpl");
SYMBOL_CRC(iio_map_array_unregister, 0x14d938e4, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_attribute, 0x020c86e8, "_gpl");
SYMBOL_CRC(iio_read_avail_channel_raw, 0xb4cf8a12, "_gpl");
SYMBOL_CRC(iio_read_channel_attribute, 0xd313f3ad, "_gpl");
SYMBOL_CRC(iio_read_channel_average_raw, 0x98bd5348, "_gpl");
SYMBOL_CRC(iio_read_channel_ext_info, 0x291db37b, "_gpl");
SYMBOL_CRC(iio_read_channel_offset, 0x92fcc47f, "_gpl");
SYMBOL_CRC(iio_read_channel_processed, 0xffc71f60, "_gpl");
SYMBOL_CRC(iio_read_channel_processed_scale, 0x17e7e2f9, "_gpl");
SYMBOL_CRC(iio_read_channel_raw, 0x260c4035, "_gpl");
SYMBOL_CRC(iio_read_channel_scale, 0x4cc736f8, "_gpl");
SYMBOL_CRC(iio_read_max_channel_raw, 0xa629e2ae, "_gpl");
SYMBOL_CRC(iio_write_channel_attribute, 0x02223ee6, "_gpl");
SYMBOL_CRC(iio_write_channel_ext_info, 0xaf490a99, "_gpl");
SYMBOL_CRC(iio_write_channel_raw, 0xa273a14e, "_gpl");
SYMBOL_CRC(iio_buffer_init, 0xb36c57cb, "");
SYMBOL_CRC(iio_buffer_get, 0x9d6d0a09, "_gpl");
SYMBOL_CRC(iio_buffer_put, 0x25c9932f, "_gpl");
SYMBOL_CRC(iio_device_attach_buffer, 0x62dc79db, "_gpl");
SYMBOL_CRC(iio_pop_from_buffer, 0x020ed211, "_gpl");
SYMBOL_CRC(iio_push_to_buffers, 0x518dcf66, "_gpl");
SYMBOL_CRC(iio_push_to_buffers_with_ts_unaligned, 0x275ebbed, "_gpl");
SYMBOL_CRC(iio_update_buffers, 0xec168cf7, "_gpl");
SYMBOL_CRC(iio_validate_scan_mask_onehot, 0x8d73c1ae, "_gpl");
SYMBOL_CRC(__iio_trigger_alloc, 0x948b7413, "");
SYMBOL_CRC(iio_pollfunc_store_time, 0xdf76bbeb, "");
SYMBOL_CRC(iio_trigger_free, 0x3adf8615, "");
SYMBOL_CRC(iio_trigger_generic_data_rdy_poll, 0x2d6bcdcb, "");
SYMBOL_CRC(iio_trigger_notify_done, 0xf65ba1a5, "");
SYMBOL_CRC(iio_trigger_poll, 0xbb03195a, "");
SYMBOL_CRC(iio_trigger_poll_chained, 0xe3777d46, "");
SYMBOL_CRC(iio_trigger_register, 0x0e842b26, "");
SYMBOL_CRC(iio_trigger_set_immutable, 0x6808f310, "");
SYMBOL_CRC(iio_trigger_unregister, 0x4fabd742, "");
SYMBOL_CRC(iio_trigger_using_own, 0xae722ed9, "");
SYMBOL_CRC(iio_trigger_validate_own_device, 0x731aa2f8, "");
SYMBOL_CRC(__devm_iio_trigger_alloc, 0x5e18f96b, "_gpl");
SYMBOL_CRC(devm_iio_trigger_register, 0x9a9a61bd, "_gpl");
SYMBOL_CRC(iio_alloc_pollfunc, 0xdb4301c8, "_gpl");
SYMBOL_CRC(iio_dealloc_pollfunc, 0x6d3c147b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x49970de8, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x78c31428, "fwnode_property_get_reference_args" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x47c9369a, "__module_get" },
	{ 0x51943974, "get_device" },
	{ 0x7abf0905, "fwnode_property_match_string" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x790e85a3, "fwnode_get_parent" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x19fb9b5f, "device_match_fwnode" },
	{ 0x94ae233f, "device_set_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0xf8645965, "anon_inode_getfd" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0xa2e53f1a, "handle_simple_irq" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x1449535e, "module_put" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xe450090f, "simple_open" },
	{ 0xaf159bd8, "bus_find_device" },
	{ 0xc33aa545, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x8d7ecf91, "device_property_read_string_array" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0xa24491bf, "ida_free" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdf25376c, "__irq_alloc_descs" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc695be2f, "fwnode_get_next_parent" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x95f6a868, "devm_krealloc" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1881b860, "__irq_set_handler" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x130bd83c, "irq_set_chip" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xa6e3c970, "_find_first_bit_le" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "95E2DA6D1466DC1C4D79818");
