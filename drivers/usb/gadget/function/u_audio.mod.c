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

SYMBOL_CRC(g_audio_cleanup, 0xbd1e65eb, "_gpl");
SYMBOL_CRC(g_audio_setup, 0xa0c404b2, "_gpl");
SYMBOL_CRC(u_audio_get_capture_srate, 0x97d9e203, "_gpl");
SYMBOL_CRC(u_audio_get_mute, 0xbf0e1cab, "_gpl");
SYMBOL_CRC(u_audio_get_playback_srate, 0x284b7fbb, "_gpl");
SYMBOL_CRC(u_audio_get_volume, 0x695df918, "_gpl");
SYMBOL_CRC(u_audio_set_capture_srate, 0x5babac2a, "_gpl");
SYMBOL_CRC(u_audio_set_mute, 0x95624aa5, "_gpl");
SYMBOL_CRC(u_audio_set_playback_srate, 0x60debaad, "_gpl");
SYMBOL_CRC(u_audio_set_volume, 0x7db5f4e3, "_gpl");
SYMBOL_CRC(u_audio_start_capture, 0x926fc54f, "_gpl");
SYMBOL_CRC(u_audio_start_playback, 0x698843ed, "_gpl");
SYMBOL_CRC(u_audio_stop_capture, 0xc695763b, "_gpl");
SYMBOL_CRC(u_audio_stop_playback, 0x3eb40c7b, "_gpl");
SYMBOL_CRC(u_audio_suspend, 0x5d64c0ea, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x59e5070d, "__do_div64" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe10fc5da, "snd_pcm_stream_lock" },
	{ 0x99709d2a, "snd_pcm_stream_unlock" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x9d669763, "memcpy" },
	{ 0x220834f1, "snd_pcm_period_elapsed" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb35a3639, "snd_ctl_notify" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0x5f754e5a, "memset" },
	{ 0x70aab31, "snd_pcm_hw_constraint_integer" },
	{ 0xac5974c2, "snd_card_free_when_closed" },
	{ 0x37a0cba, "kfree" },
	{ 0xe61a6643, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9df10ab5, "usb_ep_dequeue" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x3030b7a5, "snd_card_new" },
	{ 0x56a2ba82, "snd_pcm_new" },
	{ 0xeea0399, "strscpy" },
	{ 0xe26e0f7e, "snd_pcm_set_ops" },
	{ 0x6c3a4c26, "snd_ctl_new1" },
	{ 0x964a87e5, "snd_ctl_add" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7dd244b, "snd_pcm_set_managed_buffer_all" },
	{ 0xbf7563c7, "snd_card_register" },
	{ 0xc1e80553, "snd_card_free" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,udc-core,snd,libcomposite");


MODULE_INFO(srcversion, "66C2F1631EE863C888F701E");
