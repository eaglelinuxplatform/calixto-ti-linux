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

SYMBOL_CRC(__snd_usbmidi_create, 0x4351796f, "");
SYMBOL_CRC(snd_usbmidi_disconnect, 0xd9d2bb03, "");
SYMBOL_CRC(snd_usbmidi_input_start, 0x16756dc0, "");
SYMBOL_CRC(snd_usbmidi_input_stop, 0x63343b1d, "");
SYMBOL_CRC(snd_usbmidi_resume, 0xb2af19e1, "");
SYMBOL_CRC(snd_usbmidi_suspend, 0xbed43a41, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x19ede06b, "snd_rawmidi_receive" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a8c6d5c, "snd_rawmidi_transmit" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x964a87e5, "snd_ctl_add" },
	{ 0x8f1bf125, "usb_alloc_coherent" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a4f8448, "usb_autopm_get_interface_no_resume" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x6c3a4c26, "snd_ctl_new1" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa0208b0f, "usb_bulk_msg" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3df17d0c, "snd_rawmidi_transmit_ack" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xe61a6643, "__current" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xa43b54fd, "usb_urb_ep_type_check" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x69859f69, "usb_free_coherent" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeb46c12b, "snd_rawmidi_transmit_peek" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0xb35a3639, "snd_ctl_notify" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3e64127e, "usb_string" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfb1d7438, "down_read" },
	{ 0x6587ec7f, "snd_rawmidi_new" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6d6ce041, "snd_rawmidi_set_ops" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xa7b3181c, "up_read" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x5c476a38, "snd_rawmidi_proceed" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,snd-rawmidi,snd");


MODULE_INFO(srcversion, "F8558A3A443A231E3D544CC");
