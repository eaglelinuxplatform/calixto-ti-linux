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
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x637493f3, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4534861e, "regmap_read" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x376dd2cb, "__devm_iio_device_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-adc");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-adcC*");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-adc");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-adcC*");

MODULE_INFO(srcversion, "688B8E7F4454E40ABE16CB7");
