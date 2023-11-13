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

SYMBOL_CRC(fsg_common_create_lun, 0x3c6a07d0, "_gpl");
SYMBOL_CRC(fsg_common_create_luns, 0xd1a3e8e0, "_gpl");
SYMBOL_CRC(fsg_common_free_buffers, 0x9a0221c7, "_gpl");
SYMBOL_CRC(fsg_common_remove_lun, 0x0554aab4, "_gpl");
SYMBOL_CRC(fsg_common_remove_luns, 0x141fce2a, "_gpl");
SYMBOL_CRC(fsg_common_set_cdev, 0x563696ef, "_gpl");
SYMBOL_CRC(fsg_common_set_inquiry_string, 0x6acb4179, "_gpl");
SYMBOL_CRC(fsg_common_set_num_buffers, 0x1ccb58f7, "_gpl");
SYMBOL_CRC(fsg_common_set_sysfs, 0x7e26d4a5, "_gpl");
SYMBOL_CRC(fsg_config_from_params, 0xab6c68ac, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_in_desc, 0xb54d0d95, "_gpl");
SYMBOL_CRC(fsg_fs_bulk_out_desc, 0x1710b539, "_gpl");
SYMBOL_CRC(fsg_fs_function, 0xa5f99b69, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_in_desc, 0x95cffb3e, "_gpl");
SYMBOL_CRC(fsg_hs_bulk_out_desc, 0x56344daf, "_gpl");
SYMBOL_CRC(fsg_hs_function, 0x857b6dc2, "_gpl");
SYMBOL_CRC(fsg_intf_desc, 0xb52ba28a, "_gpl");
SYMBOL_CRC(fsg_lun_close, 0x79a6746b, "_gpl");
SYMBOL_CRC(fsg_lun_fsync_sub, 0x3615a60f, "_gpl");
SYMBOL_CRC(fsg_lun_open, 0x75dbd04b, "_gpl");
SYMBOL_CRC(fsg_show_cdrom, 0x5066fcf0, "_gpl");
SYMBOL_CRC(fsg_show_file, 0xfee0dbdc, "_gpl");
SYMBOL_CRC(fsg_show_inquiry_string, 0xed54536f, "_gpl");
SYMBOL_CRC(fsg_show_nofua, 0x7f4936b9, "_gpl");
SYMBOL_CRC(fsg_show_removable, 0xa696eeff, "_gpl");
SYMBOL_CRC(fsg_show_ro, 0x12168c44, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_comp_desc, 0x423845e4, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_in_desc, 0x2933ee1d, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_comp_desc, 0xa5cae92f, "_gpl");
SYMBOL_CRC(fsg_ss_bulk_out_desc, 0xf4efc0c8, "_gpl");
SYMBOL_CRC(fsg_ss_function, 0x398778e1, "_gpl");
SYMBOL_CRC(fsg_store_cdrom, 0x67a07e69, "_gpl");
SYMBOL_CRC(fsg_store_file, 0x783b7a8d, "_gpl");
SYMBOL_CRC(fsg_store_forced_eject, 0x9af1d375, "_gpl");
SYMBOL_CRC(fsg_store_inquiry_string, 0x5e1e5168, "_gpl");
SYMBOL_CRC(fsg_store_nofua, 0xe1b97256, "_gpl");
SYMBOL_CRC(fsg_store_removable, 0x8d7d0874, "_gpl");
SYMBOL_CRC(fsg_store_ro, 0xa034360e, "_gpl");
SYMBOL_CRC(store_cdrom_address, 0xb3adf38d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x414a407a, "filp_open" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x87c4f1ca, "usb_ep_fifo_flush" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x99bb8806, "memmove" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xacaaba89, "device_unregister" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x49970de8, "finish_wait" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0x270a9764, "invalidate_mapping_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7486f32, "send_sig_info" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ec7f1a7, "kthread_complete_and_exit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc9eadaa0, "I_BDEV" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe61a6643, "__current" },
	{ 0x9df10ab5, "usb_ep_dequeue" },
	{ 0xae422ab1, "usb_composite_setup_continue" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b1e52b6, "fput" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xe0a80509, "usb_ep_clear_halt" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x82c664ac, "unregister_gadget_item" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0xc8d1d2, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xea17e519, "kernel_read" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfb1d7438, "down_read" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0xa84aff44, "vfs_fsync" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6d43d552, "file_path" },
	{ 0xbfe13d19, "config_item_put" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x3e27065b, "usb_ep_set_wedge" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x349cba85, "strchr" },
	{ 0xb162ae68, "dequeue_signal" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xa7b3181c, "up_read" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x126f575c, "kernel_write" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udc-core,libcomposite");


MODULE_INFO(srcversion, "553098D46C083D68D9FAFF0");
