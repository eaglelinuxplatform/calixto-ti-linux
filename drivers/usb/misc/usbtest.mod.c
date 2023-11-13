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
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x189e868, "usb_sg_cancel" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe28542d3, "usb_sg_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf5856c89, "usb_sg_wait" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc37335b0, "complete" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xe302d1e1, "usb_unlink_urb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x8f1bf125, "usb_alloc_coherent" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x69859f69, "usb_free_coherent" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fef3ef4, "completion_done" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xcae55146, "usb_get_status" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xea07d716, "page_address" },
	{ 0xd97313de, "usb_clear_halt" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x284369fc, "usb_get_descriptor" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3AB7D80A3376517FC594B0");
