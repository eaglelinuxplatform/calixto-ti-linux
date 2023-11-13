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

SYMBOL_CRC(usb_serial_resume, 0xfc18a75d, "");
SYMBOL_CRC(usb_serial_suspend, 0x6568d56f, "");
SYMBOL_CRC(usb_serial_claim_interface, 0xbe700ca6, "_gpl");
SYMBOL_CRC(usb_serial_deregister_drivers, 0xa8c93182, "_gpl");
SYMBOL_CRC(usb_serial_port_softint, 0xbfe62c0d, "_gpl");
SYMBOL_CRC(usb_serial_register_drivers, 0x7427d2fc, "_gpl");
SYMBOL_CRC(usb_serial_generic_chars_in_buffer, 0x5b5bd9af, "_gpl");
SYMBOL_CRC(usb_serial_generic_close, 0xe497ca9a, "_gpl");
SYMBOL_CRC(usb_serial_generic_get_icount, 0x03cd685c, "_gpl");
SYMBOL_CRC(usb_serial_generic_open, 0xaa29d281, "_gpl");
SYMBOL_CRC(usb_serial_generic_process_read_urb, 0xd870671b, "_gpl");
SYMBOL_CRC(usb_serial_generic_read_bulk_callback, 0x4315eeb6, "_gpl");
SYMBOL_CRC(usb_serial_generic_resume, 0xd1047d53, "_gpl");
SYMBOL_CRC(usb_serial_generic_submit_read_urbs, 0x3f8de7ab, "_gpl");
SYMBOL_CRC(usb_serial_generic_throttle, 0xffc0d501, "_gpl");
SYMBOL_CRC(usb_serial_generic_tiocmiwait, 0xbdb44a0d, "_gpl");
SYMBOL_CRC(usb_serial_generic_unthrottle, 0x41655326, "_gpl");
SYMBOL_CRC(usb_serial_generic_wait_until_sent, 0xc190bc35, "_gpl");
SYMBOL_CRC(usb_serial_generic_write, 0xc61b8890, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_bulk_callback, 0xdddcb663, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_start, 0x955dc491, "_gpl");
SYMBOL_CRC(usb_serial_handle_dcd_change, 0xb3c0937c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34b6c9f4, "usb_put_intf" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x47925794, "idr_find" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x39949d8, "tty_flip_buffer_push" },
	{ 0xa90e5e16, "driver_attach" },
	{ 0x49970de8, "finish_wait" },
	{ 0x200e2ab6, "tty_kref_put" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0x92ad6b83, "usb_match_one_id" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xe4b99b31, "__tty_alloc_driver" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8aa0ba52, "tty_standard_install" },
	{ 0x637493f3, "__wake_up" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0xcfd8aedb, "tty_hangup" },
	{ 0x790fdd2c, "tty_unregister_driver" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xfffd8b17, "usb_get_intf" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2ab8fd87, "usb_driver_release_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x3ed8948b, "usb_put_dev" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c6007e1, "put_device" },
	{ 0x84c17484, "usb_get_dev" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x1a8c1557, "tty_unregister_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1449535e, "module_put" },
	{ 0x964badc4, "tty_port_tty_wakeup" },
	{ 0xa346975c, "idr_remove" },
	{ 0x4691141e, "usb_match_id" },
	{ 0x8b030c95, "usb_store_new_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xc33aa545, "device_add" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x8d0e121b, "tty_ldisc_ref" },
	{ 0x59c23da, "tty_vhangup" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x2e6b792e, "tty_port_destroy" },
	{ 0x8afd151c, "tty_insert_flip_string_fixed_flag" },
	{ 0x4967fd59, "tty_port_init" },
	{ 0xf368ce6b, "usb_driver_claim_interface" },
	{ 0x70059627, "seq_putc" },
	{ 0xd022af8b, "usb_poison_urb" },
	{ 0x81c1f232, "usb_unpoison_urb" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xeba194d8, "tty_port_register_device" },
	{ 0x9ee18a8d, "tty_ldisc_deref" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x1cfee4f1, "device_del" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xe1912ee4, "tty_port_close" },
	{ 0x81f7fa67, "__tty_insert_flip_char" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xbe864089, "tty_register_driver" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x498b17db, "tty_port_hangup" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x575b870, "tty_port_open" },
	{ 0x46372883, "seq_puts" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xddec41ac, "driver_register" },
	{ 0x9c9b8bb2, "tty_driver_kref_put" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6e3c970, "_find_first_bit_le" },
	{ 0xb063c3b3, "tty_port_tty_get" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");


MODULE_INFO(srcversion, "A5F704D34C00F5D532E0C16");
