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
	{ 0xb49adf6f, "skb_copy_expand" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0x7ffaa210, "usbnet_read_cmd" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7146c4e9, "usbnet_write_cmd" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xabc58048, "skb_trim" },
	{ 0xa4d6267b, "usbnet_write_cmd_async" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbnet,usbcore");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E2E13DA664F28278A0A277");
