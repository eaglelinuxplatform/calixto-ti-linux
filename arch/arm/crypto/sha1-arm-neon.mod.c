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
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x9d669763, "memcpy" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0xe61a6643, "__current" },
	{ 0xb8a804a2, "crypto_register_shash" },
	{ 0x7acda05e, "crypto_unregister_shash" },
	{ 0x5f754e5a, "memset" },
	{ 0x252f8bb6, "sha1_finup_arm" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xbe84631b, "sha1_update_arm" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "sha1-arm");


MODULE_INFO(srcversion, "6B1B2975453D5FE243A367F");
