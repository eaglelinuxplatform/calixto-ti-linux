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
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1697d536, "__class_create" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3461ba36, "usb_bus_idr" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x637493f3, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xe61a6643, "__current" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0xa7843ba0, "cdev_add" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0xf66696c7, "device_create" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x2181b0a1, "usb_bus_idr_lock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd89da37f, "movable_zone" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x5f754e5a, "memset" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xe06699b2, "sg_next" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xea07d716, "page_address" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x49bc6156, "cdev_del" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0xf97805d7, "usb_mon_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common");


MODULE_INFO(srcversion, "6C5A595E5DB513A4C9F5D4D");
