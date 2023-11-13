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

SYMBOL_CRC(w1_add_master_device, 0xc0dc9a67, "");
SYMBOL_CRC(w1_remove_master_device, 0x60009a5f, "");
SYMBOL_CRC(w1_register_family, 0x8984b710, "");
SYMBOL_CRC(w1_unregister_family, 0x360d717c, "");
SYMBOL_CRC(w1_calc_crc8, 0x63757e92, "_gpl");
SYMBOL_CRC(w1_next_pullup, 0xeb4a1459, "_gpl");
SYMBOL_CRC(w1_read_8, 0x96e55aa8, "_gpl");
SYMBOL_CRC(w1_read_block, 0xe8fcc07a, "_gpl");
SYMBOL_CRC(w1_reset_bus, 0xcb692a7c, "_gpl");
SYMBOL_CRC(w1_reset_resume_command, 0x122b5313, "_gpl");
SYMBOL_CRC(w1_reset_select_slave, 0xab7798f0, "_gpl");
SYMBOL_CRC(w1_touch_bit, 0x7f9a6dd2, "_gpl");
SYMBOL_CRC(w1_touch_block, 0x2c752d8e, "_gpl");
SYMBOL_CRC(w1_triplet, 0x353e147e, "_gpl");
SYMBOL_CRC(w1_write_8, 0xb2455895, "_gpl");
SYMBOL_CRC(w1_write_block, 0x19d69590, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xef4215c8, "sysfs_remove_groups" },
	{ 0xf149e533, "sysfs_create_groups" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x182e2f09, "cn_netlink_send_mult" },
	{ 0x2c6007e1, "put_device" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x7d67edc3, "flush_signals" },
	{ 0xe8bc40c5, "cn_netlink_send" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x56ee9f65, "hwmon_device_register_with_info" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc8d1d2, "device_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0x83d96a2, "hwmon_device_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x2da47398, "of_find_matching_node_and_match" },
	{ 0xddec41ac, "driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd2604ae2, "cn_add_callback" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cn,hwmon");


MODULE_INFO(srcversion, "33057ED3C5BE7DF1D92B5BB");
