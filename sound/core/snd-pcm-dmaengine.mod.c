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

SYMBOL_CRC(snd_dmaengine_pcm_close, 0x4208b080, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_close_release_chan, 0x481f52ce, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_get_chan, 0xea39786c, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open, 0x35a4637e, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open_request_chan, 0xf475334a, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer, 0xb5f95c5b, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer_no_residue, 0xe07c56f8, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_refine_runtime_hwparams, 0x56048493, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_request_channel, 0x805692c0, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_set_config_from_dai_data, 0xde525544, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_trigger, 0x35062524, "_gpl");
SYMBOL_CRC(snd_hwparams_to_dma_slave_config, 0x506c7dc3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x6c3ec2c0, "__dma_request_channel" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd55e2db3, "dma_get_slave_caps" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x70aab31, "snd_pcm_hw_constraint_integer" },
	{ 0x220834f1, "snd_pcm_period_elapsed" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "B0ACD6B055749796CDC2CF9");
