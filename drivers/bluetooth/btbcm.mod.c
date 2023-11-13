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

SYMBOL_CRC(btbcm_patchram, 0x1b218eeb, "");
SYMBOL_CRC(btbcm_check_bdaddr, 0x6edabf60, "_gpl");
SYMBOL_CRC(btbcm_finalize, 0xace36f38, "_gpl");
SYMBOL_CRC(btbcm_initialize, 0x9d7f13ba, "_gpl");
SYMBOL_CRC(btbcm_read_pcm_int_params, 0xb1bfe711, "_gpl");
SYMBOL_CRC(btbcm_set_bdaddr, 0xdfd28095, "_gpl");
SYMBOL_CRC(btbcm_setup_apple, 0x005e953a, "_gpl");
SYMBOL_CRC(btbcm_setup_patchram, 0x61e7a786, "_gpl");
SYMBOL_CRC(btbcm_write_pcm_int_params, 0xaf5cc7dd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x71c90087, "memcmp" },
	{ 0x718b8b7, "bt_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d2eba94, "of_find_node_opts_by_path" },
	{ 0x78502cb1, "of_property_read_string_helper" },
	{ 0x97255bdf, "strlen" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xeea0399, "strscpy" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x428dbbe3, "firmware_request_nowarn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5FE149F7B0CC4EE8AF5E349");
