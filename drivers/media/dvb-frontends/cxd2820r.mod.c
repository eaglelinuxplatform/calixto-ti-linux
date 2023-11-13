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

SYMBOL_CRC(cxd2820r_attach, 0x94a07242, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8733236, "intlog10" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x15aafeb7, "i2c_new_dummy_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xef07e169, "gpiochip_get_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0x63327c49, "__regmap_init_i2c" },
	{ 0xa319e2db, "i2c_new_client_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xa602b49a, "gpiochip_add_data_with_key" },
	{ 0xb02e2560, "gpiochip_remove" },
	{ 0xeea0399, "strscpy" },
	{ 0x4534861e, "regmap_read" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xca218e36, "regmap_exit" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "ABCFDBF7A5177A6CE5775E6");
