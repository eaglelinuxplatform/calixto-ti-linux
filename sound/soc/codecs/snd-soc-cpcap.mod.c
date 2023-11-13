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
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x5305b842, "snd_soc_dapm_mux_update_power" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99b76084, "snd_soc_dai_digital_mute" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa3167f8a, "snd_soc_component_init_regmap" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x37a1968e, "snd_soc_dapm_put_volsw" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0x57c4a1fa, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0x4534861e, "regmap_read" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0x292a27c5, "dapm_regulator_event" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xe9051f08, "snd_soc_dapm_get_volsw" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "3DF442D33D0E8C7617AD359");
