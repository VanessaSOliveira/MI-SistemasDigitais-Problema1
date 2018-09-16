/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'projeto1'
 * SOPC Builder design path: C:/altera/13.1/Projeto_1/projeto1.sopcinfo
 *
 * Generated: Sun Sep 16 12:01:19 BRT 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "projeto1"


/*
 * botaoDescer configuration
 *
 */

#define ALT_MODULE_CLASS_botaoDescer altera_avalon_pio
#define BOTAODESCER_BASE 0x9070
#define BOTAODESCER_BIT_CLEARING_EDGE_REGISTER 0
#define BOTAODESCER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTAODESCER_CAPTURE 0
#define BOTAODESCER_DATA_WIDTH 1
#define BOTAODESCER_DO_TEST_BENCH_WIRING 0
#define BOTAODESCER_DRIVEN_SIM_VALUE 0
#define BOTAODESCER_EDGE_TYPE "NONE"
#define BOTAODESCER_FREQ 50000000
#define BOTAODESCER_HAS_IN 1
#define BOTAODESCER_HAS_OUT 0
#define BOTAODESCER_HAS_TRI 0
#define BOTAODESCER_IRQ -1
#define BOTAODESCER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BOTAODESCER_IRQ_TYPE "NONE"
#define BOTAODESCER_NAME "/dev/botaoDescer"
#define BOTAODESCER_RESET_VALUE 0
#define BOTAODESCER_SPAN 16
#define BOTAODESCER_TYPE "altera_avalon_pio"


/*
 * botaoSelecionar configuration
 *
 */

#define ALT_MODULE_CLASS_botaoSelecionar altera_avalon_pio
#define BOTAOSELECIONAR_BASE 0x9060
#define BOTAOSELECIONAR_BIT_CLEARING_EDGE_REGISTER 0
#define BOTAOSELECIONAR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTAOSELECIONAR_CAPTURE 0
#define BOTAOSELECIONAR_DATA_WIDTH 1
#define BOTAOSELECIONAR_DO_TEST_BENCH_WIRING 0
#define BOTAOSELECIONAR_DRIVEN_SIM_VALUE 0
#define BOTAOSELECIONAR_EDGE_TYPE "NONE"
#define BOTAOSELECIONAR_FREQ 50000000
#define BOTAOSELECIONAR_HAS_IN 1
#define BOTAOSELECIONAR_HAS_OUT 0
#define BOTAOSELECIONAR_HAS_TRI 0
#define BOTAOSELECIONAR_IRQ -1
#define BOTAOSELECIONAR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BOTAOSELECIONAR_IRQ_TYPE "NONE"
#define BOTAOSELECIONAR_NAME "/dev/botaoSelecionar"
#define BOTAOSELECIONAR_RESET_VALUE 0
#define BOTAOSELECIONAR_SPAN 16
#define BOTAOSELECIONAR_TYPE "altera_avalon_pio"


/*
 * botaoSubir configuration
 *
 */

#define ALT_MODULE_CLASS_botaoSubir altera_avalon_pio
#define BOTAOSUBIR_BASE 0x9080
#define BOTAOSUBIR_BIT_CLEARING_EDGE_REGISTER 0
#define BOTAOSUBIR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTAOSUBIR_CAPTURE 0
#define BOTAOSUBIR_DATA_WIDTH 1
#define BOTAOSUBIR_DO_TEST_BENCH_WIRING 0
#define BOTAOSUBIR_DRIVEN_SIM_VALUE 0
#define BOTAOSUBIR_EDGE_TYPE "NONE"
#define BOTAOSUBIR_FREQ 50000000
#define BOTAOSUBIR_HAS_IN 1
#define BOTAOSUBIR_HAS_OUT 0
#define BOTAOSUBIR_HAS_TRI 0
#define BOTAOSUBIR_IRQ -1
#define BOTAOSUBIR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BOTAOSUBIR_IRQ_TYPE "NONE"
#define BOTAOSUBIR_NAME "/dev/botaoSubir"
#define BOTAOSUBIR_RESET_VALUE 0
#define BOTAOSUBIR_SPAN 16
#define BOTAOSUBIR_TYPE "altera_avalon_pio"


