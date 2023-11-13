cmd_arch/arm/boot/dts/am57xx-sbc-am57x.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.dts.tmp arch/arm/boot/dts/am57xx-sbc-am57x.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/am57xx-sbc-am57x.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.d.dtc.tmp arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.dts.tmp ; cat arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.d.pre.tmp arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.d.dtc.tmp > arch/arm/boot/dts/.am57xx-sbc-am57x.dtb.d

source_arch/arm/boot/dts/am57xx-sbc-am57x.dtb := arch/arm/boot/dts/am57xx-sbc-am57x.dts

deps_arch/arm/boot/dts/am57xx-sbc-am57x.dtb := \
  arch/arm/boot/dts/am57xx-cl-som-am57x.dts \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/am5728.dtsi \
  arch/arm/boot/dts/dra74x.dtsi \
  arch/arm/boot/dts/dra7.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/dra7.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/dra.h \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap5-gpu-thermal.dtsi \
  arch/arm/boot/dts/omap5-core-thermal.dtsi \
  arch/arm/boot/dts/dra7-dspeve-thermal.dtsi \
  arch/arm/boot/dts/dra7-iva-thermal.dtsi \
  arch/arm/boot/dts/dra7-l4.dtsi \
  arch/arm/boot/dts/dra7xx-clocks.dtsi \
  arch/arm/boot/dts/am57-pruss.dtsi \
  arch/arm/boot/dts/compulab-sb-som.dtsi \

arch/arm/boot/dts/am57xx-sbc-am57x.dtb: $(deps_arch/arm/boot/dts/am57xx-sbc-am57x.dtb)

$(deps_arch/arm/boot/dts/am57xx-sbc-am57x.dtb):
