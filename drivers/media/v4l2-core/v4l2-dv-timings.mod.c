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

SYMBOL_CRC(v4l2_calc_aspect_ratio, 0x2bf67def, "_gpl");
SYMBOL_CRC(v4l2_calc_timeperframe, 0x4839762f, "_gpl");
SYMBOL_CRC(v4l2_detect_cvt, 0xa97e00eb, "_gpl");
SYMBOL_CRC(v4l2_detect_gtf, 0x01612c0b, "_gpl");
SYMBOL_CRC(v4l2_dv_timings_aspect_ratio, 0xff585440, "_gpl");
SYMBOL_CRC(v4l2_dv_timings_presets, 0x370cfe6e, "_gpl");
SYMBOL_CRC(v4l2_enum_dv_timings_cap, 0x922ecd29, "_gpl");
SYMBOL_CRC(v4l2_find_dv_timings_cap, 0x3aa68d7a, "_gpl");
SYMBOL_CRC(v4l2_find_dv_timings_cea861_vic, 0xf56238f4, "_gpl");
SYMBOL_CRC(v4l2_get_edid_phys_addr, 0x8f8d4341, "_gpl");
SYMBOL_CRC(v4l2_hdmi_rx_colorimetry, 0x1b4af4a6, "_gpl");
SYMBOL_CRC(v4l2_match_dv_timings, 0xd034392d, "_gpl");
SYMBOL_CRC(v4l2_phys_addr_for_input, 0xae575c8f, "_gpl");
SYMBOL_CRC(v4l2_phys_addr_validate, 0x7b6ac78f, "_gpl");
SYMBOL_CRC(v4l2_print_dv_timings, 0x08402862, "_gpl");
SYMBOL_CRC(v4l2_set_edid_phys_addr, 0x0958448b, "_gpl");
SYMBOL_CRC(v4l2_valid_dv_timings, 0x0af3d134, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x92997ed8, "_printk" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C21B5450790AE2D39E74ABF");
