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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x5676fc58, "watchdog_unregister_device" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0xff0b04c8, "watchdog_init_timeout" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xd576926c, "watchdog_register_device" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x92997ed8, "_printk" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "watchdog");

MODULE_ALIAS("of:N*T*Cti,omap3-wdt");
MODULE_ALIAS("of:N*T*Cti,omap3-wdtC*");

MODULE_INFO(srcversion, "8B46BFAC2597303561BD973");
