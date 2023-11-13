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
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x769ec230, "usb_get_function_instance" },
	{ 0xc50ca9b1, "usb_add_config_only" },
	{ 0xd0fb2b7d, "usb_string_ids_tab" },
	{ 0x37a0cba, "kfree" },
	{ 0x87f8dfa2, "usb_get_function" },
	{ 0x5207f397, "usb_composite_unregister" },
	{ 0xca08dc5b, "usb_put_function" },
	{ 0xb6cc86b8, "usb_gadget_wakeup" },
	{ 0x9f59a5e1, "usb_add_function" },
	{ 0x7304a3c4, "usb_composite_probe" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x13f41526, "usb_composite_overwrite_options" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0x19ba66a6, "usb_ep_autoconfig_reset" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
