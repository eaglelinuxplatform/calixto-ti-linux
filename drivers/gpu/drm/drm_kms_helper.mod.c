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

SYMBOL_CRC(drm_bridge_connector_disable_hpd, 0x0e84cc66, "_gpl");
SYMBOL_CRC(drm_bridge_connector_enable_hpd, 0x75426e0f, "_gpl");
SYMBOL_CRC(drm_bridge_connector_init, 0x51c7e220, "_gpl");
SYMBOL_CRC(drm_crtc_helper_set_config, 0x3881f73d, "");
SYMBOL_CRC(drm_crtc_helper_set_mode, 0x51a7c38c, "");
SYMBOL_CRC(drm_helper_connector_dpms, 0xbeda1386, "");
SYMBOL_CRC(drm_helper_crtc_in_use, 0x925ec581, "");
SYMBOL_CRC(drm_helper_disable_unused_functions, 0x453872c1, "");
SYMBOL_CRC(drm_helper_encoder_in_use, 0x40d36d8b, "");
SYMBOL_CRC(drm_helper_force_disable_all, 0x4294812e, "");
SYMBOL_CRC(drm_helper_resume_force_mode, 0xa48c8236, "");
SYMBOL_CRC(drm_i2c_encoder_commit, 0xb1cb6ff0, "");
SYMBOL_CRC(drm_i2c_encoder_destroy, 0x2aa5a504, "");
SYMBOL_CRC(drm_i2c_encoder_detect, 0x84fb7273, "");
SYMBOL_CRC(drm_i2c_encoder_dpms, 0x74410c8a, "");
SYMBOL_CRC(drm_i2c_encoder_init, 0x8755f781, "");
SYMBOL_CRC(drm_i2c_encoder_mode_fixup, 0x3954e581, "");
SYMBOL_CRC(drm_i2c_encoder_mode_set, 0xce278999, "");
SYMBOL_CRC(drm_i2c_encoder_prepare, 0xe8fc56e3, "");
SYMBOL_CRC(drm_i2c_encoder_restore, 0x2d3e3e9e, "");
SYMBOL_CRC(drm_i2c_encoder_save, 0x3ad7c882, "");
SYMBOL_CRC(drm_flip_work_allocate_task, 0xcf11a549, "");
SYMBOL_CRC(drm_flip_work_cleanup, 0x7e016d38, "");
SYMBOL_CRC(drm_flip_work_commit, 0x4834906a, "");
SYMBOL_CRC(drm_flip_work_init, 0x6b0b9550, "");
SYMBOL_CRC(drm_flip_work_queue, 0xd1fc5f14, "");
SYMBOL_CRC(drm_flip_work_queue_task, 0xdc833fbb, "");
SYMBOL_CRC(drm_connector_helper_get_modes, 0x64879a3c, "");
SYMBOL_CRC(drm_connector_helper_get_modes_fixed, 0x0f14cead, "");
SYMBOL_CRC(drm_connector_helper_get_modes_from_ddc, 0x7b80a384, "");
SYMBOL_CRC(drm_connector_helper_hpd_irq_event, 0xbd3c1f08, "");
SYMBOL_CRC(drm_crtc_helper_mode_valid_fixed, 0xc510c5f0, "");
SYMBOL_CRC(drm_helper_hpd_irq_event, 0x92806196, "");
SYMBOL_CRC(drm_helper_probe_detect, 0x702e6b4d, "");
SYMBOL_CRC(drm_helper_probe_single_connector_modes, 0x682ca1d2, "");
SYMBOL_CRC(drm_kms_helper_connector_hotplug_event, 0x9bb1dfc4, "");
SYMBOL_CRC(drm_kms_helper_hotplug_event, 0xa28dda74, "");
SYMBOL_CRC(drm_kms_helper_is_poll_worker, 0x5a4734d1, "");
SYMBOL_CRC(drm_kms_helper_poll_disable, 0x4415d79f, "");
SYMBOL_CRC(drm_kms_helper_poll_enable, 0x7493be2e, "");
SYMBOL_CRC(drm_kms_helper_poll_fini, 0x82f18132, "");
SYMBOL_CRC(drm_kms_helper_poll_init, 0x3fb209c9, "");
SYMBOL_CRC(drm_plane_helper_atomic_check, 0x7f45ccdd, "");
SYMBOL_CRC(drm_plane_helper_destroy, 0x4fef2c46, "");
SYMBOL_CRC(drm_plane_helper_disable_primary, 0x64a5118a, "");
SYMBOL_CRC(drm_plane_helper_update_primary, 0xb9f5aca9, "");
SYMBOL_CRC(drm_atomic_helper_async_check, 0x8bcee093, "");
SYMBOL_CRC(drm_atomic_helper_async_commit, 0x1ed6c899, "");
SYMBOL_CRC(drm_atomic_helper_bridge_propagate_bus_fmt, 0xe1220f0b, "");
SYMBOL_CRC(drm_atomic_helper_calc_timestamping_constants, 0x1b382be9, "");
SYMBOL_CRC(drm_atomic_helper_check, 0x9b746454, "");
SYMBOL_CRC(drm_atomic_helper_check_crtc_state, 0x2545d2c0, "");
SYMBOL_CRC(drm_atomic_helper_check_modeset, 0x9851b8d3, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_state, 0x6045cae4, "");
SYMBOL_CRC(drm_atomic_helper_check_planes, 0xe2399407, "");
SYMBOL_CRC(drm_atomic_helper_check_wb_encoder_state, 0x0aa6da59, "");
SYMBOL_CRC(drm_atomic_helper_cleanup_planes, 0x23958378, "");
SYMBOL_CRC(drm_atomic_helper_commit, 0x36bb62e1, "");
SYMBOL_CRC(drm_atomic_helper_commit_cleanup_done, 0x2b57d54f, "");
SYMBOL_CRC(drm_atomic_helper_commit_duplicated_state, 0x29c421b0, "");
SYMBOL_CRC(drm_atomic_helper_commit_hw_done, 0xdd2f231d, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_disables, 0x776488df, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_enables, 0x1125d52d, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes, 0x597a966a, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes_on_crtc, 0xd564b845, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail, 0x45a2709c, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail_rpm, 0x0f70313d, "");
SYMBOL_CRC(drm_atomic_helper_disable_all, 0x5f818351, "");
SYMBOL_CRC(drm_atomic_helper_disable_plane, 0x9a8aec17, "");
SYMBOL_CRC(drm_atomic_helper_disable_planes_on_crtc, 0xbc678ebb, "");
SYMBOL_CRC(drm_atomic_helper_duplicate_state, 0x6a7a3448, "");
SYMBOL_CRC(drm_atomic_helper_fake_vblank, 0x1856020a, "");
SYMBOL_CRC(drm_atomic_helper_page_flip, 0x625d5be5, "");
SYMBOL_CRC(drm_atomic_helper_page_flip_target, 0x1c06e1e3, "");
SYMBOL_CRC(drm_atomic_helper_prepare_planes, 0x4b968184, "");
SYMBOL_CRC(drm_atomic_helper_resume, 0x7b961e1a, "");
SYMBOL_CRC(drm_atomic_helper_set_config, 0x2247dde5, "");
SYMBOL_CRC(drm_atomic_helper_setup_commit, 0x8b22553d, "");
SYMBOL_CRC(drm_atomic_helper_shutdown, 0xa27c5a12, "");
SYMBOL_CRC(drm_atomic_helper_suspend, 0xd1f56449, "");
SYMBOL_CRC(drm_atomic_helper_swap_state, 0x1193f388, "");
SYMBOL_CRC(drm_atomic_helper_update_legacy_modeset_state, 0x592a4105, "");
SYMBOL_CRC(drm_atomic_helper_update_plane, 0xaaff87ab, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_dependencies, 0x9d13eb79, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_fences, 0x7039a2a3, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_flip_done, 0xacc1a634, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_vblanks, 0x4d0cab28, "");
SYMBOL_CRC(__drmm_simple_encoder_alloc, 0x128ed74e, "");
SYMBOL_CRC(drm_simple_display_pipe_attach_bridge, 0x6bb352da, "");
SYMBOL_CRC(drm_simple_display_pipe_init, 0xf616f69b, "");
SYMBOL_CRC(drm_simple_encoder_init, 0xf9a773d4, "");
SYMBOL_CRC(drm_crtc_init, 0xc9c60b2c, "");
SYMBOL_CRC(drm_helper_mode_fill_fb_struct, 0x03d57406, "");
SYMBOL_CRC(drm_helper_move_panel_connectors_to_head, 0xabdf4fa4, "");
SYMBOL_CRC(drm_mode_config_helper_resume, 0xb3d4375e, "");
SYMBOL_CRC(drm_mode_config_helper_suspend, 0x2eb6f967, "");
SYMBOL_CRC(__drm_gem_destroy_shadow_plane_state, 0x20421576, "");
SYMBOL_CRC(__drm_gem_duplicate_shadow_plane_state, 0xc11f5d41, "");
SYMBOL_CRC(__drm_gem_reset_shadow_plane, 0x3c8d12ea, "");
SYMBOL_CRC(drm_gem_cleanup_shadow_fb, 0x9c751094, "");
SYMBOL_CRC(drm_gem_destroy_shadow_plane_state, 0x47b27600, "");
SYMBOL_CRC(drm_gem_duplicate_shadow_plane_state, 0x7cb6a209, "");
SYMBOL_CRC(drm_gem_prepare_shadow_fb, 0x9869b812, "");
SYMBOL_CRC(drm_gem_reset_shadow_plane, 0x7153250f, "");
SYMBOL_CRC(drm_gem_simple_display_pipe_prepare_fb, 0xf65944ec, "");
SYMBOL_CRC(drm_gem_simple_kms_cleanup_shadow_fb, 0xe3addad1, "");
SYMBOL_CRC(drm_gem_simple_kms_destroy_shadow_plane_state, 0x3e9156ce, "");
SYMBOL_CRC(drm_gem_simple_kms_duplicate_shadow_plane_state, 0x089cd9db, "");
SYMBOL_CRC(drm_gem_simple_kms_prepare_shadow_fb, 0x47d20f3c, "");
SYMBOL_CRC(drm_gem_simple_kms_reset_shadow_plane, 0x0b8252ba, "");
SYMBOL_CRC(drm_gem_plane_helper_prepare_fb, 0x79806181, "_gpl");
SYMBOL_CRC(drm_gem_fb_begin_cpu_access, 0x6483dc68, "");
SYMBOL_CRC(drm_gem_fb_create_handle, 0xcd4c1390, "");
SYMBOL_CRC(drm_gem_fb_destroy, 0x0e7a2586, "");
SYMBOL_CRC(drm_gem_fb_end_cpu_access, 0x8bf44748, "");
SYMBOL_CRC(drm_gem_fb_vmap, 0x8beac4c0, "");
SYMBOL_CRC(drm_gem_fb_vunmap, 0x4bfcf005, "");
SYMBOL_CRC(drm_gem_fb_afbc_init, 0x62bd17d2, "_gpl");
SYMBOL_CRC(drm_gem_fb_create, 0xde80670a, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_dirty, 0x864d8455, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_funcs, 0xce58683b, "_gpl");
SYMBOL_CRC(drm_gem_fb_get_obj, 0x1733db3e, "_gpl");
SYMBOL_CRC(drm_gem_fb_init_with_funcs, 0x4d3e865d, "_gpl");
SYMBOL_CRC(__drm_atomic_helper_bridge_duplicate_state, 0x0133ccf4, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_reset, 0x266e7ef9, "");
SYMBOL_CRC(__drm_atomic_helper_connector_destroy_state, 0x715aaa4f, "");
SYMBOL_CRC(__drm_atomic_helper_connector_duplicate_state, 0x348b275b, "");
SYMBOL_CRC(__drm_atomic_helper_connector_reset, 0x7fa09693, "");
SYMBOL_CRC(__drm_atomic_helper_connector_state_reset, 0x4282deed, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_destroy_state, 0xaef4f513, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_duplicate_state, 0x30b07c52, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_reset, 0x69971690, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_state_reset, 0xe3532c52, "");
SYMBOL_CRC(__drm_atomic_helper_plane_destroy_state, 0x4e29b34b, "");
SYMBOL_CRC(__drm_atomic_helper_plane_duplicate_state, 0xb02e7bbe, "");
SYMBOL_CRC(__drm_atomic_helper_plane_reset, 0x82662865, "");
SYMBOL_CRC(__drm_atomic_helper_plane_state_reset, 0x4ec190a8, "");
SYMBOL_CRC(__drm_atomic_helper_private_obj_duplicate_state, 0x924592b7, "");
SYMBOL_CRC(drm_atomic_helper_bridge_destroy_state, 0x9080af33, "");
SYMBOL_CRC(drm_atomic_helper_bridge_duplicate_state, 0xbb67e0cf, "");
SYMBOL_CRC(drm_atomic_helper_bridge_reset, 0x081aa072, "");
SYMBOL_CRC(drm_atomic_helper_connector_destroy_state, 0x3d2e723e, "");
SYMBOL_CRC(drm_atomic_helper_connector_duplicate_state, 0x48792f48, "");
SYMBOL_CRC(drm_atomic_helper_connector_reset, 0x1e795898, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_reset, 0xdac8fb02, "");
SYMBOL_CRC(drm_atomic_helper_crtc_destroy_state, 0x33c8a9e6, "");
SYMBOL_CRC(drm_atomic_helper_crtc_duplicate_state, 0x8e99300b, "");
SYMBOL_CRC(drm_atomic_helper_crtc_reset, 0xfd05dcc3, "");
SYMBOL_CRC(drm_atomic_helper_plane_destroy_state, 0xd6290df4, "");
SYMBOL_CRC(drm_atomic_helper_plane_duplicate_state, 0x0abbb2f4, "");
SYMBOL_CRC(drm_atomic_helper_plane_reset, 0x2c87055e, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_damage, 0xa90907f8, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_init, 0x616efa87, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_next, 0x6b5c2b06, "");
SYMBOL_CRC(drm_atomic_helper_damage_merged, 0xa318a2bd, "");
SYMBOL_CRC(drm_atomic_helper_dirtyfb, 0x03eacc8c, "");
SYMBOL_CRC(drm_fb_blit, 0x39f7f2df, "");
SYMBOL_CRC(drm_fb_build_fourcc_list, 0x15251a77, "");
SYMBOL_CRC(drm_fb_clip_offset, 0xb6a6b711, "");
SYMBOL_CRC(drm_fb_memcpy, 0xcc9efca8, "");
SYMBOL_CRC(drm_fb_swab, 0x569ea80c, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_gray8, 0x4cc01ea8, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_mono, 0x24234ee1, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb332, 0x6bc7fc3a, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb565, 0xf6f95f05, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb888, 0x52d0c009, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xrgb2101010, 0xebade3bd, "");
SYMBOL_CRC(drm_self_refresh_helper_alter_state, 0xb50096a0, "");
SYMBOL_CRC(drm_self_refresh_helper_cleanup, 0xe59e0854, "");
SYMBOL_CRC(drm_self_refresh_helper_init, 0x055e0e72, "");
SYMBOL_CRC(drm_self_refresh_helper_update_avg_times, 0xbfb3f65b, "");
SYMBOL_CRC(drm_rect_calc_hscale, 0x2d50570f, "");
SYMBOL_CRC(drm_rect_calc_vscale, 0x91fec1cc, "");
SYMBOL_CRC(drm_rect_clip_scaled, 0x99fd20aa, "");
SYMBOL_CRC(drm_rect_debug_print, 0xcb2340b8, "");
SYMBOL_CRC(drm_rect_intersect, 0x871ab41a, "");
SYMBOL_CRC(drm_rect_rotate, 0xb053adda, "");
SYMBOL_CRC(drm_rect_rotate_inv, 0x6e30ba8e, "");
SYMBOL_CRC(devm_drm_of_get_bridge, 0xd735a152, "");
SYMBOL_CRC(devm_drm_panel_bridge_add, 0x5e9a3a8d, "");
SYMBOL_CRC(devm_drm_panel_bridge_add_typed, 0x20ab25dd, "");
SYMBOL_CRC(drm_bridge_is_panel, 0xe88aa9c4, "");
SYMBOL_CRC(drm_panel_bridge_add, 0x43e722d5, "");
SYMBOL_CRC(drm_panel_bridge_add_typed, 0xc8a75a66, "");
SYMBOL_CRC(drm_panel_bridge_connector, 0x02c39d74, "");
SYMBOL_CRC(drm_panel_bridge_remove, 0x2e3d98f5, "");
SYMBOL_CRC(drm_panel_bridge_set_orientation, 0x21be7657, "");
SYMBOL_CRC(drmm_of_get_bridge, 0xaff45302, "");
SYMBOL_CRC(drmm_panel_bridge_add, 0x4be4a512, "");
SYMBOL_CRC(drm_fb_helper_alloc_fbi, 0x5aa4f645, "");
SYMBOL_CRC(drm_fb_helper_blank, 0xf3574883, "");
SYMBOL_CRC(drm_fb_helper_cfb_copyarea, 0xce3be854, "");
SYMBOL_CRC(drm_fb_helper_cfb_fillrect, 0x5397b3ac, "");
SYMBOL_CRC(drm_fb_helper_cfb_imageblit, 0x91138b24, "");
SYMBOL_CRC(drm_fb_helper_check_var, 0x8eed5e94, "");
SYMBOL_CRC(drm_fb_helper_debug_enter, 0xd7d2d70b, "");
SYMBOL_CRC(drm_fb_helper_debug_leave, 0xc163603d, "");
SYMBOL_CRC(drm_fb_helper_deferred_io, 0xb1443107, "");
SYMBOL_CRC(drm_fb_helper_fill_info, 0xa39ff18b, "");
SYMBOL_CRC(drm_fb_helper_fini, 0x2b38c430, "");
SYMBOL_CRC(drm_fb_helper_hotplug_event, 0x57f53095, "");
SYMBOL_CRC(drm_fb_helper_init, 0xd251a59b, "");
SYMBOL_CRC(drm_fb_helper_initial_config, 0x32c7a650, "");
SYMBOL_CRC(drm_fb_helper_ioctl, 0x8d20e407, "");
SYMBOL_CRC(drm_fb_helper_lastclose, 0xdb9251b4, "");
SYMBOL_CRC(drm_fb_helper_output_poll_changed, 0x04d451eb, "");
SYMBOL_CRC(drm_fb_helper_pan_display, 0x3455cb4c, "");
SYMBOL_CRC(drm_fb_helper_prepare, 0xf77bef46, "");
SYMBOL_CRC(drm_fb_helper_restore_fbdev_mode_unlocked, 0x199b23b3, "");
SYMBOL_CRC(drm_fb_helper_set_par, 0x69a3a07e, "");
SYMBOL_CRC(drm_fb_helper_set_suspend, 0x28ffa782, "");
SYMBOL_CRC(drm_fb_helper_set_suspend_unlocked, 0xa42bd38d, "");
SYMBOL_CRC(drm_fb_helper_setcmap, 0xd43c3428, "");
SYMBOL_CRC(drm_fb_helper_sys_copyarea, 0x82d64b46, "");
SYMBOL_CRC(drm_fb_helper_sys_fillrect, 0x1f7a10be, "");
SYMBOL_CRC(drm_fb_helper_sys_imageblit, 0x9c1e7437, "");
SYMBOL_CRC(drm_fb_helper_sys_read, 0x06472e52, "");
SYMBOL_CRC(drm_fb_helper_sys_write, 0xe28556d0, "");
SYMBOL_CRC(drm_fb_helper_unregister_fbi, 0xc6b7f157, "");
SYMBOL_CRC(drm_fbdev_generic_setup, 0xcd096056, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdfb1a937, "unregister_framebuffer" },
	{ 0xafeb5a47, "drm_framebuffer_cleanup" },
	{ 0xb9c4492c, "___drm_dbg" },
	{ 0x5c27faf4, "drm_client_register" },
	{ 0x29c513eb, "drm_writeback_prepare_job" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x53fe5499, "drm_panel_get_modes" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x2c79417a, "drm_connector_list_update" },
	{ 0xf5f27adc, "drm_bridge_add" },
	{ 0x80b8906b, "drm_bridge_chain_mode_valid" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x9d2e7707, "unregister_sysrq_key" },
	{ 0x6b203f6f, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xfe591c1e, "drm_add_override_edid_modes" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf4db45a2, "drm_client_buffer_vmap" },
	{ 0x184eeec0, "drm_client_rotation" },
	{ 0xe2dd8c52, "drm_panel_enable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7177b223, "drm_framebuffer_init" },
	{ 0x389628f7, "drm_mode_validate_driver" },
	{ 0xadb4bd4d, "drm_atomic_add_affected_planes" },
	{ 0x69351c41, "dma_buf_end_cpu_access" },
	{ 0x5f3f2e1a, "drm_modeset_unlock_all" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0x624760ab, "drm_atomic_add_affected_connectors" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7c66f4c4, "cfb_copyarea" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x91d239ab, "drm_bridge_hpd_enable" },
	{ 0x44e9e5df, "drm_crtc_vblank_count" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x49970de8, "finish_wait" },
	{ 0x31f1b903, "drm_modeset_lock_all" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x576937fd, "drm_client_framebuffer_delete" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0x586ce1b6, "drm_client_framebuffer_create" },
	{ 0xea12a57b, "drm_atomic_bridge_chain_enable" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0x9d702cd1, "drm_mode_object_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x4cacff27, "drm_gem_vmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xabdb17d1, "drm_crtc_cleanup" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5c9f2563, "drm_gem_vunmap" },
	{ 0xd11ff08b, "drm_connector_list_iter_begin" },
	{ 0xabb37e1a, "fb_deferred_io_init" },
	{ 0x1ab36c1f, "drm_mode_set_config_internal" },
	{ 0x2b7b7cb7, "fb_deferred_io_cleanup" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2b174036, "framebuffer_alloc" },
	{ 0x4bf5f3ca, "drm_encoder_cleanup" },
	{ 0x55e6631d, "drm_connector_unregister" },
	{ 0x8b01ac08, "drm_modeset_acquire_init" },
	{ 0x63bac1d2, "drm_client_modeset_probe" },
	{ 0xd0ac40dd, "drm_warn_on_modeset_not_all_locked" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xb85c510, "drm_plane_get_damage_clips" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe428464e, "dma_fence_wait_timeout" },
	{ 0x9e632a07, "drm_add_modes_noedid" },
	{ 0xe6f74e3, "drm_bridge_remove" },
	{ 0x380f883f, "drm_mode_object_put" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x85363cd1, "drm_crtc_vblank_get" },
	{ 0x5cc8961b, "drm_gem_object_lookup" },
	{ 0xc106a66, "drm_crtc_send_vblank_event" },
	{ 0x2d561977, "drm_connector_attach_encoder" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0x1e7469c, "fb_sys_write" },
	{ 0xb415efe3, "drm_atomic_normalize_zpos" },
	{ 0xb9bbb226, "drm_edid_connector_update" },
	{ 0x1c98a41d, "drm_sysfs_hotplug_event" },
	{ 0x37028977, "drm_bridge_hpd_disable" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x835b183, "sys_imageblit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe91aa11b, "__drmm_add_action_or_reset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbf3f5f4b, "drm_crtc_vblank_reset" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x40d04664, "console_trylock" },
	{ 0xac421e38, "sys_fillrect" },
	{ 0x9da825c5, "drm_connector_list_iter_end" },
	{ 0xe93fe3a7, "drm_atomic_set_crtc_for_plane" },
	{ 0x728317f4, "drm_client_modeset_dpms" },
	{ 0xce925d25, "drm_mode_prune_invalid" },
	{ 0xefb1c4a5, "drm_client_dev_hotplug" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0xbb59c261, "dma_resv_get_singleton" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xf6325c6e, "drm_plane_cleanup" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x1449535e, "module_put" },
	{ 0xfa30cd7a, "dma_buf_begin_cpu_access" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xa41c32d1, "drm_atomic_get_crtc_state" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x9aab7ae1, "drm_client_init" },
	{ 0x1bc5c923, "drm_crtc_wait_one_vblank" },
	{ 0x39afe5ba, "__drmm_encoder_alloc" },
	{ 0xd7a9cf42, "drm_mode_validate_size" },
	{ 0xd39ffdc3, "drm_modeset_lock" },
	{ 0x148d68c5, "drm_client_modeset_commit_locked" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x9b12d707, "drm_modeset_unlock" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0x460be2b6, "drm_property_replace_blob" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8f03acad, "drm_connector_init" },
	{ 0x45962907, "devm_kfree" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xbe8b8d97, "drm_writeback_cleanup_job" },
	{ 0x3360ebbe, "drm_modeset_lock_all_ctx" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0xd6f0a283, "drm_atomic_set_fb_for_plane" },
	{ 0xe76f65c7, "__drm_universal_plane_alloc" },
	{ 0xf4b14942, "drm_connector_init_with_ddc" },
	{ 0x61ddff67, "drm_add_edid_modes" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0xec90c7f, "drm_edid_read" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0xe060ef1e, "drm_crtc_commit_wait" },
	{ 0x82c90fbd, "drm_dev_has_vblank" },
	{ 0x22e830c5, "register_framebuffer" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xb321c66e, "__drm_atomic_helper_disable_plane" },
	{ 0x9e799b9a, "drm_connector_set_orientation_from_panel" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x64cdab5e, "drm_gem_handle_create" },
	{ 0x41347c9f, "drm_atomic_set_crtc_for_connector" },
	{ 0xc031900a, "drm_crtc_init_with_planes" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x32a64f5f, "drm_crtc_vblank_put" },
	{ 0xa319e2db, "i2c_new_client_device" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xbbf142c1, "__drm_dev_dbg" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x139e0789, "cfb_imageblit" },
	{ 0x5a99193e, "drm_plane_get_damage_clips_count" },
	{ 0x15157b8f, "drm_atomic_commit" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x17c6ca6f, "fb_deferred_io_mmap" },
	{ 0xd3b212fd, "drm_atomic_state_alloc" },
	{ 0x869781fc, "drm_client_modeset_commit" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x51dd33a8, "drm_atomic_bridge_chain_post_disable" },
	{ 0x3faaf2f7, "drm_connector_update_edid_property" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xc631580a, "console_unlock" },
	{ 0x5b460b22, "fb_set_suspend" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xbcbb05ff, "drm_client_release" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x8d72789e, "drm_edid_is_valid" },
	{ 0xf024a820, "__drm_atomic_helper_set_config" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x29261100, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0x1fdb8591, "drm_get_format_info" },
	{ 0xb4430229, "drm_connector_cleanup" },
	{ 0xa1b93fd9, "drm_universal_plane_init" },
	{ 0xa48b115c, "sys_copyarea" },
	{ 0xb50528d8, "drm_connector_list_iter_next" },
	{ 0x6e0d27e1, "drm_modeset_acquire_fini" },
	{ 0x1b0683e4, "drm_encoder_init" },
	{ 0x999e8297, "vfree" },
	{ 0x82511052, "drm_object_property_get_default_value" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x9709dbc5, "current_work" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x74affba0, "cfb_fillrect" },
	{ 0x1e20634d, "drm_of_find_panel_or_bridge" },
	{ 0xf4936887, "drm_master_internal_acquire" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfdc5460e, "drm_modeset_backoff" },
	{ 0x8532ea3c, "drm_panel_prepare" },
	{ 0x55f2e5b6, "drm_bridge_chain_mode_set" },
	{ 0xc859affc, "drm_client_buffer_vunmap" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x71181696, "fb_sys_read" },
	{ 0x3bc2e9b, "drm_atomic_get_plane_state" },
	{ 0xc4cb36c9, "drm_atomic_bridge_chain_check" },
	{ 0x74ec66d7, "dma_fence_chain_init" },
	{ 0xb868ac5c, "register_sysrq_key" },
	{ 0x6d0b03d2, "drm_property_blob_get" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x25fb2efe, "drm_property_blob_put" },
	{ 0x4d270c0f, "drm_mode_destroy" },
	{ 0x3419bb4b, "drm_bridge_attach" },
	{ 0x29db79bc, "drm_set_preferred_mode" },
	{ 0x6eba29ba, "drm_atomic_bridge_chain_pre_enable" },
	{ 0x451383b0, "drm_atomic_state_clear" },
	{ 0x39c55ced, "drm_mode_config_reset" },
	{ 0xaca001ab, "drm_property_create_blob" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xb54241da, "drm_modeset_drop_locks" },
	{ 0x7b18fde4, "framebuffer_release" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x8129754a, "drm_atomic_bridge_chain_disable" },
	{ 0x5e574dff, "drm_mode_create_from_cmdline_mode" },
	{ 0xe4b3526c, "drm_mode_validate_ycbcr420" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x77f28b1b, "drm_atomic_nonblocking_commit" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x7e986abe, "try_wait_for_completion" },
	{ 0xdcfccafc, "drm_master_internal_release" },
	{ 0x5138844c, "drm_get_edid" },
	{ 0xb3b87c38, "drm_calc_timestamping_constants" },
	{ 0xcdb99cc9, "drm_mode_init" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x697ee8e5, "drm_atomic_add_encoder_bridges" },
	{ 0x93bcda2d, "drm_atomic_get_connector_state" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8b174924, "drm_sysfs_connector_hotplug_event" },
	{ 0x92b57248, "flush_work" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,cfbcopyarea,fb_sys_fops,sysimgblt,sysfillrect,cfbimgblt,syscopyarea,cfbfillrect");


MODULE_INFO(srcversion, "EF039FB0187E27D255A764E");
