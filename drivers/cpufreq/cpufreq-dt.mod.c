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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x9b471fe9, "get_cpu_device" },
	{ 0xa361f910, "dev_pm_opp_of_register_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x310b1ca6, "dev_pm_opp_set_rate" },
	{ 0x32295715, "dev_pm_opp_clear_config" },
	{ 0x7eb6048d, "dev_pm_opp_free_cpufreq_table" },
	{ 0x5ac9fb00, "dev_pm_opp_of_cpumask_remove_table" },
	{ 0xa6ee9a19, "cpufreq_unregister_driver" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5f754e5a, "memset" },
	{ 0xa949e5c1, "dev_pm_opp_set_config" },
	{ 0x51128a7e, "dev_pm_opp_of_get_sharing_cpus" },
	{ 0x4b86d74b, "dev_pm_opp_of_cpumask_add_table" },
	{ 0x19ffb0a5, "dev_pm_opp_get_opp_count" },
	{ 0xa03f93f9, "dev_pm_opp_init_cpufreq_table" },
	{ 0xa40adc2c, "cpufreq_register_driver" },
	{ 0x491cf67d, "dev_pm_opp_get_sharing_cpus" },
	{ 0xaa1df8e6, "dev_pm_opp_set_sharing_cpus" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x5b81f1cc, "clk_get" },
	{ 0x881e7a04, "dev_pm_opp_get_max_transition_latency" },
	{ 0x9d669763, "memcpy" },
	{ 0x95ed1023, "dev_pm_opp_get_suspend_opp_freq" },
	{ 0xcf64785f, "policy_has_boost_freq" },
	{ 0xf30a5502, "cpufreq_enable_boost_support" },
	{ 0x92997ed8, "_printk" },
	{ 0x56f62409, "cpufreq_freq_attr_scaling_boost_freqs" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xba2b7f64, "cpufreq_generic_get" },
	{ 0xbf8925d8, "cpufreq_generic_suspend" },
	{ 0x8e1e596, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B384C11B0EB04449D839A1D");
