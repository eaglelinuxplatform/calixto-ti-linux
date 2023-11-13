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
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x7898866d, "nf_ct_timeout_hook" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0xa7e9bc70, "nf_ct_iterate_destroy" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7f876f3, "nf_ct_l4proto_find" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x47c9369a, "__module_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1449535e, "module_put" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0x714b06aa, "nla_put" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0xabc58048, "skb_trim" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xda95a486, "nf_ct_untimeout" },
	{ 0x97255bdf, "strlen" },
	{ 0xd04ca1ea, "__netlink_dump_start" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "506707930D46805CD1459C7");
