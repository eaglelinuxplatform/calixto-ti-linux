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
	{ 0xca218e36, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x4534861e, "regmap_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8733236, "intlog10" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x63327c49, "__regmap_init_i2c" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:af9033");

MODULE_INFO(srcversion, "DBB041729D8045CA86522A7");
