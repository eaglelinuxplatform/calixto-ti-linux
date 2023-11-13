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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(__ps2_command, 0xd4604f36, "");
SYMBOL_CRC(ps2_begin_command, 0xf12dfd71, "");
SYMBOL_CRC(ps2_cmd_aborted, 0xef81d9a6, "");
SYMBOL_CRC(ps2_command, 0x63cec789, "");
SYMBOL_CRC(ps2_drain, 0x5f246089, "");
SYMBOL_CRC(ps2_end_command, 0x4316230e, "");
SYMBOL_CRC(ps2_handle_ack, 0x94a0b22e, "");
SYMBOL_CRC(ps2_handle_response, 0xfac5794c, "");
SYMBOL_CRC(ps2_init, 0x01402219, "");
SYMBOL_CRC(ps2_is_keyboard_id, 0x213e4965, "");
SYMBOL_CRC(ps2_sendbyte, 0x28690e54, "");
SYMBOL_CRC(ps2_sliced_command, 0x3982c7cb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xdd27fa87, "memchr" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x637493f3, "__wake_up" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9C10248C7E32903868E6B15");
