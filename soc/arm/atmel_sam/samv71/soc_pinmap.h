/*
 * Copyright (c) 2019 Gerson Fernando Budke
 * Copyright (c) 2016-2017 Piotr Mienkowski
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Atmel SAM V71 MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _ATMEL_SAM_SOC_PINMAP_H_
#define _ATMEL_SAM_SOC_PINMAP_H_

#include <soc.h>

/* Analog to Digital Converter (AFEC) */

#define PIN_AFE0_ADTRG {PIO_PA8B_AFEC0_ADTRG, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#define PIN_AFE1_ADTRG {PIO_PD9C_AFEC1_ADTRG, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}

/* Ethernet MAC (GMAC) */

#define PINS_GMAC_MASK (PIO_PD0A_GMAC_GTXCK | PIO_PD1A_GMAC_GTXEN \
	  | PIO_PD2A_GMAC_GTX0 | PIO_PD3A_GMAC_GTX1 | PIO_PD4A_GMAC_GRXDV \
	  | PIO_PD5A_GMAC_GRX0 | PIO_PD6A_GMAC_GRX1 | PIO_PD7A_GMAC_GRXER \
	  | PIO_PD8A_GMAC_GMDC | PIO_PD9A_GMAC_GMDIO)
#define PIN_GMAC_SET1 {PINS_GMAC_MASK, PIOD, ID_PIOD, SOC_GPIO_FUNC_A}

#define PINS_GMAC0 {PIN_GMAC_SET1}

/* Universal Asynchronous Receiver Transmitter (UART) */

#define PIN_UART0_RXD {PIO_PA9A_UART0_URXD0,  PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_UART0_TXD {PIO_PA10A_UART0_UTXD0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_UART0 {PIN_UART0_RXD, PIN_UART0_TXD}

#define PIN_UART1_RXD {PIO_PA5C_UART1_URXD1,  PIOA, ID_PIOA, SOC_GPIO_FUNC_C}
#ifdef CONFIG_UART_SAM_PORT_1_PIN_TX_PA4
#define PIN_UART1_TXD {PIO_PA4C_UART1_UTXD1,  PIOA, ID_PIOA, SOC_GPIO_FUNC_C}
#elif CONFIG_UART_SAM_PORT_1_PIN_TX_PA6
#define PIN_UART1_TXD {PIO_PA6C_UART1_UTXD1,  PIOA, ID_PIOA, SOC_GPIO_FUNC_C}
#elif CONFIG_UART_SAM_PORT_1_PIN_TX_PD26
#define PIN_UART1_TXD {PIO_PD26D_UART1_UTXD1, PIOD, ID_PIOD, SOC_GPIO_FUNC_D}
#endif

#define PINS_UART1 {PIN_UART1_RXD, PIN_UART1_TXD}

#define PIN_UART2_RXD {PIO_PD25C_UART2_URXD2, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#define PIN_UART2_TXD {PIO_PD26C_UART2_UTXD2, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}

#define PINS_UART2 {PIN_UART2_RXD, PIN_UART2_TXD}

#define PIN_UART3_RXD {PIO_PD28A_UART3_URXD3, PIOD, ID_PIOD, SOC_GPIO_FUNC_A}
#ifdef CONFIG_UART_SAM_PORT_3_PIN_TX_PD30
#define PIN_UART3_TXD {PIO_PD30A_UART3_UTXD3, PIOD, ID_PIOD, SOC_GPIO_FUNC_A}
#elif CONFIG_UART_SAM_PORT_3_PIN_TX_PD31
#define PIN_UART3_TXD {PIO_PD31B_UART3_UTXD3, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#endif

#define PINS_UART3 {PIN_UART3_RXD, PIN_UART3_TXD}

#define PIN_UART4_RXD {PIO_PD18C_UART4_URXD4, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#ifdef CONFIG_UART_SAM_PORT_4_PIN_TX_PD3
#define PIN_UART4_TXD {PIO_PD3C_UART4_UTXD4,  PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#elif CONFIG_UART_SAM_PORT_4_PIN_TX_PD19
#define PIN_UART4_TXD {PIO_PD19C_UART4_UTXD4, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#endif

#define PINS_UART4 {PIN_UART4_RXD, PIN_UART4_TXD}

/* Universal Synchronous Asynchronous Receiver Transmitter (USART) */

