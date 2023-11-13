cmd_arch/arm/kernel/entry-armv.o := arm-oe-linux-gnueabi-gcc -Wp,-MMD,arch/arm/kernel/.entry-armv.o.d -nostdinc -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -include asm/unified.h -msoft-float -g -gdwarf-4    -c -o arch/arm/kernel/entry-armv.o arch/arm/kernel/entry-armv.S 

source_arch/arm/kernel/entry-armv.o := arch/arm/kernel/entry-armv.S

deps_arch/arm/kernel/entry-armv.o := \
    $(wildcard include/config/VMAP_STACK) \
    $(wildcard include/config/AEABI) \
    $(wildcard include/config/THUMB2_KERNEL) \
    $(wildcard include/config/TRACE_IRQFLAGS) \
    $(wildcard include/config/PREEMPTION) \
    $(wildcard include/config/KPROBES) \
    $(wildcard include/config/CPU_32v6K) \
    $(wildcard include/config/KUSER_HELPERS) \
    $(wildcard include/config/MMU) \
    $(wildcard include/config/ARM_THUMB) \
    $(wildcard include/config/CPU_V7) \
    $(wildcard include/config/NEON) \
    $(wildcard include/config/IWMMXT) \
    $(wildcard include/config/VFP) \
    $(wildcard include/config/CPU_USE_DOMAINS) \
    $(wildcard include/config/STACKPROTECTOR) \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/STACKPROTECTOR_PER_TASK) \
    $(wildcard include/config/THREAD_INFO_IN_TASK) \
    $(wildcard include/config/UNWINDER_FRAME_POINTER) \
    $(wildcard include/config/CC_IS_GCC) \
    $(wildcard include/config/HARDEN_BRANCH_HISTORY) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/CPU_V7M) \
  include/linux/init.h \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/STRICT_KERNEL_RWX) \
    $(wildcard include/config/STRICT_MODULE_RWX) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/OBJTOOL) \
  include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  arch/arm/include/generated/asm/rwonce.h \
  include/asm-generic/rwonce.h \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/arm/include/uapi/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  arch/arm/include/asm/assembler.h \
    $(wildcard include/config/CPU_ENDIAN_BE8) \
    $(wildcard include/config/CPU_FEROCEON) \
    $(wildcard include/config/PREEMPT_COUNT) \
    $(wildcard include/config/CPU_V6) \
    $(wildcard include/config/CURRENT_POINTER_IN_TPIDRURO) \
    $(wildcard include/config/DEBUG_BUGVERBOSE) \
    $(wildcard include/config/ARM_HAS_GROUP_RELOCS) \
    $(wildcard include/config/ARM_MODULE_PLTS) \
  arch/arm/include/asm/ptrace.h \
  arch/arm/include/uapi/asm/ptrace.h \
  arch/arm/include/asm/hwcap.h \
  arch/arm/include/uapi/asm/hwcap.h \
  arch/arm/include/asm/opcodes-virt.h \
  arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/CPU_ENDIAN_BE32) \
  include/linux/stringify.h \
  arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/arm/include/asm/page.h \
    $(wildcard include/config/CPU_COPY_V4WT) \
    $(wildcard include/config/CPU_COPY_V4WB) \
    $(wildcard include/config/CPU_COPY_FEROCEON) \
    $(wildcard include/config/CPU_COPY_FA) \
    $(wildcard include/config/CPU_SA1100) \
    $(wildcard include/config/CPU_XSCALE) \
    $(wildcard include/config/CPU_XSC3) \
    $(wildcard include/config/CPU_COPY_V6) \
    $(wildcard include/config/ARM_LPAE) \
    $(wildcard include/config/HAVE_ARCH_PFN_VALID) \
  include/asm-generic/getorder.h \
  arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/KASAN) \
    $(wildcard include/config/ARM_THUMBEE) \
  arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/VFPv3) \
  arch/arm/include/asm/uaccess-asm.h \
    $(wildcard include/config/CPU_SPECTRE) \
    $(wildcard include/config/CPU_SW_DOMAIN_PAN) \
  arch/arm/include/asm/domain.h \
    $(wildcard include/config/IO_36) \
    $(wildcard include/config/CPU_CP15_MMU) \
  arch/arm/include/asm/memory.h \
    $(wildcard include/config/NEED_MACH_MEMORY_H) \
    $(wildcard include/config/PAGE_OFFSET) \
    $(wildcard include/config/HIGHMEM) \
    $(wildcard include/config/DRAM_BASE) \
    $(wildcard include/config/DRAM_SIZE) \
    $(wildcard include/config/XIP_KERNEL) \
    $(wildcard include/config/HAVE_TCM) \
    $(wildcard include/config/ARM_PATCH_PHYS_VIRT) \
    $(wildcard include/config/PHYS_OFFSET) \
    $(wildcard include/config/DEBUG_VIRTUAL) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/linux/sizes.h \
  arch/arm/include/asm/kasan_def.h \
    $(wildcard include/config/KASAN_SHADOW_OFFSET) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/FLATMEM) \
    $(wildcard include/config/SPARSEMEM_VMEMMAP) \
    $(wildcard include/config/SPARSEMEM) \
  include/linux/pfn.h \
  arch/arm/include/asm/glue-df.h \
    $(wildcard include/config/CPU_ABRT_EV4) \
    $(wildcard include/config/CPU_ABRT_LV4T) \
    $(wildcard include/config/CPU_ABRT_EV4T) \
    $(wildcard include/config/CPU_ABRT_EV5T) \
    $(wildcard include/config/CPU_ABRT_EV5TJ) \
    $(wildcard include/config/CPU_ABRT_EV6) \
    $(wildcard include/config/CPU_ABRT_EV7) \
    $(wildcard include/config/CPU_ABRT_NOMMU) \
  arch/arm/include/asm/glue.h \
  arch/arm/include/asm/glue-pf.h \
    $(wildcard include/config/CPU_PABRT_LEGACY) \
    $(wildcard include/config/CPU_PABRT_V6) \
    $(wildcard include/config/CPU_PABRT_V7) \
  arch/arm/include/asm/vfpmacros.h \
    $(wildcard include/config/AS_VFP_VMRS_FPINST) \
  arch/arm/include/asm/vfp.h \
  arch/arm/include/asm/thread_notify.h \
  arch/arm/include/asm/unwind.h \
    $(wildcard include/config/ARM_UNWIND) \
  arch/arm/include/asm/unistd.h \
    $(wildcard include/config/OABI_COMPAT) \
  arch/arm/include/uapi/asm/unistd.h \
  arch/arm/include/generated/uapi/asm/unistd-eabi.h \
  arch/arm/include/generated/asm/unistd-nr.h \
  arch/arm/include/asm/tls.h \
    $(wildcard include/config/TLS_REG_EMUL) \
  arch/arm/include/asm/system_info.h \
  arch/arm/kernel/entry-header.S \
    $(wildcard include/config/FRAME_POINTER) \
    $(wildcard include/config/ALIGNMENT_TRAP) \
    $(wildcard include/config/CONTEXT_TRACKING_USER) \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/arm/include/asm/linkage.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  arch/arm/include/asm/v7m.h \
  arch/arm/include/asm/probes.h \

arch/arm/kernel/entry-armv.o: $(deps_arch/arm/kernel/entry-armv.o)

$(deps_arch/arm/kernel/entry-armv.o):
