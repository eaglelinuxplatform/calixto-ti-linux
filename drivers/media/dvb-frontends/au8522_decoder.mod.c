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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x18f8db93, "v4l2_device_unregister_subdev" },
	{ 0x6cc491ab, "v4l2_ctrl_handler_free" },
	{ 0x42b33083, "au8522_release_state" },
	{ 0xacf5094f, "au8522_get_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xd83d81f6, "v4l2_i2c_subdev_init" },
	{ 0x888ff671, "media_entity_pads_init" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb6be6af5, "v4l2_ctrl_handler_init_class" },
	{ 0x20d2e1af, "v4l2_ctrl_new_std" },
	{ 0x7a8c066d, "au8522_writereg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8baa629, "au8522_readreg" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96d71bab, "v4l2_ctrl_subdev_log_status" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "ED24E2C26AF3A9036CD3D74");
