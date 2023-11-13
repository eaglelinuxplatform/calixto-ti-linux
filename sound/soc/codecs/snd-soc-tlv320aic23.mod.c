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

SYMBOL_CRC(tlv320aic23_probe, 0xeecf3ebf, "");
SYMBOL_CRC(tlv320aic23_regmap, 0x0d2c5eb0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6394860d, "snd_soc_dapm_put_enum_double" },
	{ 0xbb527231, "regcache_sync" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb403e3c4, "snd_soc_component_read" },
	{ 0x9f4f08ee, "snd_soc_put_enum_double" },
	{ 0xa63e30b, "regcache_mark_dirty" },
	{ 0x79618cb, "snd_soc_component_write" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0x255b0633, "snd_soc_get_enum_double" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x37a1968e, "snd_soc_dapm_put_volsw" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0xf5cf3016, "snd_soc_component_update_bits" },
	{ 0xe9051f08, "snd_soc_dapm_get_volsw" },
	{ 0x52953543, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "3C32C7581AB55AB14DCF484");
