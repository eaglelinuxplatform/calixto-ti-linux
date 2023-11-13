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
	{ 0xca218e36, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb21c1a46, "regmap_raw_read" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1cb8571, "regmap_raw_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x63327c49, "__regmap_init_i2c" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cxd2099");

MODULE_INFO(srcversion, "2E39FB7EADF00DE1A5FD652");
