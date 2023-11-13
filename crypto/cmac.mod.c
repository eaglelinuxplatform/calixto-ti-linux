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
	{ 0x791d2fd0, "crypto_register_template" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a046cce, "crypto_cipher_setkey" },
	{ 0xa8085cd7, "crypto_cipher_encrypt_one" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x69cb4ae0, "crypto_spawn_tfm" },
	{ 0x9008d60e, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xcad6d5dc, "crypto_grab_spawn" },
	{ 0xe40a5f6d, "shash_free_singlespawn_instance" },
	{ 0xc3807e77, "crypto_inst_setname" },
	{ 0x853b7210, "shash_register_instance" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7A34247E7C7DD07D5FBEDC3");
