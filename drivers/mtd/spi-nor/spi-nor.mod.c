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

SYMBOL_CRC(spi_nor_restore, 0xadede726, "_gpl");
SYMBOL_CRC(spi_nor_scan, 0x653c4d4c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf719f124, "spi_mem_driver_register_with_owner" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf259a906, "spi_mem_dirmap_read" },
	{ 0x2aa229fe, "mtd_device_unregister" },
	{ 0x5615c10b, "spi_mem_exec_op" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x827e672d, "mtd_device_parse_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x99190864, "spi_mem_do_calibration" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x800473f, "__cond_resched" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x45962907, "devm_kfree" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xaacc9e27, "sort" },
	{ 0x48a91171, "string_get_size" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x250113b4, "memory_read_from_buffer" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x71c90087, "memcmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x8184209f, "spi_mem_dirmap_write" },
	{ 0xf4d4d41a, "spi_mem_driver_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xb825d8f6, "seq_read" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x14442fee, "spi_mem_get_name" },
	{ 0xb3dacb05, "devm_spi_mem_dirmap_create" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb0db4512, "spi_mem_adjust_op_size" },
	{ 0x46372883, "seq_puts" },
	{ 0x34937f96, "single_release" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x1e296e39, "spi_mem_supports_op" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xf01014b6, "single_open" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");
MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");

MODULE_INFO(srcversion, "118FE444A1487A5F908B219");
