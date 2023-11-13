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
	{ 0x360d717c, "w1_unregister_family" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xab7798f0, "w1_reset_select_slave" },
	{ 0x19d69590, "w1_write_block" },
	{ 0xe8fcc07a, "w1_read_block" },
	{ 0xf102732a, "crc16" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x96e55aa8, "w1_read_8" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc4c9faa5, "devm_nvmem_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "BC534676EA6D43ACE17E442");