/*
 * botaoVoltar configuration
 *
 */

#define ALT_MODULE_CLASS_botaoVoltar altera_avalon_pio
#define BOTAOVOLTAR_BASE 0x9050
#define BOTAOVOLTAR_BIT_CLEARING_EDGE_REGISTER 0
#define BOTAOVOLTAR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTAOVOLTAR_CAPTURE 0
#define BOTAOVOLTAR_DATA_WIDTH 1
#define BOTAOVOLTAR_DO_TEST_BENCH_WIRING 0
#define BOTAOVOLTAR_DRIVEN_SIM_VALUE 0
#define BOTAOVOLTAR_EDGE_TYPE "NONE"
#define BOTAOVOLTAR_FREQ 50000000
#define BOTAOVOLTAR_HAS_IN 1
#define BOTAOVOLTAR_HAS_OUT 0
#define BOTAOVOLTAR_HAS_TRI 0
#define BOTAOVOLTAR_IRQ -1
#define BOTAOVOLTAR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BOTAOVOLTAR_IRQ_TYPE "NONE"
#define BOTAOVOLTAR_NAME "/dev/botaoVoltar"
#define BOTAOVOLTAR_RESET_VALUE 0
#define BOTAOVOLTAR_SPAN 16
#define BOTAOVOLTAR_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * ledOpcao1 configuration
 *
 */

#define ALT_MODULE_CLASS_ledOpcao1 altera_avalon_pio
#define LEDOPCAO1_BASE 0x9040
#define LEDOPCAO1_BIT_CLEARING_EDGE_REGISTER 0
#define LEDOPCAO1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDOPCAO1_CAPTURE 0
#define LEDOPCAO1_DATA_WIDTH 1
#define LEDOPCAO1_DO_TEST_BENCH_WIRING 0
#define LEDOPCAO1_DRIVEN_SIM_VALUE 0
#define LEDOPCAO1_EDGE_TYPE "NONE"
#define LEDOPCAO1_FREQ 50000000
#define LEDOPCAO1_HAS_IN 0
#define LEDOPCAO1_HAS_OUT 1
#define LEDOPCAO1_HAS_TRI 0
#define LEDOPCAO1_IRQ -1
#define LEDOPCAO1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDOPCAO1_IRQ_TYPE "NONE"
#define LEDOPCAO1_NAME "/dev/ledOpcao1"
#define LEDOPCAO1_RESET_VALUE 0
#define LEDOPCAO1_SPAN 16
#define LEDOPCAO1_TYPE "altera_avalon_pio"


/*
 * ledOpcao2 configuration
 *
 */

#define ALT_MODULE_CLASS_ledOpcao2 altera_avalon_pio
#define LEDOPCAO2_BASE 0x9030
#define LEDOPCAO2_BIT_CLEARING_EDGE_REGISTER 0
#define LEDOPCAO2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDOPCAO2_CAPTURE 0
#define LEDOPCAO2_DATA_WIDTH 1
#define LEDOPCAO2_DO_TEST_BENCH_WIRING 0
#define LEDOPCAO2_DRIVEN_SIM_VALUE 0
#define LEDOPCAO2_EDGE_TYPE "NONE"
#define LEDOPCAO2_FREQ 50000000
#define LEDOPCAO2_HAS_IN 0
#define LEDOPCAO2_HAS_OUT 1
#define LEDOPCAO2_HAS_TRI 0
#define LEDOPCAO2_IRQ -1
#define LEDOPCAO2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDOPCAO2_IRQ_TYPE "NONE"
#define LEDOPCAO2_NAME "/dev/ledOpcao2"
#define LEDOPCAO2_RESET_VALUE 0
#define LEDOPCAO2_SPAN 16
#define LEDOPCAO2_TYPE "altera_avalon_pio"


