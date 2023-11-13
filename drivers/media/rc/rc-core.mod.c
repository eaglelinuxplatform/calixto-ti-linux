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

SYMBOL_CRC(devm_rc_allocate_device, 0xf268f7bd, "_gpl");
SYMBOL_CRC(devm_rc_register_device, 0x808d2604, "_gpl");
SYMBOL_CRC(rc_allocate_device, 0xdb7faa46, "_gpl");
SYMBOL_CRC(rc_free_device, 0xe8577329, "_gpl");
SYMBOL_CRC(rc_g_keycode_from_table, 0x9d7eb4b7, "_gpl");
SYMBOL_CRC(rc_keydown, 0x35d8d268, "_gpl");
SYMBOL_CRC(rc_keydown_notimeout, 0x9546a1e4, "_gpl");
SYMBOL_CRC(rc_keyup, 0x384c7ae3, "_gpl");
SYMBOL_CRC(rc_map_get, 0xe1bc9681, "_gpl");
SYMBOL_CRC(rc_map_register, 0xe7648541, "_gpl");
SYMBOL_CRC(rc_map_unregister, 0x28af3c3f, "_gpl");
SYMBOL_CRC(rc_register_device, 0x2efd122e, "_gpl");
SYMBOL_CRC(rc_repeat, 0x0ca88030, "_gpl");
SYMBOL_CRC(rc_unregister_device, 0xd2d4df84, "_gpl");
SYMBOL_CRC(ir_raw_encode_carrier, 0xb5516017, "");
SYMBOL_CRC(ir_raw_encode_scancode, 0x01098f88, "");
SYMBOL_CRC(ir_raw_gen_manchester, 0xce3696f3, "");
SYMBOL_CRC(ir_raw_gen_pd, 0x2fe55cf5, "");
SYMBOL_CRC(ir_raw_gen_pl, 0x7a02ee87, "");
SYMBOL_CRC(ir_raw_handler_register, 0xcdeec7b6, "");
SYMBOL_CRC(ir_raw_handler_unregister, 0xedcd5c46, "");
SYMBOL_CRC(ir_raw_event_handle, 0x9dfeed3d, "_gpl");
SYMBOL_CRC(ir_raw_event_set_idle, 0xcbfcda89, "_gpl");
SYMBOL_CRC(ir_raw_event_store, 0x85e03fc7, "_gpl");
SYMBOL_CRC(ir_raw_event_store_edge, 0x2d9dbd21, "_gpl");
SYMBOL_CRC(ir_raw_event_store_with_filter, 0xb1317727, "_gpl");
SYMBOL_CRC(ir_raw_event_store_with_timeout, 0x6f0dcac8, "_gpl");
SYMBOL_CRC(lirc_scancode_event, 0xd33da39d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1697d536, "__class_create" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x99bb8806, "memmove" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x55289c55, "generic_atomic64_or" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x49970de8, "finish_wait" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xfdc1ddf8, "led_trigger_register_simple" },
	{ 0x8f8f657f, "bsearch" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xd09b5103, "kobject_get_path" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd731907f, "led_trigger_unregister_simple" },
	{ 0x637493f3, "__wake_up" },
	{ 0x47c9369a, "__module_get" },
	{ 0x51943974, "get_device" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x92997ed8, "_printk" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b1e52b6, "fput" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9574b7b2, "__class_register" },
	{ 0xc33aa545, "device_add" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x93169b58, "generic_atomic64_and" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfea15b62, "input_event" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf361f555, "stream_open" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd3eeb715, "led_trigger_event" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E03D3729D3F4AC35C578A32");
