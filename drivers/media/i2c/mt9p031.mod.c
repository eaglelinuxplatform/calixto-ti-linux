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
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x6cc491ab, "v4l2_ctrl_handler_free" },
	{ 0x455cc80, "v4l2_async_unregister_subdev" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x60b9e6ae, "i2c_smbus_write_word_data" },
	{ 0xa2d0ef53, "v4l2_ctrl_handler_setup" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xd00270c6, "i2c_smbus_read_word_data" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0x8bc8d3e5, "of_graph_get_next_endpoint" },
	{ 0x4ee8a1dc, "v4l2_fwnode_endpoint_parse" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb6be6af5, "v4l2_ctrl_handler_init_class" },
	{ 0x20d2e1af, "v4l2_ctrl_new_std" },
	{ 0xb8ea2f19, "v4l2_ctrl_new_std_menu_items" },
	{ 0x769caa26, "v4l2_ctrl_new_custom" },
	{ 0x9c6e35c, "v4l2_ctrl_find" },
	{ 0xd83d81f6, "v4l2_i2c_subdev_init" },
	{ 0x888ff671, "media_entity_pads_init" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc2105f38, "v4l2_async_register_subdev" },
	{ 0x1d5afec5, "aptina_pll_calculate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4c742f99, "v4l2_ctrl_activate" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,v4l2-fwnode,mc,aptina-pll");

MODULE_ALIAS("of:N*T*Captina,mt9p006");
MODULE_ALIAS("of:N*T*Captina,mt9p006C*");
MODULE_ALIAS("of:N*T*Captina,mt9p031");
MODULE_ALIAS("of:N*T*Captina,mt9p031C*");
MODULE_ALIAS("of:N*T*Captina,mt9p031m");
MODULE_ALIAS("of:N*T*Captina,mt9p031mC*");
MODULE_ALIAS("i2c:mt9p006");
MODULE_ALIAS("i2c:mt9p031");
MODULE_ALIAS("i2c:mt9p031m");

MODULE_INFO(srcversion, "307E0BB5F2099C2D8E77605");
