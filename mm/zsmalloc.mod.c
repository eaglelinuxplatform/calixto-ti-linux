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

SYMBOL_CRC(zs_compact, 0x5da67adc, "_gpl");
SYMBOL_CRC(zs_create_pool, 0xbcf1f0e6, "_gpl");
SYMBOL_CRC(zs_destroy_pool, 0xc69b7ee5, "_gpl");
SYMBOL_CRC(zs_free, 0x958df3ac, "_gpl");
SYMBOL_CRC(zs_get_total_pages, 0xcbe56bc2, "_gpl");
SYMBOL_CRC(zs_huge_class_size, 0x194132fa, "_gpl");
SYMBOL_CRC(zs_malloc, 0x7a7f1396, "_gpl");
SYMBOL_CRC(zs_map_object, 0xc341ae6d, "_gpl");
SYMBOL_CRC(zs_pool_stats, 0x6cd17e49, "_gpl");
SYMBOL_CRC(zs_unmap_object, 0x924c46f8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e50a578, "unregister_shrinker" },
	{ 0x92b57248, "flush_work" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x37b2ccac, "__cpuhp_setup_state" },
	{ 0xc67a6641, "__cpuhp_remove_state" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x991848da, "register_shrinker" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0xc5100065, "__ClearPageMovable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1a7a48f2, "unlock_page" },
	{ 0x9be34a7e, "dec_zone_page_state" },
	{ 0xa8a6e1f8, "__folio_put" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x710b9964, "folio_wait_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe61a6643, "__current" },
	{ 0x853dbc48, "__kmap_local_page_prot" },
	{ 0x8917f414, "kunmap_local_indexed" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0x72d0e51f, "inc_zone_page_state" },
	{ 0x7218e9a9, "__alloc_pages" },
	{ 0x5b9c97e9, "__free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x43aa4932, "__SetPageMovable" },
	{ 0x9d669763, "memcpy" },
	{ 0x800473f, "__cond_resched" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19C6AD269F9A0ABAC0CC96B");
