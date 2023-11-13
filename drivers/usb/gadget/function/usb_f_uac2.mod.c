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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x60debaad, "u_audio_set_playback_srate" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0x95624aa5, "u_audio_set_mute" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x7db5f4e3, "u_audio_set_volume" },
	{ 0x698843ed, "u_audio_start_playback" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbf0e1cab, "u_audio_get_mute" },
	{ 0xc695763b, "u_audio_stop_capture" },
	{ 0x3eb40c7b, "u_audio_stop_playback" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xa0c404b2, "g_audio_setup" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x84b183ae, "strncmp" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97d9e203, "u_audio_get_capture_srate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0x5d64c0ea, "u_audio_suspend" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x695df918, "u_audio_get_volume" },
	{ 0x284b7fbb, "u_audio_get_playback_srate" },
	{ 0xe0419ac4, "kstrtos16" },
	{ 0x926fc54f, "u_audio_start_capture" },
	{ 0xbd1e65eb, "g_audio_cleanup" },
	{ 0x5babac2a, "u_audio_set_capture_srate" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "u_audio,libcomposite,udc-core");


MODULE_INFO(srcversion, "D325E6DECF4725673CA7239");
