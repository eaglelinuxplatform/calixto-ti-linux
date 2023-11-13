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
	{ 0x55303e3f, "input_register_handler" },
	{ 0xf2dcb4db, "fasync_helper" },
	{ 0x9e6310e3, "input_get_timestamp" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x7f88f275, "input_inject_event" },
	{ 0x800473f, "__cond_resched" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2c6007e1, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x88ab6b13, "input_unregister_handler" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0xe61a6643, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x17d14c05, "kill_fasync" },
	{ 0x637493f3, "__wake_up" },
	{ 0x6457441f, "input_flush_device" },
	{ 0x4bafa951, "input_close_device" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x1823c093, "input_unregister_handle" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x51943974, "get_device" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x565b9c8f, "input_register_handle" },
	{ 0xee51174, "cdev_init" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xd6c001ae, "input_class" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8427f2d2, "input_release_device" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf361f555, "stream_open" },
	{ 0xc15396ab, "input_open_device" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x47fe5b74, "input_set_keycode" },
	{ 0xc3f5eff3, "input_get_keycode" },
	{ 0x5f754e5a, "memset" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x38a9c2c7, "input_ff_effect_from_user" },
	{ 0x2c92fb18, "input_ff_upload" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x7dc8c478, "input_ff_erase" },
	{ 0xb74af345, "input_grab_device" },
	{ 0xf362dc7f, "arm_clear_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "8BAB34FFF087B7421922CBC");
