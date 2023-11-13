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
	{ 0x89eb4317, "snd_soc_register_card" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4e0b97fa, "snd_pcm_stop" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc16c713a, "sdma_pcm_platform_register" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0xf359b46c, "snd_pcm_stream_unlock_irq" },
	{ 0xe1e941f4, "snd_pcm_stream_lock_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xd6059bdb, "snd_soc_unregister_card" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x335390e9, "snd_pcm_hw_constraint_step" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-ti-sdma");


MODULE_INFO(srcversion, "923245C6589722EF37858D5");
