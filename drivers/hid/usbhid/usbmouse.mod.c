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
	{ 0x67a16781, "usb_kill_urb" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x69859f69, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xfea15b62, "input_event" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x8f1bf125, "usb_alloc_coherent" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xeea0399, "strscpy" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc01ip02in*");

MODULE_INFO(srcversion, "62385BD82AABD63559E4FB4");
