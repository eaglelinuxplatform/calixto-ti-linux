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
	{ 0x890f4611, "usbnet_cdc_bind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xc192ac22, "usbnet_cdc_unbind" },
	{ 0x718efd65, "usbnet_manage_power" },
	{ 0xd130e34, "usbnet_cdc_status" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether,usbnet,usbcore");

MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "0536198173B079922A4080B");
