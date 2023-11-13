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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc8e1a547, "dvb_dmxdev_release" },
	{ 0xc4426d5c, "dvb_dmx_release" },
	{ 0x80305677, "dvb_unregister_frontend" },
	{ 0x831d77ca, "dvb_frontend_detach" },
	{ 0x32e856b2, "dvb_unregister_adapter" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x5f754e5a, "memset" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xdd246970, "devm_regulator_get_optional" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x82933d56, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x36b5a48c, "dvb_register_frontend" },
	{ 0xb7feaf5a, "dvb_dmx_init" },
	{ 0xa33f12f6, "dvb_dmxdev_init" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8e153130, "spi_write_then_read" },
	{ 0xb2edd80a, "dvb_dmx_swfilter" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a49446b, "param_ops_short" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "01AB6B462848D724777CFDB");
