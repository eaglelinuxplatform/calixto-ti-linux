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
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x574d857, "xt_register_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xacf79f82, "xt_unregister_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xae787f65, "dev_mc_del" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x92457fc6, "dev_mc_add" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x17363758, "proc_remove" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x70059627, "seq_putc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xed1fe1a1, "proc_mkdir" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa2c73e5, "seq_open" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1e415ad2, "dev_get_by_name" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xa3dcd92f, "seq_release" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc2cae53e, "refcount_dec_and_lock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0x169d9091, "nf_unregister_net_hook" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb963b866, "nf_register_net_hook" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x59451080, "proc_create_data" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "5699A0A3EBABF95B82A4293");
