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

SYMBOL_CRC(crypto_ecdh_decode_key, 0x33b866ce, "_gpl");
SYMBOL_CRC(crypto_ecdh_encode_key, 0xb230d2ec, "_gpl");
SYMBOL_CRC(crypto_ecdh_key_len, 0x7475be8e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa76b31a2, "crypto_ecdh_shared_secret" },
	{ 0x2cac83fb, "crypto_unregister_kpp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6315f31, "ecc_gen_privkey" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x42685d7, "sg_nents_for_len" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5f754e5a, "memset" },
	{ 0x671f7aa5, "ecc_is_key_valid" },
	{ 0xed4ae15e, "ecc_make_pub_key" },
	{ 0x558826d0, "crypto_register_kpp" },
	{ 0x9a12d07b, "sg_copy_from_buffer" },
	{ 0xd1abe064, "sg_copy_to_buffer" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ecc");


MODULE_INFO(srcversion, "3BFAB2DAB7A8CB786FC68B0");
