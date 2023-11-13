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
	{ 0xb49adf6f, "skb_copy_expand" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x138aeef6, "usbnet_generic_cdc_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xef0efa87, "usbnet_get_endpoints" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xc192ac22, "usbnet_cdc_unbind" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether,usbnet,usbcore");

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v22B8p6027d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");

MODULE_INFO(srcversion, "9D4D58010A3C72261079573");
