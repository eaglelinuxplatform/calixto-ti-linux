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

SYMBOL_CRC(vb2_create_framevec, 0xa21fa765, "");
SYMBOL_CRC(vb2_destroy_framevec, 0xccd197c7, "");
SYMBOL_CRC(vb2_common_vm_ops, 0xe3d5e021, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x65246b8, "frame_vector_create" },
	{ 0xc2d9e090, "get_vaddr_frames" },
	{ 0x1b700d37, "put_vaddr_frames" },
	{ 0x1d5f9555, "frame_vector_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common");


MODULE_INFO(srcversion, "66D3AB76C4B747F40191AC1");
