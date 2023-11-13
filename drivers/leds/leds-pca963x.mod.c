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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3edd43d0, "device_get_child_node_count" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x3c92364, "device_get_next_child_node" },
	{ 0xef96a1c0, "fwnode_property_read_u32_array" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "CFE3D84AC5D5F41F54409E9");
