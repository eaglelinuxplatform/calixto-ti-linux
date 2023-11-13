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
	{ 0xc1514a3b, "free_irq" },
	{ 0x74a57f06, "bq27xxx_battery_teardown" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xa346975c, "idr_remove" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xfbd1ebae, "bq27xxx_battery_update" },
	{ 0x9d669763, "memcpy" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2ee3e9df, "i2c_smbus_read_i2c_block_data" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfc1a4ba2, "bq27xxx_battery_setup" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bq27xxx_battery");

MODULE_ALIAS("of:N*T*Cti,bq27200");
MODULE_ALIAS("of:N*T*Cti,bq27200C*");
MODULE_ALIAS("of:N*T*Cti,bq27210");
MODULE_ALIAS("of:N*T*Cti,bq27210C*");
MODULE_ALIAS("of:N*T*Cti,bq27500");
MODULE_ALIAS("of:N*T*Cti,bq27500C*");
MODULE_ALIAS("of:N*T*Cti,bq27510");
MODULE_ALIAS("of:N*T*Cti,bq27510C*");
MODULE_ALIAS("of:N*T*Cti,bq27520");
MODULE_ALIAS("of:N*T*Cti,bq27520C*");
MODULE_ALIAS("of:N*T*Cti,bq27500-1");
MODULE_ALIAS("of:N*T*Cti,bq27500-1C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g1");
MODULE_ALIAS("of:N*T*Cti,bq27510g1C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g2");
MODULE_ALIAS("of:N*T*Cti,bq27510g2C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g3");
MODULE_ALIAS("of:N*T*Cti,bq27510g3C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g1");
MODULE_ALIAS("of:N*T*Cti,bq27520g1C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g2");
MODULE_ALIAS("of:N*T*Cti,bq27520g2C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g3");
MODULE_ALIAS("of:N*T*Cti,bq27520g3C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g4");
MODULE_ALIAS("of:N*T*Cti,bq27520g4C*");
MODULE_ALIAS("of:N*T*Cti,bq27521");
MODULE_ALIAS("of:N*T*Cti,bq27521C*");
MODULE_ALIAS("of:N*T*Cti,bq27530");
MODULE_ALIAS("of:N*T*Cti,bq27530C*");
MODULE_ALIAS("of:N*T*Cti,bq27531");
MODULE_ALIAS("of:N*T*Cti,bq27531C*");
MODULE_ALIAS("of:N*T*Cti,bq27541");
MODULE_ALIAS("of:N*T*Cti,bq27541C*");
MODULE_ALIAS("of:N*T*Cti,bq27542");
MODULE_ALIAS("of:N*T*Cti,bq27542C*");
MODULE_ALIAS("of:N*T*Cti,bq27546");
MODULE_ALIAS("of:N*T*Cti,bq27546C*");
MODULE_ALIAS("of:N*T*Cti,bq27742");
MODULE_ALIAS("of:N*T*Cti,bq27742C*");
MODULE_ALIAS("of:N*T*Cti,bq27545");
MODULE_ALIAS("of:N*T*Cti,bq27545C*");
MODULE_ALIAS("of:N*T*Cti,bq27411");
MODULE_ALIAS("of:N*T*Cti,bq27411C*");
MODULE_ALIAS("of:N*T*Cti,bq27421");
MODULE_ALIAS("of:N*T*Cti,bq27421C*");
MODULE_ALIAS("of:N*T*Cti,bq27425");
MODULE_ALIAS("of:N*T*Cti,bq27425C*");
MODULE_ALIAS("of:N*T*Cti,bq27426");
MODULE_ALIAS("of:N*T*Cti,bq27426C*");
MODULE_ALIAS("of:N*T*Cti,bq27441");
MODULE_ALIAS("of:N*T*Cti,bq27441C*");
MODULE_ALIAS("of:N*T*Cti,bq27621");
MODULE_ALIAS("of:N*T*Cti,bq27621C*");
MODULE_ALIAS("of:N*T*Cti,bq27z561");
MODULE_ALIAS("of:N*T*Cti,bq27z561C*");
MODULE_ALIAS("of:N*T*Cti,bq28z610");
MODULE_ALIAS("of:N*T*Cti,bq28z610C*");
MODULE_ALIAS("of:N*T*Cti,bq34z100");
MODULE_ALIAS("of:N*T*Cti,bq34z100C*");
MODULE_ALIAS("of:N*T*Cti,bq78z100");
MODULE_ALIAS("of:N*T*Cti,bq78z100C*");
MODULE_ALIAS("i2c:bq27200");
MODULE_ALIAS("i2c:bq27210");
MODULE_ALIAS("i2c:bq27500");
MODULE_ALIAS("i2c:bq27510");
MODULE_ALIAS("i2c:bq27520");
MODULE_ALIAS("i2c:bq27500-1");
MODULE_ALIAS("i2c:bq27510g1");
MODULE_ALIAS("i2c:bq27510g2");
MODULE_ALIAS("i2c:bq27510g3");
MODULE_ALIAS("i2c:bq27520g1");
MODULE_ALIAS("i2c:bq27520g2");
MODULE_ALIAS("i2c:bq27520g3");
MODULE_ALIAS("i2c:bq27520g4");
MODULE_ALIAS("i2c:bq27521");
MODULE_ALIAS("i2c:bq27530");
MODULE_ALIAS("i2c:bq27531");
MODULE_ALIAS("i2c:bq27541");
MODULE_ALIAS("i2c:bq27542");
MODULE_ALIAS("i2c:bq27546");
MODULE_ALIAS("i2c:bq27742");
MODULE_ALIAS("i2c:bq27545");
MODULE_ALIAS("i2c:bq27411");
MODULE_ALIAS("i2c:bq27421");
MODULE_ALIAS("i2c:bq27425");
MODULE_ALIAS("i2c:bq27426");
MODULE_ALIAS("i2c:bq27441");
MODULE_ALIAS("i2c:bq27621");
MODULE_ALIAS("i2c:bq27z561");
MODULE_ALIAS("i2c:bq28z610");
MODULE_ALIAS("i2c:bq34z100");
MODULE_ALIAS("i2c:bq78z100");

MODULE_INFO(srcversion, "B84E5A89B4C8CFBB798DA2D");
