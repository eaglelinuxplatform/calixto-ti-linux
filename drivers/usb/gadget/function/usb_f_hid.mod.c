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
	{ 0x421d4dcf, "krealloc" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1697d536, "__class_create" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x49970de8, "finish_wait" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0x910e55f7, "alloc_ep_req" },
	{ 0xe61a6643, "__current" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x39552dff, "devm_kmemdup" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xa24491bf, "ida_free" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0xee51174, "cdev_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "9F92480D7299BC3F45D0269");
