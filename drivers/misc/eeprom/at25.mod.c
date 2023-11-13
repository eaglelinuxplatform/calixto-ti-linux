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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5f754e5a, "memset" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x9bed9d91, "device_property_match_string" },
	{ 0x8e153130, "spi_write_then_read" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc4c9faa5, "devm_nvmem_register" },
	{ 0xeea0399, "strscpy" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x37a0cba, "kfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:at25");
MODULE_ALIAS("spi:fm25");
MODULE_ALIAS("of:N*T*Catmel,at25");
MODULE_ALIAS("of:N*T*Catmel,at25C*");
MODULE_ALIAS("of:N*T*Ccypress,fm25");
MODULE_ALIAS("of:N*T*Ccypress,fm25C*");

MODULE_INFO(srcversion, "3B6CA3A9ED7A3C89E4E421C");
