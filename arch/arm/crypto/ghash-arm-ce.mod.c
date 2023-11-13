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
	{ 0x893a859, "cryptd_free_ahash" },
	{ 0x15f42fbf, "cryptd_alloc_ahash" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xbb04f55d, "shash_ahash_update" },
	{ 0xe8196339, "crypto_ahash_setkey" },
	{ 0x9d669763, "memcpy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0xf7d29425, "cryptd_ahash_child" },
	{ 0xbe0de956, "crypto_unregister_ahash" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0x11a9e53, "elf_hwcap2" },
	{ 0xe61a6643, "__current" },
	{ 0xb8a804a2, "crypto_register_shash" },
	{ 0x7acda05e, "crypto_unregister_shash" },
	{ 0xa9554cd8, "crypto_register_ahash" },
	{ 0xbea5ff1e, "static_key_initialized" },
	{ 0x65ee490e, "cryptd_shash_desc" },
	{ 0x5f754e5a, "memset" },
	{ 0x6a69c4ee, "crypto_ahash_digest" },
	{ 0x926f16d3, "crypto_ahash_final" },
	{ 0x79712782, "crypto_shash_final" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x51e9df0c, "shash_ahash_digest" },
	{ 0xf35741cf, "cryptd_ahash_queued" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cryptd,gf128mul");


MODULE_INFO(srcversion, "9314A5A8C975B29FF344DE4");
