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

SYMBOL_CRC(nfnl_acct_find_get, 0xd23ef96c, "_gpl");
SYMBOL_CRC(nfnl_acct_overquota, 0x7b007f6b, "_gpl");
SYMBOL_CRC(nfnl_acct_put, 0xbecf5d14, "_gpl");
SYMBOL_CRC(nfnl_acct_update, 0xf6e0bc7d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ce561c8, "generic_atomic64_add" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x714b06aa, "nla_put" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0xabc58048, "skb_trim" },
	{ 0xad4fd0b5, "generic_atomic64_xchg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xd04ca1ea, "__netlink_dump_start" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x684bd71c, "nfnetlink_broadcast" },
	{ 0xe9365b17, "generic_atomic64_set" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1449535e, "module_put" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
