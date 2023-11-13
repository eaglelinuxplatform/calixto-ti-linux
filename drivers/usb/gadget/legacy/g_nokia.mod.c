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
	{ 0x3dbb3d3e, "usb_remove_function" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x769ec230, "usb_get_function_instance" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0xd0fb2b7d, "usb_string_ids_tab" },
	{ 0x87f8dfa2, "usb_get_function" },
	{ 0x5207f397, "usb_composite_unregister" },
	{ 0xca08dc5b, "usb_put_function" },
	{ 0x92997ed8, "_printk" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9f59a5e1, "usb_add_function" },
	{ 0x7304a3c4, "usb_composite_probe" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x13f41526, "usb_composite_overwrite_options" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x563696ef, "fsg_common_set_cdev" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0x9b49a692, "usb_add_config" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,usb_f_mass_storage");


MODULE_INFO(srcversion, "A2373AC038AD8CE4F4A9D57");
