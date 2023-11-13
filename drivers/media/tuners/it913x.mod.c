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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4534861e, "regmap_read" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:it9133ax-tuner");
MODULE_ALIAS("platform:it9133bx-tuner");

MODULE_INFO(srcversion, "32060EA0E2CF2948E6874F7");
