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
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0xe89dc424, "gserial_alloc_line_no_console" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0xc781ac42, "gserial_disconnect" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x1be1ebad, "usb_function_activate" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x9049acba, "gserial_connect" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe4ca932f, "usb_function_deactivate" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "BA5CCD81F3291C3650A4EBE");
