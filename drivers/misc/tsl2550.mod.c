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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x42d4d394, "i2c_smbus_write_byte" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctaos,tsl2550");
MODULE_ALIAS("of:N*T*Ctaos,tsl2550C*");
MODULE_ALIAS("i2c:tsl2550");

MODULE_INFO(srcversion, "2D7D0AD51F2CED3FA8D1431");
