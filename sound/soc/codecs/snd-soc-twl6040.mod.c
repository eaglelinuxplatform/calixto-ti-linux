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

SYMBOL_CRC(twl6040_get_clk_id, 0xb6fe2827, "_gpl");
SYMBOL_CRC(twl6040_get_dl1_gain, 0x324e471e, "_gpl");
SYMBOL_CRC(twl6040_get_hs_step_size, 0x15fbcf4b, "_gpl");
SYMBOL_CRC(twl6040_get_trim_value, 0xc5e5260d, "_gpl");
SYMBOL_CRC(twl6040_hs_jack_detect, 0x94e8540d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6394860d, "snd_soc_dapm_put_enum_double" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3f73047d, "twl6040_set_pll" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x8a9165d1, "snd_soc_jack_report" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3641ec0b, "twl6040_reg_write" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x3dffbc89, "twl6040_power" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2335c277, "twl6040_reg_read" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x37a1968e, "snd_soc_dapm_put_volsw" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x46a4eb80, "snd_soc_dapm_force_bias_level" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xe472e708, "snd_pcm_hw_constraint_list" },
	{ 0x6401f28c, "snd_soc_dapm_get_pin_status" },
	{ 0x57c4a1fa, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf465839c, "snd_soc_info_enum_double" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xea28558, "snd_soc_get_volsw" },
	{ 0xf6ca45b8, "snd_soc_put_volsw" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe9051f08, "snd_soc_dapm_get_volsw" },
	{ 0x52953543, "snd_soc_dapm_get_enum_double" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "5366A15E6767A19C12109ED");
