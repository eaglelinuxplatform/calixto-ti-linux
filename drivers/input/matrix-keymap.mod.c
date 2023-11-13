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

SYMBOL_CRC(matrix_keypad_build_keymap, 0xf349eb74, "");
SYMBOL_CRC(matrix_keypad_parse_properties, 0xeff6e460, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33D4355EC19A8541DB87EC3");
