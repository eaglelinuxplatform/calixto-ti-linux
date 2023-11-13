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
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,bluetooth");

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6F353E3D485AC8F6C820B01");
