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
	{ 0x97255bdf, "strlen" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9856dc54, "crypto_register_rngs" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x7ce333ed, "crypto_shash_update" },
	{ 0x79712782, "crypto_shash_final" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x3b8f930a, "crypto_unregister_rngs" },
	{ 0x3a4f9d28, "rng_is_initialized" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7b41a657, "crypto_shash_setkey" },
	{ 0xfe175386, "crypto_alloc_shash" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x4d3b22dc, "crypto_alloc_rng" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F022F5C4CA625D9D7F53A7C");
