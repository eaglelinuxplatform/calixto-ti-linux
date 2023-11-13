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

SYMBOL_CRC(counter_add, 0xc085a6fa, "_gpl");
SYMBOL_CRC(counter_alloc, 0xd7a8f25e, "_gpl");
SYMBOL_CRC(counter_priv, 0xaa716bc0, "_gpl");
SYMBOL_CRC(counter_put, 0x85b2f1ea, "_gpl");
SYMBOL_CRC(counter_unregister, 0xa2bb223d, "_gpl");
SYMBOL_CRC(devm_counter_add, 0x575fa169, "_gpl");
SYMBOL_CRC(devm_counter_alloc, 0x1a7e28fb, "_gpl");
SYMBOL_CRC(counter_push_event, 0x4750cf2c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x51943974, "get_device" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe61a6643, "__current" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xa24491bf, "ida_free" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf57fd9b2, "nonseekable_open" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D286F1B00611D48359B741");
