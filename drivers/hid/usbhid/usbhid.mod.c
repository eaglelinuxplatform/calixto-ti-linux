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

SYMBOL_CRC(usb_hid_driver, 0xb88b6ac9, "_gpl");
SYMBOL_CRC(hiddev_hid_event, 0x902f0436, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd2cffd11, "hid_output_report" },
	{ 0x48516ebc, "hid_lookup_quirk" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8f1bf125, "usb_alloc_coherent" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa3e359cf, "hid_driver_suspend" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x17d14c05, "kill_fasync" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xe81949f1, "hid_driver_reset_resume" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f524164, "hidinput_count_leds" },
	{ 0x3f495589, "usb_autopm_put_interface_no_suspend" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e6c9906, "hid_driver_resume" },
	{ 0x2a4f8448, "usb_autopm_get_interface_no_resume" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x48151c29, "hid_allocate_device" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x341b95fb, "hid_destroy_device" },
	{ 0x62b07e4f, "usb_interrupt_msg" },
	{ 0xff866189, "usb_find_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xd97313de, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x6f72cce8, "usb_autopm_get_interface_async" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xe61a6643, "__current" },
	{ 0x9f7f841b, "hid_alloc_report_buf" },
	{ 0xaa6357eb, "usb_queue_reset_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x69859f69, "usb_free_coherent" },
	{ 0xe8789bc, "hid_set_field" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x2efb5a2d, "hid_hw_request" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xbc767166, "hid_hw_open" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0xd89ed76b, "usb_register_dev" },
	{ 0xad0ae938, "hid_check_keys_pressed" },
	{ 0xf2dcb4db, "fasync_helper" },
	{ 0x81c1f232, "usb_unpoison_urb" },
	{ 0x6b6f37a8, "usb_autopm_put_interface_async" },
	{ 0xc94827e1, "hid_hw_close" },
	{ 0x71c90087, "memcmp" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3e64127e, "usb_string" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb7bc0708, "usb_block_urb" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xc6a6bcfb, "hid_input_report" },
	{ 0x5495392, "hid_debug" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe302d1e1, "usb_unlink_urb" },
	{ 0xeea0399, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xec16d85, "usb_deregister_dev" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe8b4798, "hid_parse_report" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc3779e9b, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "9FD767D467C73CB301718EB");
