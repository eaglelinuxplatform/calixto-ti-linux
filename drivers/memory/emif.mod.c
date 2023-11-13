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
	{ 0x1bcebc34, "__platform_driver_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xf01014b6, "single_open" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x70059627, "seq_putc" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x1a733649, "_dev_emerg" },
	{ 0xe1c87a2f, "kernel_can_power_off" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0x73c3e611, "of_get_ddr_timings" },
	{ 0xa7afb14d, "of_get_min_tck" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x45962907, "devm_kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8dc11669, "lpddr2_jedec_addressing_table" },
	{ 0xdd85063c, "lpddr2_jedec_min_tck" },
	{ 0x845aa3dc, "lpddr2_jedec_timings" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x34937f96, "single_release" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,emif-4d");
MODULE_ALIAS("of:N*T*Cti,emif-4dC*");
MODULE_ALIAS("of:N*T*Cti,emif-4d5");
MODULE_ALIAS("of:N*T*Cti,emif-4d5C*");

MODULE_INFO(srcversion, "527FFDA7460117605C4C266");
