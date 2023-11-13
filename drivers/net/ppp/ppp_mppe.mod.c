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
	{ 0x92997ed8, "_printk" },
	{ 0x7ce333ed, "crypto_shash_update" },
	{ 0x79712782, "crypto_shash_final" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x9d669763, "memcpy" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5f754e5a, "memset" },
	{ 0x56e16c29, "ppp_register_compressor" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe9cc57cf, "ppp_unregister_compressor" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfe175386, "crypto_alloc_shash" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libarc4,ppp_generic");


MODULE_INFO(srcversion, "0843E154B7E41F10B0035F8");
