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

SYMBOL_CRC(btrtl_download_firmware, 0xfd323275, "_gpl");
SYMBOL_CRC(btrtl_free, 0xaf78f260, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0x411553f9, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0x56b1f470, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0x717b925d, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0x4485cffe, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0x8a258b6d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x718b8b7, "bt_info" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x214e4265, "bt_warn" },
	{ 0x71c90087, "memcmp" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e8c8f1c, "skb_pull_data" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "DA8068BFF1C8950D3B8196F");
