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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0x63f04b6a, "usb_string_id" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x910e55f7, "alloc_ep_req" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x5f754e5a, "memset" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x914d5fba, "usb_ep_autoconfig_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "4A5542B046774E69287A10E");
