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
	{ 0x791d2fd0, "crypto_register_template" },
	{ 0x6158d03d, "crypto_spawn_tfm2" },
	{ 0x7ce333ed, "crypto_shash_update" },
	{ 0xee83c754, "crypto_shash_finup" },
	{ 0x9008d60e, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x7750fd7a, "crypto_grab_shash" },
	{ 0x78423384, "crypto_shash_alg_has_setkey" },
	{ 0xe40a5f6d, "shash_free_singlespawn_instance" },
	{ 0xc3807e77, "crypto_inst_setname" },
	{ 0x853b7210, "shash_register_instance" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x67681c26, "crypto_shash_digest" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x79712782, "crypto_shash_final" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F6E0DA1FB66D4C24F4F87CA");
