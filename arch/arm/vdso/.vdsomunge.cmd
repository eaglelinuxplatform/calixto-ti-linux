cmd_arch/arm/vdso/vdsomunge := gcc -Wp,-MMD,arch/arm/vdso/.vdsomunge.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -Wdeclaration-after-statement         -o arch/arm/vdso/vdsomunge arch/arm/vdso/vdsomunge.c   

source_arch/arm/vdso/vdsomunge := arch/arm/vdso/vdsomunge.c

deps_arch/arm/vdso/vdsomunge := \

arch/arm/vdso/vdsomunge: $(deps_arch/arm/vdso/vdsomunge)

$(deps_arch/arm/vdso/vdsomunge):
