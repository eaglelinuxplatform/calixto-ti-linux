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
	{ 0x53d71abb, "regulator_enable" },
	{ 0x4025ec19, "regcache_cache_only" },
	{ 0xbb527231, "regcache_sync" },
	{ 0xfd48ceb2, "devm_gpio_request" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x70c2a3b2, "i2c_match_id" },
	{ 0x9a9c0207, "gpiod_set_raw_value" },
	{ 0xa63e30b, "regcache_mark_dirty" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5b11e76c, "gpiod_direction_output_raw" },
	{ 0xf753351c, "snd_soc_add_component_controls" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0x4534861e, "regmap_read" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "31B6F589BE4088991EBFEFB");
