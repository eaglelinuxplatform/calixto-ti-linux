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

SYMBOL_CRC(spi_bitbang_cleanup, 0x7fea2060, "_gpl");
SYMBOL_CRC(spi_bitbang_init, 0x1d5ab32c, "_gpl");
SYMBOL_CRC(spi_bitbang_setup, 0x66cc0f25, "_gpl");
SYMBOL_CRC(spi_bitbang_setup_transfer, 0xb7d42c25, "_gpl");
SYMBOL_CRC(spi_bitbang_start, 0x14791f60, "_gpl");
SYMBOL_CRC(spi_bitbang_stop, 0xdc39ec6c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x456f21dc, "spi_finalize_current_transfer" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x51943974, "get_device" },
	{ 0x41d8e7c5, "spi_register_controller" },
	{ 0x2c6007e1, "put_device" },
	{ 0xfbf29f44, "spi_unregister_controller" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E276299F0B5C87A133D950C");
