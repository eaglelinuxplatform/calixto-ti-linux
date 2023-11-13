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
	{ 0x7427d2fc, "usb_serial_register_drivers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa8c93182, "usb_serial_deregister_drivers" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0A21p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Bp0041d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v8087p0716d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p0801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1404pCDDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18D1p*d*dc*dsc*dp*icFFisc50ip01in*");
MODULE_ALIAS("usb:v03F0p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16D0p0870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1209p8B00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p3197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C44p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2A64d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2C84d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2C64d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CADp9011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CADp9012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CADp9013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CADp9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CADp9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p069Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09D7p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0908p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCFp1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCFp1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D5Fp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1CBEp0103d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A9DB979EBC43EA5CBF01F1");
