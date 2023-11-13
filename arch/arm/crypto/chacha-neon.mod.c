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

SYMBOL_CRC(chacha_crypt_arch, 0x220b49ab, "");
SYMBOL_CRC(chacha_init_arch, 0xdc94f829, "");
SYMBOL_CRC(hchacha_block_arch, 0xdd8ec6bd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x9d669763, "memcpy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe61a6643, "__current" },
	{ 0xeae63b9, "skcipher_walk_virt" },
	{ 0xbea5ff1e, "static_key_initialized" },
	{ 0xecc38904, "crypto_register_skciphers" },
	{ 0x30899250, "skcipher_walk_done" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x35191a76, "crypto_unregister_skciphers" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "346231641CB60E660EB9909");
