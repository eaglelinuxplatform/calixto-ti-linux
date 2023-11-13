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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xf268f7bd, "devm_rc_allocate_device" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x163ce293, "of_property_read_variable_u8_array" },
	{ 0x808d2604, "devm_rc_register_device" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Cir-spi-led");
MODULE_ALIAS("of:N*T*Cir-spi-ledC*");

MODULE_INFO(srcversion, "7938B8EBD6C19D15EAF565B");
