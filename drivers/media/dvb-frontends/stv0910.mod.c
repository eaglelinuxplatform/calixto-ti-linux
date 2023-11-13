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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(stv0910_attach, 0x1fed8080, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFAB832E576E71E5C5FDC8A");
