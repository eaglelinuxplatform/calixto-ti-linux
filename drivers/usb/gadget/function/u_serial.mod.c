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

SYMBOL_CRC(gs_alloc_req, 0xf53717eb, "_gpl");
SYMBOL_CRC(gs_free_req, 0xfe9468f2, "_gpl");
SYMBOL_CRC(gserial_alloc_line, 0x33bfdca2, "_gpl");
SYMBOL_CRC(gserial_alloc_line_no_console, 0xe89dc424, "_gpl");
SYMBOL_CRC(gserial_connect, 0x9049acba, "_gpl");
SYMBOL_CRC(gserial_disconnect, 0xc781ac42, "_gpl");
SYMBOL_CRC(gserial_free_line, 0xb6652875, "_gpl");
SYMBOL_CRC(gserial_resume, 0x81c5d3d7, "_gpl");
SYMBOL_CRC(gserial_suspend, 0x06367310, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4b99b31, "__tty_alloc_driver" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xbe864089, "tty_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x9c9b8bb2, "tty_driver_kref_put" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x790fdd2c, "tty_unregister_driver" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x637493f3, "__wake_up" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x35f43342, "tty_wakeup" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e6b792e, "tty_port_destroy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1a8c1557, "tty_unregister_device" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x4967fd59, "tty_port_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeba194d8, "tty_port_register_device" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x8afd151c, "tty_insert_flip_string_fixed_flag" },
	{ 0x39949d8, "tty_flip_buffer_push" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcfd8aedb, "tty_hangup" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "F6BBCAA529DC0F094C4E090");
