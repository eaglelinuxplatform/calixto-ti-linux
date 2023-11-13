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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2e354057, "iio_buffer_enabled" },
	{ 0x385dad76, "am335x_tsc_se_set_cache" },
	{ 0x6f379d9, "am335x_tsc_se_clr" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x1826c1bb, "iio_device_unregister" },
	{ 0x518dcf66, "iio_push_to_buffers" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x27bf4386, "am335x_tsc_se_set_once" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x73b17eb2, "am335x_tsc_se_adc_done" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x7bdac3ca, "of_prop_next_u32" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xa43b942c, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,ti_am335x_tscadc,kfifo_buf");

MODULE_ALIAS("of:N*T*Cti,am3359-adc");
MODULE_ALIAS("of:N*T*Cti,am3359-adcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-adc");
MODULE_ALIAS("of:N*T*Cti,am4372-adcC*");

MODULE_INFO(srcversion, "67D64B7B1CE20E06FE6CBDC");
