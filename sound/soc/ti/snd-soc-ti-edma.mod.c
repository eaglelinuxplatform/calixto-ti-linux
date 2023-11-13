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

SYMBOL_CRC(edma_pcm_platform_register, 0x0d8288ed, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x36eadb9e, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0x5f754e5a, "memset" },
	{ 0xf2ee573f, "devm_snd_dmaengine_pcm_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "80DCAB25AF9E16E3DD9BF20");