/*
 * ledOpcao3 configuration
 *
 */

#define ALT_MODULE_CLASS_ledOpcao3 altera_avalon_pio
#define LEDOPCAO3_BASE 0x9020
#define LEDOPCAO3_BIT_CLEARING_EDGE_REGISTER 0
#define LEDOPCAO3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDOPCAO3_CAPTURE 0
#define LEDOPCAO3_DATA_WIDTH 1
#define LEDOPCAO3_DO_TEST_BENCH_WIRING 0
#define LEDOPCAO3_DRIVEN_SIM_VALUE 0
#define LEDOPCAO3_EDGE_TYPE "NONE"
#define LEDOPCAO3_FREQ 50000000
#define LEDOPCAO3_HAS_IN 0
#define LEDOPCAO3_HAS_OUT 1
#define LEDOPCAO3_HAS_TRI 0
#define LEDOPCAO3_IRQ -1
#define LEDOPCAO3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDOPCAO3_IRQ_TYPE "NONE"
#define LEDOPCAO3_NAME "/dev/ledOpcao3"
#define LEDOPCAO3_RESET_VALUE 0
#define LEDOPCAO3_SPAN 16
#define LEDOPCAO3_TYPE "altera_avalon_pio"


/*
 * ledOpcao4 configuration
 *
 */

#define ALT_MODULE_CLASS_ledOpcao4 altera_avalon_pio
#define LEDOPCAO4_BASE 0x9010
#define LEDOPCAO4_BIT_CLEARING_EDGE_REGISTER 0
#define LEDOPCAO4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDOPCAO4_CAPTURE 0
#define LEDOPCAO4_DATA_WIDTH 1
#define LEDOPCAO4_DO_TEST_BENCH_WIRING 0
#define LEDOPCAO4_DRIVEN_SIM_VALUE 0
#define LEDOPCAO4_EDGE_TYPE "NONE"
#define LEDOPCAO4_FREQ 50000000
#define LEDOPCAO4_HAS_IN 0
#define LEDOPCAO4_HAS_OUT 1
#define LEDOPCAO4_HAS_TRI 0
#define LEDOPCAO4_IRQ -1
#define LEDOPCAO4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDOPCAO4_IRQ_TYPE "NONE"
#define LEDOPCAO4_NAME "/dev/ledOpcao4"
#define LEDOPCAO4_RESET_VALUE 0
#define LEDOPCAO4_SPAN 16
#define LEDOPCAO4_TYPE "altera_avalon_pio"


/*
 * ledOpcao5 configuration
 *
 */

#define ALT_MODULE_CLASS_ledOpcao5 altera_avalon_pio
#define LEDOPCAO5_BASE 0x9000
#define LEDOPCAO5_BIT_CLEARING_EDGE_REGISTER 0
#define LEDOPCAO5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDOPCAO5_CAPTURE 0
#define LEDOPCAO5_DATA_WIDTH 1
#define LEDOPCAO5_DO_TEST_BENCH_WIRING 0
#define LEDOPCAO5_DRIVEN_SIM_VALUE 0
#define LEDOPCAO5_EDGE_TYPE "NONE"
#define LEDOPCAO5_FREQ 50000000
#define LEDOPCAO5_HAS_IN 0
#define LEDOPCAO5_HAS_OUT 1
#define LEDOPCAO5_HAS_TRI 0
#define LEDOPCAO5_IRQ -1
#define LEDOPCAO5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDOPCAO5_IRQ_TYPE "NONE"
#define LEDOPCAO5_NAME "/dev/ledOpcao5"
#define LEDOPCAO5_RESET_VALUE 0
#define LEDOPCAO5_SPAN 16
#define LEDOPCAO5_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x4000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "projeto1_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 16372
#define ONCHIP_MEMORY2_0_SPAN 16372
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1

#endif /* __SYSTEM_H_ */
