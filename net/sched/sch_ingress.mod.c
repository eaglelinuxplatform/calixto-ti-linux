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
	{ 0x86ce64c7, "register_qdisc" },
	{ 0xa1b5fa5b, "unregister_qdisc" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0xfff7b628, "mini_qdisc_pair_init" },
	{ 0x85d3e9c, "tcf_block_get_ext" },
	{ 0x86852c4b, "mini_qdisc_pair_block_init" },
	{ 0xd191563b, "mini_qdisc_pair_swap" },
	{ 0x258f5187, "tcf_block_put_ext" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x714b06aa, "nla_put" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3672F39605AA306682F127");
