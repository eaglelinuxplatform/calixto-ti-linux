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

SYMBOL_CRC(ffs_lock, 0x12772b85, "_gpl");
SYMBOL_CRC(ffs_name_dev, 0x8ab2d202, "_gpl");
SYMBOL_CRC(ffs_single_dev, 0x8b492902, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcd7d1c3f, "_copy_to_iter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x18a3c90f, "usb_string_ids_n" },
	{ 0x4b8ca4c, "simple_dir_inode_operations" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x87c4f1ca, "usb_ep_fifo_flush" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x1cfd08ef, "vmalloc_to_page" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xf166fe08, "new_inode" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0x8bae9c5a, "unregister_filesystem" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x49970de8, "finish_wait" },
	{ 0xbaa69228, "d_alloc_name" },
	{ 0xf50b3064, "simple_statfs" },
	{ 0xfb90feeb, "d_make_root" },
	{ 0xde22425, "current_time" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xbec5473b, "usb_ep_fifo_status" },
	{ 0x662dff2, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa6d1bfa9, "fs_param_is_bool" },
	{ 0x637493f3, "__wake_up" },
	{ 0x91f80cd, "register_filesystem" },
	{ 0x3803a0df, "kiocb_set_cancel_fn" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0xdc6721f2, "kthread_use_mm" },
	{ 0xc452a80d, "get_tree_nodev" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0xba9528f3, "fs_param_is_u32" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x3f3a2097, "simple_dir_operations" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xe61a6643, "__current" },
	{ 0x9df10ab5, "usb_ep_dequeue" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe0a80509, "usb_ep_clear_halt" },
	{ 0x62d0e2a6, "__wake_up_locked" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0xb7362c90, "do_wait_intr_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x82c664ac, "unregister_gadget_item" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x9f667ed, "kill_litter_super" },
	{ 0xb4c3f95c, "sg_alloc_table_from_pages_segment" },
	{ 0x5f754e5a, "memset" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1f7293dc, "d_delete" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xeea0399, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x17e86783, "d_add" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2b15b443, "dup_iter" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xde796cd0, "dput" },
	{ 0x94d4d7b, "generic_delete_inode" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0xf361f555, "stream_open" },
	{ 0x8462113c, "__fs_parse" },
	{ 0xcbf017bd, "kthread_unuse_mm" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "1FB4B33D53FE1966C62C3FA");
