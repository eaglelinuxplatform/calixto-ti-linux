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
	{ 0xfa941bb7, "skb_put" },
	{ 0x6f7cfc84, "usb_os_desc_prepare_interf_dir" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d5a8178, "hrtimer_try_to_cancel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0x58abdfaf, "usb_assign_descriptors" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a1a2609, "gether_disconnect" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x5aa641ab, "gether_set_dev_addr" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xb549ee7c, "gether_register_netdev" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x9df10ab5, "usb_ep_dequeue" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x341cc811, "gether_set_qmult" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0xc26ab8c1, "gether_get_host_addr" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x49d490c1, "gether_set_gadget" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0xdc497f9d, "gether_connect" },
	{ 0x5f754e5a, "memset" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0xcbbd9ca6, "gether_get_dev_addr" },
	{ 0xbe1e966a, "gether_set_host_addr" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xeac571dd, "gether_get_ifname" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x4a9661ec, "gether_set_ifname" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1a68e2c6, "gether_get_host_addr_cdc" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xdb2fdce4, "gether_setup_name_default" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x874724a1, "gether_get_qmult" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_ether,udc-core");


MODULE_INFO(srcversion, "1E1857474F737358BFF9DF5");
