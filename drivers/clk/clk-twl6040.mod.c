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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x1a2c3486, "twl6040_get_sysclk" },
	{ 0x3dffbc89, "twl6040_power" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf26b2380, "devm_clk_hw_register" },
	{ 0xa12eb141, "devm_of_clk_add_hw_provider" },
	{ 0x408109b1, "of_clk_hw_simple_get" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xab86b6e4, "twl6040_set_bits" },
	{ 0xd15fd780, "twl6040_clear_bits" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F554D3F400A9FCAD1253A00");
