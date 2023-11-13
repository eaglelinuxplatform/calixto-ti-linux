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

SYMBOL_CRC(aptina_pll_calculate, 0x1d5afec5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xea124bd1, "gcd" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "20FA487E1CD4882DBCBBFEF");
