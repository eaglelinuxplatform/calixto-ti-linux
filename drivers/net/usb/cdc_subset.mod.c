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
	{ 0x9690f14f, "usb_lock_device_for_reset" },
	{ 0x1f4cdf7a, "usb_reset_device" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xcf652830, "usbnet_probe" },
	{ 0x50620bf7, "usbnet_disconnect" },
	{ 0xdc2e7392, "usbnet_suspend" },
	{ 0x295a5aaa, "usbnet_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usbnet");

MODULE_ALIAS("usb:v0402p5632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp207Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p2888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Fp0190d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p07D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A2d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E3E70D2ABD17DC7B4DA45E8");
