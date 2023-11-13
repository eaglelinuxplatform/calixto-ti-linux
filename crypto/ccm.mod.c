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
	{ 0x84fb3481, "crypto_register_templates" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0xb53f432b, "crypto_aead_setauthsize" },
	{ 0x77b66c43, "crypto_aead_setkey" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x6158d03d, "crypto_spawn_tfm2" },
	{ 0x8d82c6b5, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0xe8196339, "crypto_ahash_setkey" },
	{ 0x7a046cce, "crypto_cipher_setkey" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8085cd7, "crypto_cipher_encrypt_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x69cb4ae0, "crypto_spawn_tfm" },
	{ 0x4eed1208, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xcad6d5dc, "crypto_grab_spawn" },
	{ 0xc3807e77, "crypto_inst_setname" },
	{ 0xe40a5f6d, "shash_free_singlespawn_instance" },
	{ 0x853b7210, "shash_register_instance" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xbc6dff3b, "crypto_grab_aead" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x61c65612, "aead_register_instance" },
	{ 0x5bd21c25, "crypto_grab_ahash" },
	{ 0x84b183ae, "strncmp" },
	{ 0x42dbda2a, "crypto_grab_skcipher" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x6d8747a0, "scatterwalk_ffwd" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xf2ed5d70, "crypto_aead_decrypt" },
	{ 0x6ceec435, "crypto_aead_encrypt" },
	{ 0xc9f37a19, "crypto_ahash_finup" },
	{ 0xe06699b2, "sg_next" },
	{ 0x3c4dbe3d, "crypto_skcipher_decrypt" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "869B2F88148A6CFCBE87A38");
