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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(usb_wwan_chars_in_buffer, 0x9f19140c, "");
SYMBOL_CRC(usb_wwan_close, 0x7910ad1a, "");
SYMBOL_CRC(usb_wwan_dtr_rts, 0x335abf7e, "");
SYMBOL_CRC(usb_wwan_open, 0x6bdc14f4, "");
SYMBOL_CRC(usb_wwan_port_remove, 0xc8b7bcd6, "");
SYMBOL_CRC(usb_wwan_resume, 0x9dbb8967, "");
SYMBOL_CRC(usb_wwan_suspend, 0xb6c811c8, "");
SYMBOL_CRC(usb_wwan_tiocmget, 0x2957de67, "");
SYMBOL_CRC(usb_wwan_tiocmset, 0xaae0676c, "");
SYMBOL_CRC(usb_wwan_write, 0xfc2f6742, "");
SYMBOL_CRC(usb_wwan_write_room, 0x353a11e1, "");
SYMBOL_CRC(usb_wwan_port_probe, 0xf96369c7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0xe302d1e1, "usb_unlink_urb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6f72cce8, "usb_autopm_get_interface_async" },
	{ 0x9d669763, "memcpy" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x7439b55a, "usb_anchor_urb" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6b6f37a8, "usb_autopm_put_interface_async" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfe62c0d, "usb_serial_port_softint" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8afd151c, "tty_insert_flip_string_fixed_flag" },
	{ 0x39949d8, "tty_flip_buffer_push" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xec62b0cc, "usb_get_from_anchor" },
	{ 0x2a4f8448, "usb_autopm_get_interface_no_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usbserial");


MODULE_INFO(srcversion, "25FA6CD4D0727870D30ACE7");
