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
	{ 0x2c6007e1, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x88ab6b13, "input_unregister_handler" },
	{ 0xc3fe92ad, "input_match_device_id" },
	{ 0x71c90087, "memcmp" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x17d14c05, "kill_fasync" },
	{ 0x637493f3, "__wake_up" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x4bafa951, "input_close_device" },
	{ 0xbe4285d, "cdev_device_del" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x1823c093, "input_unregister_handle" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x51943974, "get_device" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x565b9c8f, "input_register_handle" },
	{ 0xee51174, "cdev_init" },
	{ 0x5fdcf987, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xd6c001ae, "input_class" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf361f555, "stream_open" },
	{ 0xc15396ab, "input_open_device" },
	{ 0xe61a6643, "__current" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x97255bdf, "strlen" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x9d669763, "memcpy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "35C88506518892F951C3966");
