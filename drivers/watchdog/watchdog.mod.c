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

SYMBOL_CRC(devm_watchdog_register_device, 0x29e470f2, "_gpl");
SYMBOL_CRC(watchdog_init_timeout, 0xff0b04c8, "_gpl");
SYMBOL_CRC(watchdog_register_device, 0xd576926c, "_gpl");
SYMBOL_CRC(watchdog_set_restart_priority, 0xae09412b, "_gpl");
SYMBOL_CRC(watchdog_unregister_device, 0x5676fc58, "_gpl");
SYMBOL_CRC(watchdog_set_last_hw_keepalive, 0xd9e2bd20, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb5aceb9d, "kthread_cancel_work_sync" },
	{ 0x7c4df4ed, "kthread_create_worker" },
	{ 0xe96ccc17, "misc_deregister" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0xb312e47e, "device_initialize" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x47c9369a, "__module_get" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x51943974, "get_device" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x1f051c7b, "devres_add" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x92997ed8, "_printk" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xa1ac4c, "kthread_queue_work" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x9574b7b2, "__class_register" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5253049c, "misc_register" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x9dfc2e89, "kthread_destroy_worker" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6ce6e8d6, "of_alias_get_id" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xf361f555, "stream_open" },
	{ 0xf416746, "sched_set_fifo" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xee51174, "cdev_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "99581CE2567F481AAA25BE3");
