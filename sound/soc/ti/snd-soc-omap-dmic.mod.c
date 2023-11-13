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
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1f5fc4a5, "cpu_latency_qos_request_active" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x5b81f1cc, "clk_get" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0xc16c713a, "sdma_pcm_platform_register" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x33cd2cd6, "cpu_latency_qos_update_request" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x5f34df51, "snd_soc_dai_active" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-ti-sdma,snd-soc-core");

MODULE_ALIAS("of:N*T*Cti,omap4-dmic");
MODULE_ALIAS("of:N*T*Cti,omap4-dmicC*");

MODULE_INFO(srcversion, "FF031061A1187A04617C6B3");
