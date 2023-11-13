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
	{ 0x183a46c2, "rtc_update_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x4534861e, "regmap_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0xb61278b3, "devm_rtc_allocate_device" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xf95b5b16, "__devm_rtc_register_device" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-rtc");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-rtcC*");

MODULE_INFO(srcversion, "E5C7A25F4E6A8BE7051756A");
