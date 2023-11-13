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

SYMBOL_CRC(snd_timer_close, 0xa4abcee5, "");
SYMBOL_CRC(snd_timer_continue, 0xb6502ff7, "");
SYMBOL_CRC(snd_timer_global_free, 0x92c042cd, "");
SYMBOL_CRC(snd_timer_global_new, 0x835a97ef, "");
SYMBOL_CRC(snd_timer_global_register, 0x32dee4c7, "");
SYMBOL_CRC(snd_timer_instance_free, 0xa04abc4f, "");
SYMBOL_CRC(snd_timer_instance_new, 0xf059b017, "");
SYMBOL_CRC(snd_timer_interrupt, 0x3a486d71, "");
SYMBOL_CRC(snd_timer_new, 0xa8f32085, "");
SYMBOL_CRC(snd_timer_notify, 0x81369573, "");
SYMBOL_CRC(snd_timer_open, 0xbad357f5, "");
SYMBOL_CRC(snd_timer_pause, 0x9cc563b5, "");
SYMBOL_CRC(snd_timer_resolution, 0xb509d186, "");
SYMBOL_CRC(snd_timer_start, 0x5a816491, "");
SYMBOL_CRC(snd_timer_stop, 0x039cb607, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0x792afccf, "snd_info_create_module_entry" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xda840e03, "snd_fasync_helper" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x51943974, "get_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xe1681620, "snd_unregister_device" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xd466a3c7, "snd_device_new" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xb7e7508, "snd_device_initialize" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf361f555, "stream_open" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x49ddd3df, "snd_register_device" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "97311D7218B71D0AEA590D6");
