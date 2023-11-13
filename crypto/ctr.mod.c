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
	{ 0x84fb3481, "crypto_register_templates" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x6158d03d, "crypto_spawn_tfm2" },
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0x8d82c6b5, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b34aee6, "skcipher_alloc_instance_simple" },
	{ 0x8f7ed8a1, "skcipher_register_instance" },
	{ 0x4eed1208, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x42dbda2a, "crypto_grab_skcipher" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeae63b9, "skcipher_walk_virt" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x30899250, "skcipher_walk_done" },
	{ 0xa8085cd7, "crypto_cipher_encrypt_one" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24B98D4E96BE16D932FA8FA");
