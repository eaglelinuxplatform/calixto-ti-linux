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

SYMBOL_CRC(v4l2_async_nf_init, 0x64e42636, "");
SYMBOL_CRC(v4l2_async_nf_register, 0x8670e211, "");
SYMBOL_CRC(v4l2_async_nf_unregister, 0xb49fec17, "");
SYMBOL_CRC(v4l2_async_register_subdev, 0xc2105f38, "");
SYMBOL_CRC(v4l2_async_subdev_nf_register, 0xf8369901, "");
SYMBOL_CRC(v4l2_async_unregister_subdev, 0x0455cc80, "");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode, 0xaa93b0e4, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode_remote, 0x352d3404, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_i2c, 0x7036c478, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_subdev, 0x0212e2e5, "_gpl");
SYMBOL_CRC(v4l2_async_nf_cleanup, 0xd8ca37c0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x404a771d, "i2c_verify_client" },
	{ 0x37a0cba, "kfree" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xf01014b6, "single_open" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x785be37a, "fwnode_graph_get_port_parent" },
	{ 0x9c448e9d, "fwnode_handle_get" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xa3657481, "_dev_notice" },
	{ 0xc5d940c, "v4l2_device_register_subdev" },
	{ 0xe26c1dbf, "media_create_ancillary_link" },
	{ 0x18f8db93, "v4l2_device_unregister_subdev" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x59181fe0, "fwnode_graph_get_remote_endpoint" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x34937f96, "single_release" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "A1016864681DD8567081501");
