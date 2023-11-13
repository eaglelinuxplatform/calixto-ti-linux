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
	{ 0x72ce3ad8, "__serio_register_driver" },
	{ 0x74feb0af, "vivaldi_function_row_physmap_show" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x63cec789, "ps2_command" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x213e4965, "ps2_is_keyboard_id" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x51828146, "serio_unregister_driver" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x94a0b22e, "ps2_handle_ack" },
	{ 0xfea15b62, "input_event" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xfac5794c, "ps2_handle_response" },
	{ 0x1e3e7978, "serio_reconnect" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1402219, "ps2_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xadac6407, "serio_open" },
	{ 0x857cd655, "serio_close" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "serio,vivaldi-fmap,libps2");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");
MODULE_ALIAS("serio:ty02pr22id*ex*");

MODULE_INFO(srcversion, "26506673D68FA45DB214869");
