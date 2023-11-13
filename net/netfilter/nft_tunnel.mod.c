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
	{ 0xf232a435, "nft_register_obj" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x97f7b26b, "metadata_dst_free" },
	{ 0x283e727a, "nft_reg_track_update" },
	{ 0x714b06aa, "nla_put" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0x29c0617c, "nft_unregister_obj" },
	{ 0x53036ac9, "dst_release" },
	{ 0x5f754e5a, "memset" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x933dc050, "__nla_validate" },
	{ 0x2645afde, "metadata_dst_alloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xabc58048, "skb_trim" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2F5EE05C70309E5AD001723");
