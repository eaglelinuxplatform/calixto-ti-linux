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

SYMBOL_CRC(dvb_device_get, 0x98c73483, "");
SYMBOL_CRC(dvb_generic_ioctl, 0x8e7f3271, "");
SYMBOL_CRC(dvb_generic_open, 0xbef283b7, "");
SYMBOL_CRC(dvb_generic_release, 0xaad34055, "");
SYMBOL_CRC(dvb_register_adapter, 0x82933d56, "");
SYMBOL_CRC(dvb_register_device, 0x8d63b76e, "");
SYMBOL_CRC(dvb_remove_device, 0x555d75bc, "");
SYMBOL_CRC(dvb_unregister_adapter, 0x32e856b2, "");
SYMBOL_CRC(dvb_unregister_device, 0x08819731, "");
SYMBOL_CRC(dvb_module_probe, 0x6acde2a1, "_gpl");
SYMBOL_CRC(dvb_module_release, 0x50cf4b05, "_gpl");
SYMBOL_CRC(dvb_dmxdev_init, 0xa33f12f6, "");
SYMBOL_CRC(dvb_dmxdev_release, 0xc8e1a547, "");
SYMBOL_CRC(dvb_dmx_init, 0xb7feaf5a, "");
SYMBOL_CRC(dvb_dmx_release, 0xc4426d5c, "");
SYMBOL_CRC(dvb_dmx_swfilter, 0xb2edd80a, "");
SYMBOL_CRC(dvb_dmx_swfilter_204, 0xe7367529, "");
SYMBOL_CRC(dvb_dmx_swfilter_packets, 0xd7a1edab, "");
SYMBOL_CRC(dvb_dmx_swfilter_raw, 0x989a4a69, "");
SYMBOL_CRC(dvb_ca_en50221_camchange_irq, 0xbbf40274, "");
SYMBOL_CRC(dvb_ca_en50221_camready_irq, 0x2dfde9a6, "");
SYMBOL_CRC(dvb_ca_en50221_frda_irq, 0x2d81fbad, "");
SYMBOL_CRC(dvb_ca_en50221_init, 0x86135133, "");
SYMBOL_CRC(dvb_ca_en50221_release, 0x4d4e723a, "");
SYMBOL_CRC(dvb_frontend_detach, 0x831d77ca, "");
SYMBOL_CRC(dvb_frontend_reinitialise, 0x3a4fe331, "");
SYMBOL_CRC(dvb_frontend_resume, 0xca0f2d91, "");
SYMBOL_CRC(dvb_frontend_sleep_until, 0x3b93d71a, "");
SYMBOL_CRC(dvb_frontend_suspend, 0x359e1d31, "");
SYMBOL_CRC(dvb_register_frontend, 0x36b5a48c, "");
SYMBOL_CRC(dvb_unregister_frontend, 0x80305677, "");
SYMBOL_CRC(dvb_net_init, 0x50194202, "");
SYMBOL_CRC(dvb_net_release, 0xc01a0704, "");
SYMBOL_CRC(dvb_ringbuffer_avail, 0x82143c17, "");
SYMBOL_CRC(dvb_ringbuffer_empty, 0x2c12c287, "");
SYMBOL_CRC(dvb_ringbuffer_flush, 0x1609d70c, "");
SYMBOL_CRC(dvb_ringbuffer_flush_spinlock_wakeup, 0x3fd96ba7, "");
SYMBOL_CRC(dvb_ringbuffer_free, 0xfe73d116, "");
SYMBOL_CRC(dvb_ringbuffer_init, 0x214d5b4e, "");
SYMBOL_CRC(dvb_ringbuffer_read, 0x1e7a8283, "");
SYMBOL_CRC(dvb_ringbuffer_read_user, 0x8026ef3e, "");
SYMBOL_CRC(dvb_ringbuffer_write, 0xc0b93899, "");
SYMBOL_CRC(dvb_ringbuffer_write_user, 0x42d15a1b, "");
SYMBOL_CRC(intlog10, 0x08733236, "");
SYMBOL_CRC(intlog2, 0x5f2b1d95, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x53f0a8d6, "eth_header" },
	{ 0x1697d536, "__class_create" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xef706529, "consume_skb" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x49970de8, "finish_wait" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x581cde4e, "up" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x943dc8aa, "crc32_be" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x5e5ffd4e, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd270645c, "eth_header_parse" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1449535e, "module_put" },
	{ 0xa7843ba0, "cdev_add" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf66696c7, "device_create" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0xf0ef52e8, "down" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x84b183ae, "strncmp" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x71c90087, "memcmp" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xa319e2db, "i2c_new_client_device" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xda254d72, "freezing_slow_path" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc037a42c, "default_llseek" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfb1d7438, "down_read" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xeea0399, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa7b3181c, "up_read" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xee51174, "cdev_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x49bc6156, "cdev_del" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "351B03023C473F36E8CE74F");
