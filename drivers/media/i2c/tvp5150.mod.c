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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xcf74ad57, "v4l2_subdev_notify_event" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0x735b0269, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xca96f1d2, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0xeada9c7f, "media_device_unregister_entity" },
	{ 0x455cc80, "v4l2_async_unregister_subdev" },
	{ 0x6cc491ab, "v4l2_ctrl_handler_free" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x888ff671, "media_entity_pads_init" },
	{ 0x92c28b71, "media_device_register_entity" },
	{ 0x263a69c3, "media_create_pad_link" },
	{ 0xce8b1960, "media_pad_remote_pad_first" },
	{ 0xb49cfd0, "media_entity_find_link" },
	{ 0xa2d0ef53, "v4l2_ctrl_handler_setup" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xd83d81f6, "v4l2_i2c_subdev_init" },
	{ 0xcf822e6f, "of_graph_get_endpoint_count" },
	{ 0x8bc8d3e5, "of_graph_get_next_endpoint" },
	{ 0x1e8aad5e, "v4l2_fwnode_connector_parse" },
	{ 0x368d8217, "v4l2_fwnode_connector_add_link" },
	{ 0xe7aafa7c, "of_graph_parse_endpoint" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x5c0cd71f, "of_graph_get_endpoint_by_regs" },
	{ 0x4ee8a1dc, "v4l2_fwnode_endpoint_parse" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xb6be6af5, "v4l2_ctrl_handler_init_class" },
	{ 0x20d2e1af, "v4l2_ctrl_new_std" },
	{ 0xb8ea2f19, "v4l2_ctrl_new_std_menu_items" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xc2105f38, "v4l2_async_register_subdev" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x91f4adab, "v4l2_event_subdev_unsubscribe" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "88E85E3348BB7C7D155A3C1");
