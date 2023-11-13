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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x845c3191, "nf_send_reset6" },
	{ 0xa4660c27, "nf_send_unreach6" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x44d8a3, "nft_reject_init" },
	{ 0x9ec5554d, "nft_reject_dump" },
	{ 0x48075677, "nft_reject_validate" },
	{ 0x1e8872d6, "nft_reject_policy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv6,nft_reject");


MODULE_INFO(srcversion, "FDDA493DF129F1F6915CD66");
