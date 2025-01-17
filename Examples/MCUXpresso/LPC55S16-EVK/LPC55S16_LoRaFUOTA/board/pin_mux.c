/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v11.0
processor: LPC55S16
package_id: LPC55S16JBD100
mcu_data: ksdk2_0
processor_version: 11.0.1
board: LPCXpresso55S16
pin_labels:
- {pin_num: '54', pin_signal: PIO0_0/FC3_SCK/CTIMER0_MAT0/SCT_GPI0/SECURE_GPIO0_0/ACMP0_A, label: NOT_CONNECTED, identifier: RADIO_DEVICE}
- {pin_num: '71', pin_signal: PIO0_13/FC1_CTS_SDA_SSEL0/UTICK_CAP0/CT_INP0/SCT_GPI0/FC1_RXD_SDA_MOSI_DATA/PLU_IN0/SECURE_GPIO0_13, label: RADIO_SPI_MOSI, identifier: FC1_SDA}
- {pin_num: '72', pin_signal: PIO0_14/FC1_RTS_SCL_SSEL1/UTICK_CAP1/CT_INP1/SCT_GPI1/FC1_TXD_SCL_MISO_WS/PLU_IN1/SECURE_GPIO0_14, label: RADIO_SPI_MISO, identifier: FC1_SCL}
- {pin_num: '14', pin_signal: PIO0_16/FC4_TXD_SCL_MISO_WS/CLKOUT/CT_INP4/SECURE_GPIO0_16/ADC0_8, label: 'J7[1]/J13[1]/JP4[1]/ARD_MIK_ADC0_8_N', identifier: RADIO_RESET}
- {pin_num: '60', pin_signal: PIO0_26/FC2_RXD_SDA_MOSI_DATA/CLKOUT/CT_INP14/SCT0_OUT5/USB0_IDVALUE/FC0_SCK/HS_SPI_MOSI/SECURE_GPIO0_26, label: NOT_CONNECTED, identifier: SPI_MOSI}
- {pin_num: '92', pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29, label: MCU_RX, identifier: DEBUG_UART_RX}
- {pin_num: '94', pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30, label: MCU_TX, identifier: DEBUG_UART_TX}
- {pin_num: '61', pin_signal: PIO1_2/CAN0_TD/CTIMER0_MAT3/SCT_GPI6/HS_SPI_SCK/USB1_PORTPWRN/PLU_OUT5, label: NOT_CONNECTED, identifier: SPI_CLK}
- {pin_num: '62', pin_signal: PIO1_3/CAN0_RD/SCT0_OUT4/HS_SPI_MISO/USB0_PORTPWRN/PLU_OUT6, label: NOT_CONNECTED, identifier: SPI_MISO}
- {pin_num: '1', pin_signal: PIO1_4/FC0_SCK/CTIMER2_MAT1/SCT0_OUT0/FREQME_GPIO_CLK_A, label: 'Q5[G1]/J12[6]/ARD_LEDR_PWM', identifier: LED_RED;RADIO_DIO1}
- {pin_num: '5', pin_signal: PIO1_6/FC0_TXD_SCL_MISO_WS/CTIMER2_MAT1/SCT_GPI3, label: 'Q4[G1]/J12[10]/ARD_LEDB_PWM', identifier: LED_BLUE;RADIO_BUSY}
- {pin_num: '24', pin_signal: PIO1_8/FC0_CTS_SDA_SSEL0/SCT0_OUT1/FC4_SSEL2/ADC0_4, label: 'J9[20]/ARD_P1_8', identifier: RADIO_ANT_SW}
- {pin_num: '10', pin_signal: PIO1_9/FC1_SCK/CT_INP4/SCT0_OUT2/FC4_CTS_SDA_SSEL0/ADC0_12, label: 'SW3/J12[2]/ARD_BTN_USR_P1_9', identifier: SW3;USR;RADIO_NSS}
- {pin_num: '87', pin_signal: PIO1_16/FC6_TXD_SCL_MISO_WS/CTIMER1_MAT3, label: 'J12[18]/J13[4]/EXP_P1_16', identifier: RADIO_BUSY}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_iocon.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true', fullInit: 'true'}
- pin_list:
  - {pin_num: '92', peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '94', peripheral: FLEXCOMM0, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '10', peripheral: GPIO, signal: 'PIO1, 9', pin_signal: PIO1_9/FC1_SCK/CT_INP4/SCT0_OUT2/FC4_CTS_SDA_SSEL0/ADC0_12, identifier: RADIO_NSS, direction: OUTPUT,
    gpio_init_state: 'false', mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, asw: disabled}
  - {pin_num: '24', peripheral: GPIO, signal: 'PIO1, 8', pin_signal: PIO1_8/FC0_CTS_SDA_SSEL0/SCT0_OUT1/FC4_SSEL2/ADC0_4, direction: OUTPUT, gpio_init_state: 'false',
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, asw: disabled}
  - {pin_num: '14', peripheral: GPIO, signal: 'PIO0, 16', pin_signal: PIO0_16/FC4_TXD_SCL_MISO_WS/CLKOUT/CT_INP4/SECURE_GPIO0_16/ADC0_8, direction: OUTPUT, gpio_init_state: 'false',
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, asw: disabled}
  - {pin_num: '5', peripheral: GPIO, signal: 'PIO1, 6', pin_signal: PIO1_6/FC0_TXD_SCL_MISO_WS/CTIMER2_MAT1/SCT_GPI3, identifier: RADIO_BUSY, direction: INPUT, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '61', peripheral: FLEXCOMM8, signal: HS_SPI_SCK, pin_signal: PIO1_2/CAN0_TD/CTIMER0_MAT3/SCT_GPI6/HS_SPI_SCK/USB1_PORTPWRN/PLU_OUT5, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '60', peripheral: FLEXCOMM8, signal: HS_SPI_MOSI, pin_signal: PIO0_26/FC2_RXD_SDA_MOSI_DATA/CLKOUT/CT_INP14/SCT0_OUT5/USB0_IDVALUE/FC0_SCK/HS_SPI_MOSI/SECURE_GPIO0_26,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '62', peripheral: FLEXCOMM8, signal: HS_SPI_MISO, pin_signal: PIO1_3/CAN0_RD/SCT0_OUT4/HS_SPI_MISO/USB0_PORTPWRN/PLU_OUT6, mode: inactive, slew_rate: standard,
    invert: disabled, open_drain: disabled}
  - {pin_num: '1', peripheral: GPIO, signal: 'PIO1, 4', pin_signal: PIO1_4/FC0_SCK/CTIMER2_MAT1/SCT0_OUT0/FREQME_GPIO_CLK_A, identifier: RADIO_DIO1, direction: INPUT,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled}
  - {pin_num: '54', peripheral: GPIO, signal: 'PIO0, 0', pin_signal: PIO0_0/FC3_SCK/CTIMER0_MAT0/SCT_GPI0/SECURE_GPIO0_0/ACMP0_A, direction: INPUT, mode: inactive,
    slew_rate: standard, invert: disabled, open_drain: disabled, asw: disabled}
  - {pin_num: '71', peripheral: FLEXCOMM1, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_13/FC1_CTS_SDA_SSEL0/UTICK_CAP0/CT_INP0/SCT_GPI0/FC1_RXD_SDA_MOSI_DATA/PLU_IN0/SECURE_GPIO0_13,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, ssel: signal3v3, filter_off: disabled, ecs: disabled, egp: gpio, i2cfilter: nonhighspeedmode}
  - {pin_num: '72', peripheral: FLEXCOMM1, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_14/FC1_RTS_SCL_SSEL1/UTICK_CAP1/CT_INP1/SCT_GPI1/FC1_TXD_SCL_MISO_WS/PLU_IN1/SECURE_GPIO0_14,
    mode: inactive, slew_rate: standard, invert: disabled, open_drain: disabled, ssel: signal3v3, filter_off: disabled, ecs: disabled, egp: gpio, i2cfilter: nonhighspeedmode}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M33 */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller.: Enable Clock. */
    CLOCK_EnableClock(kCLOCK_Iocon);

    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);

    gpio_pin_config_t RADIO_DEVICE_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_0 (pin 54)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_DEVICE_GPIO, BOARD_INITPINS_RADIO_DEVICE_PORT, BOARD_INITPINS_RADIO_DEVICE_PIN, &RADIO_DEVICE_config);

    gpio_pin_config_t RADIO_RESET_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_16 (pin 14)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_RESET_GPIO, BOARD_INITPINS_RADIO_RESET_PORT, BOARD_INITPINS_RADIO_RESET_PIN, &RADIO_RESET_config);

    gpio_pin_config_t RADIO_DIO1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_4 (pin 1)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_DIO1_GPIO, BOARD_INITPINS_RADIO_DIO1_PORT, BOARD_INITPINS_RADIO_DIO1_PIN, &RADIO_DIO1_config);

    gpio_pin_config_t RADIO_BUSY_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_6 (pin 5)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_BUSY_GPIO, BOARD_INITPINS_RADIO_BUSY_PORT, BOARD_INITPINS_RADIO_BUSY_PIN, &RADIO_BUSY_config);

    gpio_pin_config_t RADIO_ANT_SW_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_8 (pin 24)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_ANT_SW_GPIO, BOARD_INITPINS_RADIO_ANT_SW_PORT, BOARD_INITPINS_RADIO_ANT_SW_PIN, &RADIO_ANT_SW_config);

    gpio_pin_config_t RADIO_NSS_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_9 (pin 10)  */
    GPIO_PinInit(BOARD_INITPINS_RADIO_NSS_GPIO, BOARD_INITPINS_RADIO_NSS_PORT, BOARD_INITPINS_RADIO_NSS_PIN, &RADIO_NSS_config);

    const uint32_t RADIO_DEVICE = (/* Pin is configured as PIO0_0 */
                                   IOCON_PIO_FUNC0 |
                                   /* No addition pin function */
                                   IOCON_PIO_MODE_INACT |
                                   /* Standard mode, output slew rate control is enabled */
                                   IOCON_PIO_SLEW_STANDARD |
                                   /* Input function is not inverted */
                                   IOCON_PIO_INV_DI |
                                   /* Enables digital function */
                                   IOCON_PIO_DIGITAL_EN |
                                   /* Open drain is disabled */
                                   IOCON_PIO_OPENDRAIN_DI |
                                   /* Analog switch is open (disabled) */
                                   IOCON_PIO_ASW_DI);
    /* PORT0 PIN0 (coords: 54) is configured as PIO0_0 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_DEVICE_PORT, BOARD_INITPINS_RADIO_DEVICE_PIN, RADIO_DEVICE);

    const uint32_t port0_pin13_config = (/* Pin is configured as FC1_RXD_SDA_MOSI_DATA */
                                         IOCON_PIO_FUNC5 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* 3V3 signaling in I2C mode */
                                         IOCON_PIO_SSEL_3V3 |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* GPIO mode */
                                         IOCON_PIO_EGP_GPIO |
                                         /* I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
                                         IOCON_PIO_I2CFILTER_NONHIGHSPEED);
    /* PORT0 PIN13 (coords: 71) is configured as FC1_RXD_SDA_MOSI_DATA */
    IOCON_PinMuxSet(IOCON, 0U, 13U, port0_pin13_config);

    const uint32_t port0_pin14_config = (/* Pin is configured as FC1_TXD_SCL_MISO_WS */
                                         IOCON_PIO_FUNC6 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI |
                                         /* 3V3 signaling in I2C mode */
                                         IOCON_PIO_SSEL_3V3 |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* IO is an open drain cell */
                                         IOCON_PIO_ECS_DI |
                                         /* GPIO mode */
                                         IOCON_PIO_EGP_GPIO |
                                         /* I2C 50 ns glitch filter enabled. Typically used for Standard mode, Fast-mode and Fast-mode Plus I2C. */
                                         IOCON_PIO_I2CFILTER_NONHIGHSPEED);
    /* PORT0 PIN14 (coords: 72) is configured as FC1_TXD_SCL_MISO_WS */
    IOCON_PinMuxSet(IOCON, 0U, 14U, port0_pin14_config);

    const uint32_t RADIO_RESET = (/* Pin is configured as PIO0_16 */
                                  IOCON_PIO_FUNC0 |
                                  /* No addition pin function */
                                  IOCON_PIO_MODE_INACT |
                                  /* Standard mode, output slew rate control is enabled */
                                  IOCON_PIO_SLEW_STANDARD |
                                  /* Input function is not inverted */
                                  IOCON_PIO_INV_DI |
                                  /* Enables digital function */
                                  IOCON_PIO_DIGITAL_EN |
                                  /* Open drain is disabled */
                                  IOCON_PIO_OPENDRAIN_DI |
                                  /* Analog switch is open (disabled) */
                                  IOCON_PIO_ASW_DI);
    /* PORT0 PIN16 (coords: 14) is configured as PIO0_16 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_RESET_PORT, BOARD_INITPINS_RADIO_RESET_PIN, RADIO_RESET);

    const uint32_t port0_pin26_config = (/* Pin is configured as HS_SPI_MOSI */
                                         IOCON_PIO_FUNC9 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN26 (coords: 60) is configured as HS_SPI_MOSI */
    IOCON_PinMuxSet(IOCON, 0U, 26U, port0_pin26_config);

    const uint32_t port0_pin29_config = (/* Pin is configured as FC0_RXD_SDA_MOSI_DATA */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN29 (coords: 92) is configured as FC0_RXD_SDA_MOSI_DATA */
    IOCON_PinMuxSet(IOCON, 0U, 29U, port0_pin29_config);

    const uint32_t port0_pin30_config = (/* Pin is configured as FC0_TXD_SCL_MISO_WS */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN30 (coords: 94) is configured as FC0_TXD_SCL_MISO_WS */
    IOCON_PinMuxSet(IOCON, 0U, 30U, port0_pin30_config);

    const uint32_t port1_pin2_config = (/* Pin is configured as HS_SPI_SCK */
                                        IOCON_PIO_FUNC6 |
                                        /* No addition pin function */
                                        IOCON_PIO_MODE_INACT |
                                        /* Standard mode, output slew rate control is enabled */
                                        IOCON_PIO_SLEW_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI);
    /* PORT1 PIN2 (coords: 61) is configured as HS_SPI_SCK */
    IOCON_PinMuxSet(IOCON, 1U, 2U, port1_pin2_config);

    const uint32_t port1_pin3_config = (/* Pin is configured as HS_SPI_MISO */
                                        IOCON_PIO_FUNC6 |
                                        /* No addition pin function */
                                        IOCON_PIO_MODE_INACT |
                                        /* Standard mode, output slew rate control is enabled */
                                        IOCON_PIO_SLEW_STANDARD |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI);
    /* PORT1 PIN3 (coords: 62) is configured as HS_SPI_MISO */
    IOCON_PinMuxSet(IOCON, 1U, 3U, port1_pin3_config);

    const uint32_t RADIO_DIO1 = (/* Pin is configured as PIO1_4 */
                                 IOCON_PIO_FUNC0 |
                                 /* No addition pin function */
                                 IOCON_PIO_MODE_INACT |
                                 /* Standard mode, output slew rate control is enabled */
                                 IOCON_PIO_SLEW_STANDARD |
                                 /* Input function is not inverted */
                                 IOCON_PIO_INV_DI |
                                 /* Enables digital function */
                                 IOCON_PIO_DIGITAL_EN |
                                 /* Open drain is disabled */
                                 IOCON_PIO_OPENDRAIN_DI);
    /* PORT1 PIN4 (coords: 1) is configured as PIO1_4 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_DIO1_PORT, BOARD_INITPINS_RADIO_DIO1_PIN, RADIO_DIO1);

    const uint32_t RADIO_BUSY = (/* Pin is configured as PIO1_6 */
                                 IOCON_PIO_FUNC0 |
                                 /* No addition pin function */
                                 IOCON_PIO_MODE_INACT |
                                 /* Standard mode, output slew rate control is enabled */
                                 IOCON_PIO_SLEW_STANDARD |
                                 /* Input function is not inverted */
                                 IOCON_PIO_INV_DI |
                                 /* Enables digital function */
                                 IOCON_PIO_DIGITAL_EN |
                                 /* Open drain is disabled */
                                 IOCON_PIO_OPENDRAIN_DI);
    /* PORT1 PIN6 (coords: 5) is configured as PIO1_6 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_BUSY_PORT, BOARD_INITPINS_RADIO_BUSY_PIN, RADIO_BUSY);

    const uint32_t RADIO_ANT_SW = (/* Pin is configured as PIO1_8 */
                                   IOCON_PIO_FUNC0 |
                                   /* No addition pin function */
                                   IOCON_PIO_MODE_INACT |
                                   /* Standard mode, output slew rate control is enabled */
                                   IOCON_PIO_SLEW_STANDARD |
                                   /* Input function is not inverted */
                                   IOCON_PIO_INV_DI |
                                   /* Enables digital function */
                                   IOCON_PIO_DIGITAL_EN |
                                   /* Open drain is disabled */
                                   IOCON_PIO_OPENDRAIN_DI |
                                   /* Analog switch is open (disabled) */
                                   IOCON_PIO_ASW_DI);
    /* PORT1 PIN8 (coords: 24) is configured as PIO1_8 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_ANT_SW_PORT, BOARD_INITPINS_RADIO_ANT_SW_PIN, RADIO_ANT_SW);

    const uint32_t RADIO_NSS = (/* Pin is configured as PIO1_9 */
                                IOCON_PIO_FUNC0 |
                                /* No addition pin function */
                                IOCON_PIO_MODE_INACT |
                                /* Standard mode, output slew rate control is enabled */
                                IOCON_PIO_SLEW_STANDARD |
                                /* Input function is not inverted */
                                IOCON_PIO_INV_DI |
                                /* Enables digital function */
                                IOCON_PIO_DIGITAL_EN |
                                /* Open drain is disabled */
                                IOCON_PIO_OPENDRAIN_DI |
                                /* Analog switch is open (disabled) */
                                IOCON_PIO_ASW_DI);
    /* PORT1 PIN9 (coords: 10) is configured as PIO1_9 */
    IOCON_PinMuxSet(IOCON, BOARD_INITPINS_RADIO_NSS_PORT, BOARD_INITPINS_RADIO_NSS_PIN, RADIO_NSS);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
