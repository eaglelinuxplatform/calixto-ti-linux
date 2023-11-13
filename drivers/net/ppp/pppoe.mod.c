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
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x9e223cc8, "register_pernet_device" },
	{ 0xa1861658, "proto_register" },
	{ 0xc7819581, "register_pppox_proto" },
	{ 0xd87b182a, "proto_unregister" },
	{ 0xa30f63fc, "dev_add_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9e3b34de, "unregister_pernet_device" },
	{ 0xfd80fc97, "sk_alloc" },
	{ 0x7b7a1604, "sock_init_data" },
	{ 0x94794b4e, "skb_recv_datagram" },
	{ 0xd8c3582d, "skb_copy_datagram_iter" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xef706529, "consume_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x46372883, "seq_puts" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e9acefb, "dev_remove_pack" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0xeee0c09, "sock_wmalloc" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0x7b629328, "release_sock" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9cc51289, "skb_clone" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x5625faaa, "sk_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x288b5e41, "pppox_unbind_sock" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0xe61a6643, "__current" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x3ddcb04a, "dev_get_by_name_rcu" },
	{ 0xf143e50f, "sock_queue_rcv_skb_reason" },
	{ 0x9476aa92, "ppp_input" },
	{ 0x6cf91262, "skb_pull_rcsum" },
	{ 0x48f5a611, "__sk_receive_skb" },
	{ 0x2837f725, "pskb_trim_rcsum_slow" },
	{ 0x1e415ad2, "dev_get_by_name" },
	{ 0x1c8632ee, "ppp_register_net_channel" },
	{ 0xc08e7dfc, "sock_no_bind" },
	{ 0xacda4cfa, "sock_no_socketpair" },
	{ 0x29bdd98c, "sock_no_accept" },
	{ 0x36aeab1d, "datagram_poll" },
	{ 0x2ee83caf, "pppox_ioctl" },
	{ 0x1ec311ca, "sock_no_listen" },
	{ 0x596b39fb, "sock_no_shutdown" },
	{ 0x679374a4, "sock_no_mmap" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "1E8A6E375B8D4409783AB97");
