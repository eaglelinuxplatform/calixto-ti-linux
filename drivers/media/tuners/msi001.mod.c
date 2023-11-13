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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0x18f8db93, "v4l2_device_unregister_subdev" },
	{ 0x6cc491ab, "v4l2_ctrl_handler_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xeea0399, "strscpy" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9428bd00, "v4l2_spi_subdev_init" },
	{ 0xb6be6af5, "v4l2_ctrl_handler_init_class" },
	{ 0x20d2e1af, "v4l2_ctrl_new_std" },
	{ 0xdea05c48, "v4l2_ctrl_auto_cluster" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xea124bd1, "gcd" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("spi:msi001");

MODULE_INFO(srcversion, "EAB93E5D85B63767E2E2CE4");
