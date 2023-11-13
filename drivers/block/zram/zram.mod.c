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
	{ 0xb20c22fc, "set_capacity_and_notify" },
	{ 0x414a407a, "filp_open" },
	{ 0xf0f7d36b, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1af6f3e1, "crypto_comp_decompress" },
	{ 0x5b7d9e78, "page_endio" },
	{ 0x3715e090, "flush_dcache_page" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x47925794, "idr_find" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x1359934, "blk_queue_logical_block_size" },
	{ 0x7c3bc767, "crypto_alloc_base" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7ce45a37, "device_add_disk" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xbe8bed30, "generic_atomic64_sub" },
	{ 0x6cd17e49, "zs_pool_stats" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe04b9395, "crypto_comp_compress" },
	{ 0xae5753ab, "bio_end_io_acct_remapped" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xe8ea93e1, "__cpuhp_state_remove_instance" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0xc38db5d2, "put_disk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7d7c34b1, "blk_queue_physical_block_size" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x1de7dd0e, "sync_blockdev" },
	{ 0xf0035cb, "blk_queue_flag_set" },
	{ 0x5947625f, "blkdev_put" },
	{ 0x5b9c97e9, "__free_pages" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe61a6643, "__current" },
	{ 0x7c2605bc, "submit_bio" },
	{ 0xb8da0983, "blk_queue_flag_clear" },
	{ 0xbe397706, "bio_start_io_acct" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x853dbc48, "__kmap_local_page_prot" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xa346975c, "idr_remove" },
	{ 0xb21c42ec, "bio_put" },
	{ 0xda0fc997, "bio_endio" },
	{ 0x4253aa7e, "down_write" },
	{ 0x9574b7b2, "__class_register" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x37b2ccac, "__cpuhp_setup_state" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xeaad4645, "blkdev_get_by_dev" },
	{ 0x7460e162, "set_capacity" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x51bf9840, "bdev_start_io_acct" },
	{ 0x84b183ae, "strncmp" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0xe7dba281, "bio_chain" },
	{ 0xba3a430e, "__cpuhp_state_add_instance" },
	{ 0xec1d4465, "bio_add_page" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x7461f2c7, "del_gendisk" },
	{ 0x841f5d59, "blk_queue_max_discard_sectors" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xc311cb61, "bio_init" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7218e9a9, "__alloc_pages" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x958df3ac, "zs_free" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x246790df, "idr_for_each" },
	{ 0xeea0399, "strscpy" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x8608a868, "blk_queue_max_write_zeroes_sectors" },
	{ 0x999e8297, "vfree" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x6d43d552, "file_path" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xade7a8eb, "filp_close" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x7322cc79, "blk_queue_io_min" },
	{ 0x7a7f1396, "zs_malloc" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0x8917f414, "kunmap_local_indexed" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4bfdcefa, "__memset32" },
	{ 0x27864d57, "memparse" },
	{ 0x5e68d58a, "bio_alloc_bioset" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xaa9d4ef7, "blk_queue_io_opt" },
	{ 0xa7b3181c, "up_read" },
	{ 0x4af61f0, "submit_bio_wait" },
	{ 0xc67a6641, "__cpuhp_remove_state" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x12ac0489, "bdev_end_io_acct" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9ce561c8, "generic_atomic64_add" },
	{ 0xe903ca02, "fs_bio_set" },
	{ 0xa51a2967, "_find_next_zero_bit_le" },
	{ 0x194132fa, "zs_huge_class_size" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "zsmalloc");


MODULE_INFO(srcversion, "1A796665923AA9A9E04E286");
