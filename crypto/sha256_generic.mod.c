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

SYMBOL_CRC(crypto_sha256_finup, 0x4b976f03, "");
SYMBOL_CRC(crypto_sha256_update, 0x478f0b5c, "");
SYMBOL_CRC(sha224_zero_message_hash, 0x946dd559, "_gpl");
SYMBOL_CRC(sha256_zero_message_hash, 0x1fa1d95c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7b5b8f31, "sha256_update" },
	{ 0x61e272c9, "sha256_final" },
	{ 0xa3fea172, "sha224_final" },
	{ 0xa59cec24, "crypto_register_shashes" },
	{ 0x75503f0e, "crypto_unregister_shashes" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libsha256");


MODULE_INFO(srcversion, "D8FCCC4148F4B77BA1A643B");
