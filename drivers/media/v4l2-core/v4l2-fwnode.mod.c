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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(v4l2_async_nf_parse_fwnode_endpoints, 0xf246196d, "_gpl");
SYMBOL_CRC(v4l2_async_register_subdev_sensor, 0x001c575b, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_add_link, 0x368d8217, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_free, 0x612ddce5, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_parse, 0x1e8aad5e, "_gpl");
SYMBOL_CRC(v4l2_fwnode_device_parse, 0x55f74923, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_alloc_parse, 0x6b4a2d24, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_free, 0x0bd719c8, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_parse, 0x4ee8a1dc, "_gpl");
SYMBOL_CRC(v4l2_fwnode_parse_link, 0x9e98a01b, "_gpl");
SYMBOL_CRC(v4l2_fwnode_put_link, 0x10ad7739, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa2a838e7, "fwnode_graph_parse_endpoint" },
	{ 0x785be37a, "fwnode_graph_get_port_parent" },
	{ 0x59181fe0, "fwnode_graph_get_remote_endpoint" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5f754e5a, "memset" },
	{ 0xabee598a, "fwnode_get_name" },
	{ 0xb762418b, "fwnode_graph_get_remote_port_parent" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x64e42636, "v4l2_async_nf_init" },
	{ 0x78c31428, "fwnode_property_get_reference_args" },
	{ 0xaa93b0e4, "__v4l2_async_nf_add_fwnode" },
	{ 0xf8369901, "v4l2_async_subdev_nf_register" },
	{ 0xc2105f38, "v4l2_async_register_subdev" },
	{ 0xb49fec17, "v4l2_async_nf_unregister" },
	{ 0xd8ca37c0, "v4l2_async_nf_cleanup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e9732cb, "fwnode_property_read_u64_array" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6abcab2b, "fwnode_graph_get_next_endpoint" },
	{ 0xc048c5a9, "fwnode_device_is_available" },
	{ 0x212e2e5, "__v4l2_async_nf_add_subdev" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async");


MODULE_INFO(srcversion, "9509682EF62B415367B11F6");
