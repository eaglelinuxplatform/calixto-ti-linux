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
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x6bdd680c, "snd_pcm_fill_iec958_consumer_hw_params" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x964a87e5, "snd_ctl_add" },
	{ 0x8a9165d1, "snd_soc_jack_report" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc6233368, "snd_pcm_add_chmap_ctls" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0x9d669763, "memcpy" },
	{ 0xc48340f7, "snd_pcm_fill_iec958_consumer" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x9b746c56, "snd_pcm_create_iec958_consumer_default" },
	{ 0x6c3a4c26, "snd_ctl_new1" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xf98d7c11, "snd_soc_dapm_add_routes" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x7c0798e5, "snd_pcm_hw_constraint_eld" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-soc-core");


MODULE_INFO(srcversion, "EA585815FE372DCFA6A27CE");
