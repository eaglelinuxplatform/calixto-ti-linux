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
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x263bee63, "snd_soc_limit_volume" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9072477d, "gpiod_set_raw_value_cansleep" },
	{ 0xade2837a, "snd_soc_jack_add_gpios" },
	{ 0xea5245c8, "snd_pcm_hw_constraint_minmax" },
	{ 0xdde51f28, "snd_soc_dapm_sync_unlocked" },
	{ 0xb28b04c3, "snd_soc_card_jack_new" },
	{ 0x8cde26ce, "omap_mcbsp_st_add_controls" },
	{ 0xe1925931, "snd_soc_dai_set_sysclk" },
	{ 0xdd583e9f, "devm_gpiod_put" },
	{ 0xc795ba27, "snd_soc_dapm_enable_pin_unlocked" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x169a63f7, "snd_soc_dapm_get_pin_switch" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x6f3e1a4, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x887af585, "desc_to_gpio" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x79a7c259, "snd_soc_dapm_put_pin_switch" },
	{ 0xa4adcf3c, "snd_soc_dapm_info_pin_switch" },
	{ 0xe7479581, "devm_snd_soc_register_card" },
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-omap-mcbsp");

MODULE_ALIAS("of:N*T*Cnokia,n900-audio");
MODULE_ALIAS("of:N*T*Cnokia,n900-audioC*");

MODULE_INFO(srcversion, "54EA0838C0EAA01A70EED94");
