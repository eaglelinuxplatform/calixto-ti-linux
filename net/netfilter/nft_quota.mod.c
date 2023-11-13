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
	{ 0xf232a435, "nft_register_obj" },
	{ 0xe89e829d, "nft_register_expr" },
	{ 0x29c0617c, "nft_unregister_obj" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0x714b06aa, "nla_put" },
	{ 0xbe8bed30, "generic_atomic64_sub" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe9365b17, "generic_atomic64_set" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x1b8c5191, "generic_atomic64_add_return" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xfa1ed4ef, "nft_obj_notify" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2EBC1C0922DB54AA63BF815");
