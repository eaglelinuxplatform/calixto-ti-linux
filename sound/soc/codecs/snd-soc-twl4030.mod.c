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
	{ 0x6394860d, "snd_soc_dapm_put_enum_double" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xea5245c8, "snd_pcm_hw_constraint_minmax" },
	{ 0x9a9c0207, "gpiod_set_raw_value" },
	{ 0x9f4f08ee, "snd_soc_put_enum_double" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x255b0633, "snd_soc_get_enum_double" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x37a1968e, "snd_soc_dapm_put_volsw" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0x48b5f8d, "twl4030_audio_get_mclk" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0xf5cf3016, "snd_soc_component_update_bits" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xa057df8f, "twl_set_regcache_bypass" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0xe9051f08, "snd_soc_dapm_get_volsw" },
	{ 0x3acdf325, "twl4030_audio_enable_resource" },
	{ 0x52953543, "snd_soc_dapm_get_enum_double" },
	{ 0xc471c67a, "twl4030_audio_disable_resource" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "1E51FBA9EA1006F6B3F7E7C");
