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

SYMBOL_CRC(can_proto_register, 0xb5685e97, "");
SYMBOL_CRC(can_proto_unregister, 0xf4ff9af0, "");
SYMBOL_CRC(can_rx_register, 0x903b4efc, "");
SYMBOL_CRC(can_rx_unregister, 0x96a69000, "");
SYMBOL_CRC(can_send, 0x976b2644, "");
SYMBOL_CRC(can_sock_destruct, 0xc46ff367, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a6d5863, "try_module_get" },
	{ 0xef706529, "consume_skb" },
	{ 0xa30f63fc, "dev_add_pack" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x6769b918, "sock_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xa1861658, "proto_register" },
	{ 0x1449535e, "module_put" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7e9acefb, "dev_remove_pack" },
	{ 0x5625faaa, "sk_free" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x70059627, "seq_putc" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x5f754e5a, "memset" },
	{ 0x1bfef773, "sock_efree" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf758551a, "netif_rx" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x8aadd2da, "proc_create_net_single" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x46372883, "seq_puts" },
	{ 0x2d6ad720, "_proc_mkdir" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76F20AE7FC3EED720718288");
