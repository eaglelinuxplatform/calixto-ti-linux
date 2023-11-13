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

SYMBOL_CRC(xt_rateest_lookup, 0xe8d6cd76, "_gpl");
SYMBOL_CRC(xt_rateest_put, 0x72f498c7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x574d857, "xt_register_target" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xacf79f82, "xt_unregister_target" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xa05b1efe, "gnet_stats_basic_sync_init" },
	{ 0xeea0399, "strscpy" },
	{ 0xbd17f273, "gen_new_estimator" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x4e70f340, "__do_once_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "CBC1AEA682A50683D2D3802");
