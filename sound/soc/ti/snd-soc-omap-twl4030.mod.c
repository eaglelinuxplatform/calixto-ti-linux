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
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xade2837a, "snd_soc_jack_add_gpios" },
	{ 0x84e3229a, "snd_soc_dapm_disable_pin" },
	{ 0xad7c082b, "snd_soc_of_parse_audio_routing" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa2c4d6eb, "snd_soc_runtime_set_dai_fmt" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xd732d57f, "snd_soc_card_jack_new_pins" },
	{ 0xfc82e956, "snd_soc_pm_ops" },
	{ 0xf59764e0, "snd_soc_of_parse_card_name" },
	{ 0xe7479581, "devm_snd_soc_register_card" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,omap-twl4030");
MODULE_ALIAS("of:N*T*Cti,omap-twl4030C*");

MODULE_INFO(srcversion, "89A8E3FE75D22B277C682CA");
