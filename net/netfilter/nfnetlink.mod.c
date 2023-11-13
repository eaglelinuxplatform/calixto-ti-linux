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

SYMBOL_CRC(nfnetlink_broadcast, 0x684bd71c, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0xffcb6fa4, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0xaf5b69e4, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0x6f98602a, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0xe2445ec5, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0xecefd17c, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0x86f72da8, "_gpl");
SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9dfda314, "netlink_has_listeners" },
	{ 0x8c3afe55, "nlmsg_notify" },
	{ 0x6a71eccd, "netlink_set_err" },
	{ 0x32714601, "netlink_unicast" },
	{ 0x4733c600, "netlink_broadcast" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xd962467d, "netlink_kernel_release" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1d6f2aaf, "__netlink_kernel_create" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xe61a6643, "__current" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe358404e, "netlink_ack" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x1449535e, "module_put" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x783d6171, "netlink_net_capable" },
	{ 0x9668b01b, "netlink_rcv_skb" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F288615435849546E2E38A4");
