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

SYMBOL_CRC(cec_allocate_adapter, 0xd33c5505, "_gpl");
SYMBOL_CRC(cec_delete_adapter, 0xe4c3b259, "_gpl");
SYMBOL_CRC(cec_register_adapter, 0x2d3d904d, "_gpl");
SYMBOL_CRC(cec_unregister_adapter, 0x4ec5abaf, "_gpl");
SYMBOL_CRC(cec_fill_conn_info_from_drm, 0x156e6e51, "_gpl");
SYMBOL_CRC(cec_get_edid_phys_addr, 0xbe4de675, "_gpl");
SYMBOL_CRC(cec_queue_pin_5v_event, 0xcef547ca, "_gpl");
SYMBOL_CRC(cec_queue_pin_cec_event, 0xc8c3ff05, "_gpl");
SYMBOL_CRC(cec_queue_pin_hpd_event, 0x9373f6c7, "_gpl");
SYMBOL_CRC(cec_received_msg_ts, 0x8806a87f, "_gpl");
SYMBOL_CRC(cec_s_conn_info, 0xd6d2c8d1, "_gpl");
SYMBOL_CRC(cec_s_log_addrs, 0x3ab83dd4, "_gpl");
SYMBOL_CRC(cec_s_phys_addr, 0xea00e690, "_gpl");
SYMBOL_CRC(cec_s_phys_addr_from_edid, 0x91027aa7, "_gpl");
SYMBOL_CRC(cec_transmit_attempt_done_ts, 0xdfd572fe, "_gpl");
SYMBOL_CRC(cec_transmit_done_ts, 0x9605ae62, "_gpl");
SYMBOL_CRC(cec_transmit_msg, 0x7dee67cb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc37335b0, "complete" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb312e47e, "device_initialize" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0x51943974, "get_device" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf98164c1, "debugfs_create_devm_seqfile" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe61a6643, "__current" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x81c5544e, "wait_for_completion_killable" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xb825d8f6, "seq_read" },
	{ 0xeea0399, "strscpy" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xa4313676, "kobject_set_name" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x46372883, "seq_puts" },
	{ 0x34937f96, "single_release" },
	{ 0x15cfb2b3, "_find_first_zero_bit_le" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xf01014b6, "single_open" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xee51174, "cdev_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6979A6E71CC6A80933BE182");