#define PIN_USART0_RXD {PIO_PB0C_USART0_RXD0,  PIOB, ID_PIOB, SOC_GPIO_FUNC_C}
#define PIN_USART0_TXD {PIO_PB1C_USART0_TXD0,  PIOB, ID_PIOB, SOC_GPIO_FUNC_C}
#define PIN_USART0_CTS {PIO_PB2C_USART0_CTS0,  PIOB, ID_PIOB, SOC_GPIO_FUNC_C}
#define PIN_USART0_RTS {PIO_PB3C_USART0_RTS0,  PIOB, ID_PIOB, SOC_GPIO_FUNC_C}
#define PIN_USART0_SCK {PIO_PB13C_USART0_SCK0, PIOB, ID_PIOB, SOC_GPIO_FUNC_C}

#define PINS_USART0 {PIN_USART0_RXD, PIN_USART0_TXD, PIN_USART0_CTS, \
	  PIN_USART0_RTS, PIN_USART0_SCK}

#define PIN_USART1_RXD {PIO_PA21A_USART1_RXD1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_TXD {PIO_PB4D_USART1_TXD1,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}
#define PIN_USART1_CTS {PIO_PA25A_USART1_CTS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_RTS {PIO_PA24A_USART1_RTS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_SCK {PIO_PA23A_USART1_SCK1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_USART1 {PIN_USART1_RXD, PIN_USART1_TXD, PIN_USART1_CTS, \
	  PIN_USART1_RTS, PIN_USART1_SCK}

#define PIN_USART2_RXD {PIO_PD15B_USART2_RXD2, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART2_TXD {PIO_PD16B_USART2_TXD2, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART2_CTS {PIO_PD19B_USART2_CTS2, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART2_RTS {PIO_PD18B_USART2_RTS2, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART2_SCK {PIO_PD17B_USART2_SCK2, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}

#define PINS_USART2 {PIN_USART2_RXD, PIN_USART2_TXD, PIN_USART2_CTS, \
	  PIN_USART2_RTS, PIN_USART2_SCK}

/* Synchronous Serial Controller (SSC) */

#define PIN_SSC0_RD {PIO_PA10C_SSC_RD, PIOA, ID_PIOA, SOC_GPIO_FUNC_C}
#define PIN_SSC0_RF {PIO_PD24B_SSC_RF, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_SSC0_RK {PIO_PA22A_SSC_RK, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#ifdef CONFIG_I2S_SAM_SSC_0_PIN_TD_PB5
#define PIN_SSC0_TD {PIO_PB5D_SSC_TD,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}
#elif CONFIG_I2S_SAM_SSC_0_PIN_TD_PD10
#define PIN_SSC0_TD {PIO_PD10C_SSC_TD, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#elif CONFIG_I2S_SAM_SSC_0_PIN_TD_PD26
#define PIN_SSC0_TD {PIO_PD26B_SSC_TD, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#endif
#define PIN_SSC0_TF {PIO_PB0D_SSC_TF,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}
#define PIN_SSC0_TK {PIO_PB1D_SSC_TK,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}

#define PINS_SSC0 {PIN_SSC0_RD, PIN_SSC0_RF, PIN_SSC0_RK, PIN_SSC0_TD, \
	  PIN_SSC0_TF, PIN_SSC0_TK}

/* Two-wire Interface (TWIHS) */

#define PIN_TWIHS0_TWCK {PIO_PA4A_TWIHS0_TWCK0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_TWIHS0_TWD  {PIO_PA3A_TWIHS0_TWD0,  PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_TWIHS0 {PIN_TWIHS0_TWCK, PIN_TWIHS0_TWD}

#define PIN_TWIHS1_TWCK {PIO_PB5A_TWIHS1_TWCK1, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_TWIHS1_TWD  {PIO_PB4A_TWIHS1_TWD1,  PIOB, ID_PIOB, SOC_GPIO_FUNC_A}

#define PINS_TWIHS1 {PIN_TWIHS1_TWCK, PIN_TWIHS1_TWD}

#define PIN_TWIHS2_TWCK {PIO_PD28C_TWIHS2_TWCK2, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#define PIN_TWIHS2_TWD  {PIO_PD27C_TWIHS2_TWD2,  PIOD, ID_PIOD, SOC_GPIO_FUNC_C}

#define PINS_TWIHS2 {PIN_TWIHS2_TWCK, PIN_TWIHS2_TWD}

#endif /* _ATMEL_SAM_SOC_PINMAP_H_ */
