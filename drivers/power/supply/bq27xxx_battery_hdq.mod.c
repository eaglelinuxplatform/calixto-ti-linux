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
	{ 0x8984b710, "w1_register_family" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x74a57f06, "bq27xxx_battery_teardown" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfc1a4ba2, "bq27xxx_battery_setup" },
	{ 0x360d717c, "w1_unregister_family" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb2455895, "w1_write_8" },
	{ 0x96e55aa8, "w1_read_8" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wire,bq27xxx_battery");


MODULE_INFO(srcversion, "D76362A0C2B6CB9CBB982CF");
