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

SYMBOL_CRC(vb2_buffer_in_use, 0xf8b9f559, "");
SYMBOL_CRC(vb2_verify_memory_type, 0xfb29c11d, "");
SYMBOL_CRC(vb2_buffer_done, 0x4057192a, "_gpl");
SYMBOL_CRC(vb2_core_create_bufs, 0x90a565c5, "_gpl");
SYMBOL_CRC(vb2_core_dqbuf, 0xa27c4d49, "_gpl");
SYMBOL_CRC(vb2_core_expbuf, 0x29960984, "_gpl");
SYMBOL_CRC(vb2_core_poll, 0xd7ab64ca, "_gpl");
SYMBOL_CRC(vb2_core_prepare_buf, 0x7920c16c, "_gpl");
SYMBOL_CRC(vb2_core_qbuf, 0x0969ec8b, "_gpl");
SYMBOL_CRC(vb2_core_querybuf, 0x2eed3cef, "_gpl");
SYMBOL_CRC(vb2_core_queue_init, 0x0bb25808, "_gpl");
SYMBOL_CRC(vb2_core_queue_release, 0x318a1469, "_gpl");
SYMBOL_CRC(vb2_core_reqbufs, 0x010c784c, "_gpl");
SYMBOL_CRC(vb2_core_streamoff, 0xbca524c7, "_gpl");
SYMBOL_CRC(vb2_core_streamon, 0x93f5c6c1, "_gpl");
SYMBOL_CRC(vb2_discard_done, 0x528164b0, "_gpl");
SYMBOL_CRC(vb2_mmap, 0xcd1c99c5, "_gpl");
SYMBOL_CRC(vb2_plane_cookie, 0xc7a5b220, "_gpl");
SYMBOL_CRC(vb2_plane_vaddr, 0x781c613c, "_gpl");
SYMBOL_CRC(vb2_queue_error, 0xdee33563, "_gpl");
SYMBOL_CRC(vb2_read, 0x7997a18c, "_gpl");
SYMBOL_CRC(vb2_request_buffer_cnt, 0xfb713999, "_gpl");
SYMBOL_CRC(vb2_request_object_is_buffer, 0x6beb756f, "_gpl");
SYMBOL_CRC(vb2_thread_start, 0xf44fa520, "_gpl");
SYMBOL_CRC(vb2_thread_stop, 0x662a38b2, "_gpl");
SYMBOL_CRC(vb2_wait_for_all_buffers, 0x3b099fa3, "_gpl");
SYMBOL_CRC(vb2_write, 0x68bc358b, "_gpl");
SYMBOL_CRC(frame_vector_create, 0x065246b8, "");
SYMBOL_CRC(frame_vector_destroy, 0x1d5f9555, "");
SYMBOL_CRC(frame_vector_to_pages, 0xc5e5573a, "");
SYMBOL_CRC(frame_vector_to_pfns, 0xdffb744b, "");
SYMBOL_CRC(get_vaddr_frames, 0xc2d9e090, "");
SYMBOL_CRC(put_vaddr_frames, 0x1b700d37, "");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_done, 0xc7b45aa4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_buf_queue, 0x07729fd4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_dqbuf, 0xb9d2df39, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_qbuf, 0xb6f4b031, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_done, 0xc6f2a231, "_gpl");
SYMBOL_CRC(__traceiter_vb2_buf_queue, 0xa4cf8979, "_gpl");
SYMBOL_CRC(__traceiter_vb2_dqbuf, 0x1c129570, "_gpl");
SYMBOL_CRC(__traceiter_vb2_qbuf, 0xc6217371, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_buf_done, 0x5f9e9fbf, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_buf_queue, 0x8d8f7cfd, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_dqbuf, 0xb85ad0a8, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_qbuf, 0xe58a2770, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x644a314d, "pin_user_pages_fast" },
	{ 0x33a56943, "media_request_object_init" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x95a1e5e8, "media_request_object_unbind" },
	{ 0x7f7a330a, "unpin_user_pages" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5e5ffd4e, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe61a6643, "__current" },
	{ 0xd795e18b, "media_request_object_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x87710bfc, "v4l_vb2q_enable_media_source" },
	{ 0xa8ce1090, "media_request_put" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x25a8b9ff, "dma_buf_get" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0xe643511, "dma_buf_put" },
	{ 0xc4927ebf, "media_request_object_bind" },
	{ 0xca6ecb0c, "dma_buf_fd" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xda254d72, "freezing_slow_path" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "07827DBD2DD447E19289020");
