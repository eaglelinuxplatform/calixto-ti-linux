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

SYMBOL_CRC(snd_ecards_limit, 0x3971b4df, "");
SYMBOL_CRC(snd_lookup_minor_data, 0xb2e5ae4a, "");
SYMBOL_CRC(snd_major, 0x8f595b11, "");
SYMBOL_CRC(snd_register_device, 0x49ddd3df, "");
SYMBOL_CRC(snd_request_card, 0x4a3ea5c0, "");
SYMBOL_CRC(snd_unregister_device, 0xe1681620, "");
SYMBOL_CRC(sound_debugfs_root, 0x09b7293f, "_gpl");
SYMBOL_CRC(snd_card_disconnect, 0xedfdaaa3, "");
SYMBOL_CRC(snd_card_file_add, 0xf51964e5, "");
SYMBOL_CRC(snd_card_file_remove, 0x1b994a33, "");
SYMBOL_CRC(snd_card_free, 0xc1e80553, "");
SYMBOL_CRC(snd_card_free_when_closed, 0xac5974c2, "");
SYMBOL_CRC(snd_card_new, 0x3030b7a5, "");
SYMBOL_CRC(snd_card_register, 0xbf7563c7, "");
SYMBOL_CRC(snd_card_set_id, 0x0317a2a3, "");
SYMBOL_CRC(snd_component_add, 0x6b6d0c57, "");
SYMBOL_CRC(snd_mixer_oss_notify_callback, 0x4d80d214, "");
SYMBOL_CRC(snd_power_wait, 0x899dbe14, "");
SYMBOL_CRC(snd_card_add_dev_attr, 0x00a63568, "_gpl");
SYMBOL_CRC(snd_card_disconnect_sync, 0xa948c050, "_gpl");
SYMBOL_CRC(snd_card_free_on_error, 0x39422037, "_gpl");
SYMBOL_CRC(snd_card_ref, 0xf18b8037, "_gpl");
SYMBOL_CRC(snd_device_initialize, 0x0b7e7508, "_gpl");
SYMBOL_CRC(snd_devm_card_new, 0x4ba0a1eb, "_gpl");
SYMBOL_CRC(snd_power_ref_and_wait, 0x54f40e17, "_gpl");
SYMBOL_CRC(copy_from_user_toio, 0xce3ca308, "");
SYMBOL_CRC(copy_to_user_fromio, 0x602c96f0, "");
SYMBOL_CRC(snd_ctl_add, 0x964a87e5, "");
SYMBOL_CRC(snd_ctl_boolean_mono_info, 0x5ae0973a, "");
SYMBOL_CRC(snd_ctl_boolean_stereo_info, 0x9d6f4ce4, "");
SYMBOL_CRC(snd_ctl_enum_info, 0xcc6a729f, "");
SYMBOL_CRC(snd_ctl_find_id, 0xe3297fc1, "");
SYMBOL_CRC(snd_ctl_find_numid, 0xdfb9fb24, "");
SYMBOL_CRC(snd_ctl_free_one, 0xfde79451, "");
SYMBOL_CRC(snd_ctl_new1, 0x6c3a4c26, "");
SYMBOL_CRC(snd_ctl_notify, 0xb35a3639, "");
SYMBOL_CRC(snd_ctl_notify_one, 0xe5cf93ef, "");
SYMBOL_CRC(snd_ctl_register_ioctl, 0x039ad008, "");
SYMBOL_CRC(snd_ctl_remove, 0xcf60dbc0, "");
SYMBOL_CRC(snd_ctl_remove_id, 0xb695696f, "");
SYMBOL_CRC(snd_ctl_rename, 0x551871b4, "");
SYMBOL_CRC(snd_ctl_rename_id, 0x8aca30b6, "");
SYMBOL_CRC(snd_ctl_replace, 0xb36e7d93, "");
SYMBOL_CRC(snd_ctl_unregister_ioctl, 0x176f192d, "");
SYMBOL_CRC(snd_ctl_activate_id, 0xb3d40e25, "_gpl");
SYMBOL_CRC(snd_ctl_disconnect_layer, 0xe34f7f6c, "_gpl");
SYMBOL_CRC(snd_ctl_get_preferred_subdevice, 0xad406e73, "_gpl");
SYMBOL_CRC(snd_ctl_register_layer, 0x9bb6f3dc, "_gpl");
SYMBOL_CRC(snd_ctl_request_layer, 0xfaf598c6, "_gpl");
SYMBOL_CRC(release_and_free_resource, 0x30e11a72, "");
SYMBOL_CRC(snd_pci_quirk_lookup, 0xac1f0fad, "");
SYMBOL_CRC(snd_pci_quirk_lookup_id, 0x73076315, "");
SYMBOL_CRC(__snd_printk, 0x614c7976, "_gpl");
SYMBOL_CRC(snd_fasync_free, 0x5af762f1, "_gpl");
SYMBOL_CRC(snd_fasync_helper, 0xda840e03, "_gpl");
SYMBOL_CRC(snd_kill_fasync, 0xf8f2a4eb, "_gpl");
SYMBOL_CRC(snd_device_free, 0x7400fa25, "");
SYMBOL_CRC(snd_device_new, 0xd466a3c7, "");
SYMBOL_CRC(snd_device_register, 0xc347b834, "");
SYMBOL_CRC(snd_device_disconnect, 0xbfc64882, "_gpl");
SYMBOL_CRC(snd_device_get_state, 0x33494c7a, "_gpl");
SYMBOL_CRC(snd_info_create_card_entry, 0xcaa38ea4, "");
SYMBOL_CRC(snd_info_create_module_entry, 0x792afccf, "");
SYMBOL_CRC(snd_info_free_entry, 0x7798415f, "");
SYMBOL_CRC(snd_info_get_line, 0x24a94b26, "");
SYMBOL_CRC(snd_info_get_str, 0x9e6d79f8, "");
SYMBOL_CRC(snd_info_register, 0xb2a51d20, "");
SYMBOL_CRC(snd_seq_root, 0xe9b5e57b, "");
SYMBOL_CRC(snd_card_rw_proc_new, 0xad609532, "_gpl");
SYMBOL_CRC(snd_oss_info_register, 0x8df3789f, "");
SYMBOL_CRC(snd_lookup_oss_minor_data, 0x198788b4, "");
SYMBOL_CRC(snd_register_oss_device, 0xcd9c295c, "");
SYMBOL_CRC(snd_unregister_oss_device, 0x0ce825be, "");
SYMBOL_CRC(snd_jack_add_new_kctl, 0x4c31f633, "");
SYMBOL_CRC(snd_jack_new, 0x8d4a1cdc, "");
SYMBOL_CRC(snd_jack_report, 0x4c84b9ee, "");
SYMBOL_CRC(snd_jack_set_key, 0xe5f5c2b8, "");
SYMBOL_CRC(snd_jack_set_parent, 0xf5c64fd0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x17d14c05, "kill_fasync" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x33af1848, "proc_mkdir_mode" },
	{ 0xb312e47e, "device_initialize" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0xa1d131ed, "vmemdup_user" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0xfe41829c, "xa_store_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x59451080, "proc_create_data" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x33ea0459, "devm_remove_action" },
	{ 0x51943974, "get_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1f051c7b, "devres_add" },
	{ 0x31a448b9, "single_open_size" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x8aa0402b, "_raw_read_unlock_irqrestore" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7f198911, "register_sound_special_device" },
	{ 0x1210fb32, "_raw_read_lock_irqsave" },
	{ 0x9f984513, "strrchr" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x61651be, "strcat" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xc33aa545, "device_add" },
	{ 0x4d0e8846, "init_uts_ns" },
	{ 0xcb606eb9, "xa_load" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x87249862, "input_set_capability" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0xf2dcb4db, "fasync_helper" },
	{ 0xf1e046cc, "panic" },
	{ 0x71c90087, "memcmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1cfee4f1, "device_del" },
	{ 0xed1fe1a1, "proc_mkdir" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfea15b62, "input_event" },
	{ 0x17363758, "proc_remove" },
	{ 0xd1b54c1, "_raw_write_unlock_irqrestore" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3c8f6ef0, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8456e9a7, "xa_erase" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2bff5887, "xa_destroy" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc5f6b8a6, "proc_set_size" },
	{ 0xb58cea90, "__register_chrdev" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xa4313676, "kobject_set_name" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xe9325f03, "downgrade_write" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf361f555, "stream_open" },
	{ 0x34937f96, "single_release" },
	{ 0x95a8ce2d, "pid_vnr" },
	{ 0x9ea5083d, "devres_find" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x8d66d4b, "_raw_write_lock_irqsave" },
	{ 0xb5b59ab, "sound_class" },
	{ 0x352c05d9, "release_resource" },
	{ 0x97255bdf, "strlen" },
	{ 0x26871d25, "proc_symlink" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf01014b6, "single_open" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xa7b3181c, "up_read" },
	{ 0x6390d26a, "put_pid" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "soundcore");


MODULE_INFO(srcversion, "61594985BB62AABA014A4DC");
