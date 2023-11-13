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

SYMBOL_CRC(snd_rawmidi_drain_input, 0x5482e31d, "");
SYMBOL_CRC(snd_rawmidi_drain_output, 0x0dfdc078, "");
SYMBOL_CRC(snd_rawmidi_drop_output, 0xeaafe28d, "");
SYMBOL_CRC(snd_rawmidi_info_select, 0x390619f7, "");
SYMBOL_CRC(snd_rawmidi_input_params, 0x57f531a0, "");
SYMBOL_CRC(snd_rawmidi_kernel_open, 0xe3e17c08, "");
SYMBOL_CRC(snd_rawmidi_kernel_read, 0xc5118bc6, "");
SYMBOL_CRC(snd_rawmidi_kernel_release, 0x615cc9b0, "");
SYMBOL_CRC(snd_rawmidi_kernel_write, 0xa793fe37, "");
SYMBOL_CRC(snd_rawmidi_new, 0x6587ec7f, "");
SYMBOL_CRC(snd_rawmidi_output_params, 0xcadbb595, "");
SYMBOL_CRC(snd_rawmidi_proceed, 0x5c476a38, "");
SYMBOL_CRC(snd_rawmidi_receive, 0x19ede06b, "");
SYMBOL_CRC(snd_rawmidi_set_ops, 0x6d6ce041, "");
SYMBOL_CRC(snd_rawmidi_transmit, 0x5a8c6d5c, "");
SYMBOL_CRC(snd_rawmidi_transmit_ack, 0x3df17d0c, "");
SYMBOL_CRC(snd_rawmidi_transmit_empty, 0x1e72afe5, "");
SYMBOL_CRC(snd_rawmidi_transmit_peek, 0xeb46c12b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xad406e73, "snd_ctl_get_preferred_subdevice" },
	{ 0x49970de8, "finish_wait" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xce825be, "snd_unregister_oss_device" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xcd9c295c, "snd_register_oss_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0x39ad008, "snd_ctl_register_ioctl" },
	{ 0xf51964e5, "snd_card_file_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xe1681620, "snd_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xd466a3c7, "snd_device_new" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x176f192d, "snd_ctl_unregister_ioctl" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xcaa38ea4, "snd_info_create_card_entry" },
	{ 0xb7e7508, "snd_device_initialize" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf361f555, "stream_open" },
	{ 0x95a8ce2d, "pid_vnr" },
	{ 0x1b994a33, "snd_card_file_remove" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x49ddd3df, "snd_register_device" },
	{ 0x6390d26a, "put_pid" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "6A0D44900D66B14264B89CA");
