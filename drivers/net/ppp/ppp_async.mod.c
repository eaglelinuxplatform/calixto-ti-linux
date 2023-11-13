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
	{ 0x3b85282a, "tty_register_ldisc" },
	{ 0x92997ed8, "_printk" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xef706529, "consume_skb" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9476aa92, "ppp_input" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x4a606210, "ppp_input_error" },
	{ 0xa1580ac0, "ppp_output_wakeup" },
	{ 0x3f53b95d, "tty_unregister_ldisc" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xa2a72c3d, "ppp_register_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc37335b0, "complete" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe8f53019, "ppp_unregister_channel" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x7de1e468, "tty_unthrottle" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0xabc58048, "skb_trim" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xec52704b, "start_tty" },
	{ 0x9c6990b3, "stop_tty" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xa93b0cca, "ppp_unit_number" },
	{ 0x44868147, "tty_mode_ioctl" },
	{ 0x56d9e1ce, "ppp_channel_index" },
	{ 0xd2fbec6b, "n_tty_ioctl_helper" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "386C48B56E2BB578649BCBF");
