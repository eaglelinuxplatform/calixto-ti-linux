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

SYMBOL_CRC(usb_cdc_wdm_register, 0x881327c3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x637493f3, "__wake_up" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xe61a6643, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x99bb8806, "memmove" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81c1f232, "usb_unpoison_urb" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xec16d85, "usb_deregister_dev" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xd022af8b, "usb_poison_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd89ed76b, "usb_register_dev" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc6ba13e6, "cdc_parse_cdc_header" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x1000e51, "schedule" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "A1CE87CE22F597DD77DEAE3");
