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

SYMBOL_CRC(nf_conncount_add, 0x13c0b4e9, "_gpl");
SYMBOL_CRC(nf_conncount_cache_free, 0xb2d711d4, "_gpl");
SYMBOL_CRC(nf_conncount_count, 0xc5502f1e, "_gpl");
SYMBOL_CRC(nf_conncount_destroy, 0x9311b104, "_gpl");
SYMBOL_CRC(nf_conncount_gc_list, 0xd4f0b903, "_gpl");
SYMBOL_CRC(nf_conncount_init, 0xf76551dd, "_gpl");
SYMBOL_CRC(nf_conncount_list_init, 0x5aba9fda, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x5f754e5a, "memset" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x4e70f340, "__do_once_done" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe61a6643, "__current" },
	{ 0x7ecfa786, "nf_conntrack_find_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0x71c90087, "memcmp" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca9360b5, "rb_next" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x800473f, "__cond_resched" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7371D995964A094D7A902DF");
