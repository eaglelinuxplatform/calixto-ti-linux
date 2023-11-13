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

SYMBOL_CRC(ssip_reset_event, 0x8a8eefb8, "_gpl");
SYMBOL_CRC(ssip_slave_get_master, 0x06841669, "_gpl");
SYMBOL_CRC(ssip_slave_running, 0x7e6a8a13, "_gpl");
SYMBOL_CRC(ssip_slave_start_tx, 0x69a28e2b, "_gpl");
SYMBOL_CRC(ssip_slave_stop_tx, 0x1332ca4e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xef706529, "consume_skb" },
	{ 0x45885c49, "hsi_free_msg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0x9c664b8a, "hsi_register_client_driver" },
	{ 0xea07d716, "page_address" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bb06b5d, "unregister_netdev" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x89e4c154, "phonet_header_ops" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc30d9465, "hsi_get_channel_id_by_name" },
	{ 0x734ca9f2, "hsi_alloc_msg" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xbb438e8c, "register_netdev" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe06699b2, "sg_next" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x8c2536b4, "__skb_pad" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x3f5618c7, "ssi_waketest" },
	{ 0x843fadc5, "hsi_async" },
	{ 0xf758551a, "netif_rx" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x55364d21, "hsi_unregister_port_event" },
	{ 0x2dedd08a, "hsi_release_port" },
	{ 0x67688a26, "hsi_claim_port" },
	{ 0xd1806c0c, "hsi_register_port_event" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0xa3657481, "_dev_notice" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hsi,phonet,omap_ssi");


MODULE_INFO(srcversion, "C907DC9658A6CAAF4B57FCD");
