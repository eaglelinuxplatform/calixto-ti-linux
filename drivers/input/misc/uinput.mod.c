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
	{ 0x5253049c, "misc_register" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x637493f3, "__wake_up" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc47a89cf, "input_ff_flush" },
	{ 0xe96ccc17, "misc_deregister" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x49f26466, "kstrndup" },
	{ 0xceeb322b, "input_alloc_absinfo" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xfea15b62, "input_event" },
	{ 0x800473f, "__cond_resched" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xc37335b0, "complete" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf361f555, "stream_open" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xade6aeef, "input_ff_create" },
	{ 0xf70284f2, "input_register_device" },
	{ 0xbd6f06b, "input_ff_destroy" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x9839cd76, "input_mt_init_slots" },
	{ 0x97255bdf, "strlen" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "438F2017826496DD7B6AF01");
