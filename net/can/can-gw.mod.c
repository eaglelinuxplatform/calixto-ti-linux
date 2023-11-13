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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x96a69000, "can_rx_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x9d669763, "memcpy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x365fa5c1, "netlink_capable" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xe61a6643, "__current" },
	{ 0x976b2644, "can_send" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x714b06aa, "nla_put" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8bcafe56, "rtnl_register_module" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x5f754e5a, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60181f35, "skb_copy" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x903b4efc, "can_rx_register" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "7515C573507ED23B5EB5BCC");
