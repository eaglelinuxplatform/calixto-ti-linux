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

SYMBOL_CRC(__media_device_register, 0x5aceb5ba, "_gpl");
SYMBOL_CRC(__media_device_usb_init, 0xc67b95a4, "_gpl");
SYMBOL_CRC(media_device_cleanup, 0xd422af09, "_gpl");
SYMBOL_CRC(media_device_init, 0x47b624c2, "_gpl");
SYMBOL_CRC(media_device_pci_init, 0x0e4cb5fe, "_gpl");
SYMBOL_CRC(media_device_register_entity, 0x92c28b71, "_gpl");
SYMBOL_CRC(media_device_register_entity_notify, 0x3cdc848f, "_gpl");
SYMBOL_CRC(media_device_unregister, 0x71586ffe, "_gpl");
SYMBOL_CRC(media_device_unregister_entity, 0xeada9c7f, "_gpl");
SYMBOL_CRC(media_device_unregister_entity_notify, 0xd015a696, "_gpl");
SYMBOL_CRC(__media_entity_next_link, 0x126ffffa, "_gpl");
SYMBOL_CRC(__media_entity_remove_links, 0xdcaf3a8b, "_gpl");
SYMBOL_CRC(__media_entity_setup_link, 0x3fe56fa0, "_gpl");
SYMBOL_CRC(__media_pipeline_start, 0x1e6258fb, "_gpl");
SYMBOL_CRC(__media_pipeline_stop, 0xb7c4e441, "_gpl");
SYMBOL_CRC(__media_remove_intf_link, 0x2c31f785, "_gpl");
SYMBOL_CRC(__media_remove_intf_links, 0x71f9a1b1, "_gpl");
SYMBOL_CRC(media_create_ancillary_link, 0xe26c1dbf, "_gpl");
SYMBOL_CRC(media_create_intf_link, 0xb487bedf, "_gpl");
SYMBOL_CRC(media_create_pad_link, 0x263a69c3, "_gpl");
SYMBOL_CRC(media_create_pad_links, 0x24bcedda, "_gpl");
SYMBOL_CRC(media_devnode_create, 0x8462974c, "_gpl");
SYMBOL_CRC(media_devnode_remove, 0x04396313, "_gpl");
SYMBOL_CRC(media_entity_enum_cleanup, 0xe5ceecd6, "_gpl");
SYMBOL_CRC(media_entity_enum_init, 0x0fe57bac, "_gpl");
SYMBOL_CRC(media_entity_find_link, 0x0b49cfd0, "_gpl");
SYMBOL_CRC(media_entity_get_fwnode_pad, 0x99bf08e9, "_gpl");
SYMBOL_CRC(media_entity_pads_init, 0x888ff671, "_gpl");
SYMBOL_CRC(media_entity_pipeline, 0xcadea627, "_gpl");
SYMBOL_CRC(media_entity_remote_pad_unique, 0x73cc5236, "_gpl");
SYMBOL_CRC(media_entity_remove_links, 0x0d590506, "_gpl");
SYMBOL_CRC(media_entity_setup_link, 0x2df716c7, "_gpl");
SYMBOL_CRC(media_get_pad_index, 0xbf77349e, "_gpl");
SYMBOL_CRC(media_graph_walk_cleanup, 0x5d0b90fc, "_gpl");
SYMBOL_CRC(media_graph_walk_init, 0x234d8d8e, "_gpl");
SYMBOL_CRC(media_graph_walk_next, 0xd8bee715, "_gpl");
SYMBOL_CRC(media_graph_walk_start, 0xdb49f606, "_gpl");
SYMBOL_CRC(media_pad_pipeline, 0x148d5d32, "_gpl");
SYMBOL_CRC(media_pad_remote_pad_first, 0xce8b1960, "_gpl");
SYMBOL_CRC(media_pad_remote_pad_unique, 0x3d62ae95, "_gpl");
SYMBOL_CRC(media_pipeline_alloc_start, 0x42bd974a, "_gpl");
SYMBOL_CRC(media_pipeline_start, 0x0d835ae0, "_gpl");
SYMBOL_CRC(media_pipeline_stop, 0xc5f5b0f1, "_gpl");
SYMBOL_CRC(media_remove_intf_link, 0x22a028d1, "_gpl");
SYMBOL_CRC(media_remove_intf_links, 0xe221a813, "_gpl");
SYMBOL_CRC(media_request_get_by_fd, 0x3919fcc1, "_gpl");
SYMBOL_CRC(media_request_object_bind, 0xc4927ebf, "_gpl");
SYMBOL_CRC(media_request_object_complete, 0xd243c06a, "_gpl");
SYMBOL_CRC(media_request_object_find, 0x60a16b10, "_gpl");
SYMBOL_CRC(media_request_object_init, 0x33a56943, "_gpl");
SYMBOL_CRC(media_request_object_put, 0xd795e18b, "_gpl");
SYMBOL_CRC(media_request_object_unbind, 0x95a1e5e8, "_gpl");
SYMBOL_CRC(media_request_put, 0xa8ce1090, "_gpl");
SYMBOL_CRC(media_device_delete, 0x2614f760, "_gpl");
SYMBOL_CRC(media_device_usb_allocate, 0x67e5e126, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x421d4dcf, "krealloc" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x9836dc68, "anon_inode_getfile" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x37d2adfd, "fd_install" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x637493f3, "__wake_up" },
	{ 0x51943974, "get_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x92997ed8, "_printk" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0xa2a838e7, "fwnode_graph_parse_endpoint" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0xa64a9908, "device_create_file" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x8b1e52b6, "fput" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xa24491bf, "ida_free" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x1d6408f9, "platform_bus_type" },
	{ 0xa4313676, "kobject_set_name" },
	{ 0x15cfb2b3, "_find_first_zero_bit_le" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbafd25be, "pci_bus_type" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x214a0676, "device_remove_file" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0274EB0155978B13DDFA94");
