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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x70c2a3b2, "i2c_match_id" },
	{ 0x9d669763, "memcpy" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x5dc73c5e, "aic3x_regmap" },
	{ 0x27c2f3e9, "aic3x_probe" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x88ac1854, "aic3x_remove" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-tlv320aic3x");

MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3104");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106C*");

MODULE_INFO(srcversion, "1B954E8B897020EBB516153");
