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

SYMBOL_CRC(simd_aead_create, 0x851c747c, "_gpl");
SYMBOL_CRC(simd_aead_create_compat, 0x504cb053, "_gpl");
SYMBOL_CRC(simd_aead_free, 0xbfd26f15, "_gpl");
SYMBOL_CRC(simd_register_aeads_compat, 0x3c9a7ccf, "_gpl");
SYMBOL_CRC(simd_register_skciphers_compat, 0x961a3490, "_gpl");
SYMBOL_CRC(simd_skcipher_create, 0x66983e96, "_gpl");
SYMBOL_CRC(simd_skcipher_create_compat, 0x88638552, "_gpl");
SYMBOL_CRC(simd_skcipher_free, 0xefe73979, "_gpl");
SYMBOL_CRC(simd_unregister_aeads, 0x0c96dd8d, "_gpl");
SYMBOL_CRC(simd_unregister_skciphers, 0x599bda57, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0x7ef41433, "cryptd_alloc_aead" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb7f31647, "cryptd_aead_child" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x977519f, "crypto_register_aead" },
	{ 0xdb9779d0, "crypto_unregister_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0x42b3604, "crypto_register_aeads" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfcb254cb, "crypto_alloc_aead" },
	{ 0xb53f432b, "crypto_aead_setauthsize" },
	{ 0xf2ed5d70, "crypto_aead_decrypt" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0xf91e0202, "crypto_unregister_aeads" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0xe3805ff2, "cryptd_skcipher_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3c4dbe3d, "crypto_skcipher_decrypt" },
	{ 0xc0da9b27, "cryptd_alloc_skcipher" },
	{ 0xe61a6643, "__current" },
	{ 0x77b66c43, "crypto_aead_setkey" },
	{ 0xdd68e82, "crypto_register_skcipher" },
	{ 0x6ceec435, "crypto_aead_encrypt" },
	{ 0xd6a11f28, "cryptd_aead_queued" },
	{ 0xb4c7233f, "crypto_unregister_skcipher" },
	{ 0xecc38904, "crypto_register_skciphers" },
	{ 0x6ecb19ed, "cryptd_skcipher_queued" },
	{ 0xdacc542, "cryptd_free_aead" },
	{ 0x35191a76, "crypto_unregister_skciphers" },
	{ 0xac4c9b01, "cryptd_free_skcipher" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf14c7d14, "crypto_alloc_skcipher" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
