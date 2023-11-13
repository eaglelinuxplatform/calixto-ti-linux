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

SYMBOL_CRC(drm_gem_dma_prime_import_sg_table_vmap, 0xd9015397, "");
SYMBOL_CRC(drm_gem_dma_print_info, 0xa0cf69a2, "");
SYMBOL_CRC(drm_gem_dma_create, 0x29e21274, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create, 0xdd43771c, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create_internal, 0xfc57d836, "_gpl");
SYMBOL_CRC(drm_gem_dma_free, 0x82d07fe1, "_gpl");
SYMBOL_CRC(drm_gem_dma_get_sg_table, 0xd221ffa3, "_gpl");
SYMBOL_CRC(drm_gem_dma_mmap, 0x6424d984, "_gpl");
SYMBOL_CRC(drm_gem_dma_prime_import_sg_table, 0x50b24acd, "_gpl");
SYMBOL_CRC(drm_gem_dma_vm_ops, 0x21a529e3, "_gpl");
SYMBOL_CRC(drm_gem_dma_vmap, 0x4ac86971, "_gpl");
SYMBOL_CRC(drm_fb_dma_get_gem_addr, 0x53c7db8d, "_gpl");
SYMBOL_CRC(drm_fb_dma_get_gem_obj, 0x7fa66243, "_gpl");
SYMBOL_CRC(drm_fb_dma_sync_non_coherent, 0x805775e8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb9c4492c, "___drm_dbg" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x9de3ae51, "dma_buf_vmap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0xffa519a8, "dma_mmap_pages" },
	{ 0x6337d8d5, "dma_free_pages" },
	{ 0x21732aee, "dma_sync_single_for_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x88651b79, "drm_gem_create_mmap_offset" },
	{ 0xaefe3eb6, "drm_gem_object_init" },
	{ 0x616efa87, "drm_atomic_helper_damage_iter_init" },
	{ 0x61aa81ae, "dma_alloc_pages" },
	{ 0xfef95529, "drm_gem_private_object_init" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xd42fb753, "drm_gem_vm_close" },
	{ 0x1fb1defc, "drm_gem_vm_open" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xecab52e9, "drm_gem_object_release" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x3e3f8c5c, "drm_prime_get_contiguous_size" },
	{ 0x64cdab5e, "drm_gem_handle_create" },
	{ 0x1733db3e, "drm_gem_fb_get_obj" },
	{ 0xbbf142c1, "__drm_dev_dbg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb84d5634, "dma_buf_vunmap" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x28779e52, "drm_printf" },
	{ 0xef0af09a, "dma_mmap_attrs" },
	{ 0xb25b2832, "dma_get_sgtable_attrs" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xea07d716, "page_address" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x25da2f67, "drm_prime_gem_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "C848D741362FE5B8A5E6E64");
