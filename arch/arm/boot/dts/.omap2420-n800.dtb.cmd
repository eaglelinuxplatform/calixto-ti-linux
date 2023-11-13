cmd_arch/arm/boot/dts/omap2420-n800.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.omap2420-n800.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap2420-n800.dtb.dts.tmp arch/arm/boot/dts/omap2420-n800.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/omap2420-n800.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.omap2420-n800.dtb.d.dtc.tmp arch/arm/boot/dts/.omap2420-n800.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap2420-n800.dtb.d.pre.tmp arch/arm/boot/dts/.omap2420-n800.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap2420-n800.dtb.d

source_arch/arm/boot/dts/omap2420-n800.dtb := arch/arm/boot/dts/omap2420-n800.dts

deps_arch/arm/boot/dts/omap2420-n800.dtb := \
  arch/arm/boot/dts/omap2420-n8x0-common.dtsi \
  arch/arm/boot/dts/omap2420.dtsi \
  arch/arm/boot/dts/omap2.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/omap24xx-clocks.dtsi \
  arch/arm/boot/dts/omap2420-clocks.dtsi \

arch/arm/boot/dts/omap2420-n800.dtb: $(deps_arch/arm/boot/dts/omap2420-n800.dtb)

$(deps_arch/arm/boot/dts/omap2420-n800.dtb):
