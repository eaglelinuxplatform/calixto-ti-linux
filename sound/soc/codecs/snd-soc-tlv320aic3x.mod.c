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

SYMBOL_CRC(aic3x_probe, 0x27c2f3e9, "");
SYMBOL_CRC(aic3x_remove, 0x88ac1854, "");
SYMBOL_CRC(aic3x_regmap, 0x5dc73c5e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6394860d, "snd_soc_dapm_put_enum_double" },
	{ 0x4025ec19, "regcache_cache_only" },
	{ 0xbb527231, "regcache_sync" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb403e3c4, "snd_soc_component_read" },
	{ 0xbf59e62, "snd_soc_component_test_bits" },
	{ 0x9a9c0207, "gpiod_set_raw_value" },
	{ 0x9f4f08ee, "snd_soc_put_enum_double" },
	{ 0xa63e30b, "regcache_mark_dirty" },
	{ 0xfe990052, "gpio_free" },
	{ 0x79618cb, "snd_soc_component_write" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0xdf3d879b, "regulator_get_voltage" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x80e74a9f, "devm_regulator_register_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0x255b0633, "snd_soc_get_enum_double" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x5b11e76c, "gpiod_direction_output_raw" },
	{ 0x37a1968e, "snd_soc_dapm_put_volsw" },
	{ 0xf753351c, "snd_soc_add_component_controls" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf98d7c11, "snd_soc_dapm_add_routes" },
	{ 0x57c4a1fa, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0xf5cf3016, "snd_soc_component_update_bits" },
	{ 0xe0ae5658, "snd_soc_dapm_new_controls" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe9051f08, "snd_soc_dapm_get_volsw" },
	{ 0x1750763a, "regmap_register_patch" },
	{ 0x906f41c2, "snd_soc_dapm_mixer_update_power" },
	{ 0x52953543, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "6ECC9EC28B400267550FEAA");
