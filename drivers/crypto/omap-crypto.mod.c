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

SYMBOL_CRC(omap_crypto_align_sg, 0x701db540, "_gpl");
SYMBOL_CRC(omap_crypto_cleanup, 0xd5328478, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe06699b2, "sg_next" },
	{ 0xea07d716, "page_address" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb6df778, "sg_nents" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe61a6643, "__current" },
	{ 0x853dbc48, "__kmap_local_page_prot" },
	{ 0x9d669763, "memcpy" },
	{ 0x3715e090, "flush_dcache_page" },
	{ 0x8917f414, "kunmap_local_indexed" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D26025BD83978D5367362D4");
