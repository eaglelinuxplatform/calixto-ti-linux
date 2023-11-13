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
	{ 0x92997ed8, "_printk" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x2bdeee43, "nf_log_register" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xf017aea9, "nf_log_unset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x8fe1d75c, "proc_set_user" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xc5d3a56f, "nf_log_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x1449535e, "module_put" },
	{ 0x18c95432, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe61a6643, "__current" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x840bc2bd, "nf_log_unbind_pf" },
	{ 0xbe75a127, "nf_log_bind_pf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f2c19e0, "nfnl_ct_hook" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x97255bdf, "strlen" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x714b06aa, "nla_put" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc2b8eda2, "netstamp_needed_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x7171121c, "overflowgid" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "28F9CE1F9898A1D67C425A1");
