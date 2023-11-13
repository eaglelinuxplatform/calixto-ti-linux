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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xee60d8e7, "i2c_smbus_write_i2c_block_data" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2ee3e9df, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x183a46c2, "rtc_update_irq" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xb61278b3, "devm_rtc_allocate_device" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xf95b5b16, "__devm_rtc_register_device" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xa249744b, "clk_register" },
	{ 0x97c0d8e0, "of_clk_add_provider" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xac2ce268, "of_clk_src_simple_get" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,m41t62");
MODULE_ALIAS("of:N*T*Cst,m41t62C*");
MODULE_ALIAS("of:N*T*Cst,m41t65");
MODULE_ALIAS("of:N*T*Cst,m41t65C*");
MODULE_ALIAS("of:N*T*Cst,m41t80");
MODULE_ALIAS("of:N*T*Cst,m41t80C*");
MODULE_ALIAS("of:N*T*Cst,m41t81");
MODULE_ALIAS("of:N*T*Cst,m41t81C*");
MODULE_ALIAS("of:N*T*Cst,m41t81s");
MODULE_ALIAS("of:N*T*Cst,m41t81sC*");
MODULE_ALIAS("of:N*T*Cst,m41t82");
MODULE_ALIAS("of:N*T*Cst,m41t82C*");
MODULE_ALIAS("of:N*T*Cst,m41t83");
MODULE_ALIAS("of:N*T*Cst,m41t83C*");
MODULE_ALIAS("of:N*T*Cst,m41t84");
MODULE_ALIAS("of:N*T*Cst,m41t84C*");
MODULE_ALIAS("of:N*T*Cst,m41t85");
MODULE_ALIAS("of:N*T*Cst,m41t85C*");
MODULE_ALIAS("of:N*T*Cst,m41t87");
MODULE_ALIAS("of:N*T*Cst,m41t87C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162C*");
MODULE_ALIAS("of:N*T*Cst,rv4162");
MODULE_ALIAS("of:N*T*Cst,rv4162C*");
MODULE_ALIAS("of:N*T*Crv4162");
MODULE_ALIAS("of:N*T*Crv4162C*");
MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "A6EA79F37179F1F67FFDCE8");
