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

SYMBOL_CRC(vb2_dma_contig_memops, 0xd4f4e9db, "_gpl");
SYMBOL_CRC(vb2_dma_contig_set_max_seg_size, 0x9fbe3d20, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x254f9faf, "dma_mmap_noncontiguous" },
	{ 0xef0af09a, "dma_mmap_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0xe3d5e021, "vb2_common_vm_ops" },
	{ 0xb84d5634, "dma_buf_vunmap" },
	{ 0xb6b10a76, "dma_buf_unmap_attachment" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x651625de, "dma_buf_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0x69dbcee4, "dma_sync_sg_for_cpu" },
	{ 0xe4c80097, "cacheid" },
	{ 0xb8d3fed1, "cpu_cache" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3f8338b6, "dma_map_sgtable" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xca8b2ae6, "dma_vmap_noncontiguous" },
	{ 0x9de3ae51, "dma_buf_vmap" },
	{ 0x12b73bbb, "dma_vunmap_noncontiguous" },
	{ 0xf0221afb, "dma_free_noncontiguous" },
	{ 0x2c6007e1, "put_device" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x75765d93, "dma_buf_export" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xb25b2832, "dma_get_sgtable_attrs" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xd912cf9c, "dma_buf_attach" },
	{ 0xa3ac158f, "sg_alloc_table" },
	{ 0xe06699b2, "sg_next" },
	{ 0x51943974, "get_device" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x4fb96182, "dma_alloc_noncontiguous" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x9bb1cc85, "dma_map_resource" },
	{ 0xb4c3f95c, "sg_alloc_table_from_pages_segment" },
	{ 0x8a3e7ec2, "set_page_dirty_lock" },
	{ 0x7836fa19, "dma_unmap_resource" },
	{ 0xbf83afbc, "dma_sync_sg_for_device" },
	{ 0xa420f137, "dma_buf_map_attachment" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");


MODULE_INFO(srcversion, "23B3D4E18936805C51C1DE2");
