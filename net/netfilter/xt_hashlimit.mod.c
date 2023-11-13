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
	{ 0xc7f9dc2e, "xt_register_matches" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xe8ebec4d, "xt_unregister_matches" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x800473f, "__cond_resched" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xed1fe1a1, "proc_mkdir" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x81adef99, "refcount_dec_and_mutex_lock" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf62cf01d, "proc_create_seq_private" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x71c90087, "memcmp" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xe61a6643, "__current" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "1B252D4060FF09CC633A32A");
