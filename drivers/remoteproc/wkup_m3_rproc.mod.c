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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xdf2d8476, "rproc_del" },
	{ 0x65585868, "rproc_free" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xbfbde3d5, "rproc_alloc" },
	{ 0x99f09f40, "__devm_reset_control_get" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xdf8b83ac, "__of_get_address" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x562c34a9, "rproc_add" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3");
MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3C*");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3C*");

MODULE_INFO(srcversion, "C8B5BE16DADA3BC8DFFE5AF");
