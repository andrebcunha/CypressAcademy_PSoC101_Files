#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Buzzer */
#define Buzzer__0__DM__MASK 0x38000u
#define Buzzer__0__DM__SHIFT 15
#define Buzzer__0__DR CYREG_PRT3_DR
#define Buzzer__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Buzzer__0__HSIOM_MASK 0x00F00000u
#define Buzzer__0__HSIOM_SHIFT 20u
#define Buzzer__0__INTCFG CYREG_PRT3_INTCFG
#define Buzzer__0__INTSTAT CYREG_PRT3_INTSTAT
#define Buzzer__0__MASK 0x20u
#define Buzzer__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Buzzer__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Buzzer__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Buzzer__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Buzzer__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Buzzer__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Buzzer__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Buzzer__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Buzzer__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Buzzer__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Buzzer__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Buzzer__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Buzzer__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Buzzer__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Buzzer__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Buzzer__0__PC CYREG_PRT3_PC
#define Buzzer__0__PC2 CYREG_PRT3_PC2
#define Buzzer__0__PORT 3u
#define Buzzer__0__PS CYREG_PRT3_PS
#define Buzzer__0__SHIFT 5
#define Buzzer__DR CYREG_PRT3_DR
#define Buzzer__INTCFG CYREG_PRT3_INTCFG
#define Buzzer__INTSTAT CYREG_PRT3_INTSTAT
#define Buzzer__MASK 0x20u
#define Buzzer__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Buzzer__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Buzzer__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Buzzer__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Buzzer__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Buzzer__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Buzzer__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Buzzer__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Buzzer__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Buzzer__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Buzzer__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Buzzer__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Buzzer__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Buzzer__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Buzzer__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Buzzer__PC CYREG_PRT3_PC
#define Buzzer__PC2 CYREG_PRT3_PC2
#define Buzzer__PORT 3u
#define Buzzer__PS CYREG_PRT3_PS
#define Buzzer__SHIFT 5

/* ClockC */
#define ClockC__DIVIDER_MASK 0x0000FFFFu
#define ClockC__ENABLE CYREG_CLK_DIVIDER_B01
#define ClockC__ENABLE_MASK 0x80000000u
#define ClockC__MASK 0x80000000u
#define ClockC__REGISTER CYREG_CLK_DIVIDER_B01

/* CapSense_Cmod */
#define CapSense_Cmod__0__DM__MASK 0x1C0u
#define CapSense_Cmod__0__DM__SHIFT 6
#define CapSense_Cmod__0__DR CYREG_PRT4_DR
#define CapSense_Cmod__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define CapSense_Cmod__0__HSIOM_MASK 0x00000F00u
#define CapSense_Cmod__0__HSIOM_SHIFT 8u
#define CapSense_Cmod__0__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__0__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__0__MASK 0x04u
#define CapSense_Cmod__0__PC CYREG_PRT4_PC
#define CapSense_Cmod__0__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__0__PORT 4u
#define CapSense_Cmod__0__PS CYREG_PRT4_PS
#define CapSense_Cmod__0__SHIFT 2
#define CapSense_Cmod__Cmod__DM__MASK 0x1C0u
#define CapSense_Cmod__Cmod__DM__SHIFT 6
#define CapSense_Cmod__Cmod__DR CYREG_PRT4_DR
#define CapSense_Cmod__Cmod__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__Cmod__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__Cmod__MASK 0x04u
#define CapSense_Cmod__Cmod__PC CYREG_PRT4_PC
#define CapSense_Cmod__Cmod__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__Cmod__PORT 4u
#define CapSense_Cmod__Cmod__PS CYREG_PRT4_PS
#define CapSense_Cmod__Cmod__SHIFT 2
#define CapSense_Cmod__DR CYREG_PRT4_DR
#define CapSense_Cmod__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__MASK 0x04u
#define CapSense_Cmod__PC CYREG_PRT4_PC
#define CapSense_Cmod__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__PORT 4u
#define CapSense_Cmod__PS CYREG_PRT4_PS
#define CapSense_Cmod__SHIFT 2

/* CapSense_CSD_FFB */
#define CapSense_CSD_FFB__CSD_CONFIG CYREG_CSD_CONFIG
#define CapSense_CSD_FFB__CSD_COUNTER CYREG_CSD_COUNTER
#define CapSense_CSD_FFB__CSD_ID CYREG_CSD_ID
#define CapSense_CSD_FFB__CSD_INTR CYREG_CSD_INTR
#define CapSense_CSD_FFB__CSD_INTR_SET CYREG_CSD_INTR_SET
#define CapSense_CSD_FFB__CSD_NUMBER 0u
#define CapSense_CSD_FFB__CSD_STATUS CYREG_CSD_STATUS

/* CapSense_IDAC1_cy_psoc4_idac */
#define CapSense_IDAC1_cy_psoc4_idac__CONTROL CYREG_CSD_CONFIG
#define CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__IDAC_NUMBER 1u
#define CapSense_IDAC1_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define CapSense_IDAC1_cy_psoc4_idac__POLARITY_SHIFT 16

/* CapSense_IDAC2_cy_psoc4_idac */
#define CapSense_IDAC2_cy_psoc4_idac__CONTROL CYREG_CSD_CONFIG
#define CapSense_IDAC2_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define CapSense_IDAC2_cy_psoc4_idac__CSD_IDAC_SHIFT 16
#define CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM1_SHIFT 4
#define CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM2_SHIFT 4
#define CapSense_IDAC2_cy_psoc4_idac__IDAC_NUMBER 2u
#define CapSense_IDAC2_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define CapSense_IDAC2_cy_psoc4_idac__POLARITY_SHIFT 17

/* CapSense_ISR */
#define CapSense_ISR__INTC_CLR_EN_REG CYREG_CM0_ICER
#define CapSense_ISR__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define CapSense_ISR__INTC_MASK 0x8000u
#define CapSense_ISR__INTC_NUMBER 15u
#define CapSense_ISR__INTC_PRIOR_MASK 0xC0000000u
#define CapSense_ISR__INTC_PRIOR_NUM 3u
#define CapSense_ISR__INTC_PRIOR_REG CYREG_CM0_IPR3
#define CapSense_ISR__INTC_SET_EN_REG CYREG_CM0_ISER
#define CapSense_ISR__INTC_SET_PD_REG CYREG_CM0_ISPR

/* CapSense_SampleClk */
#define CapSense_SampleClk__DIVIDER_MASK 0x0000FFFFu
#define CapSense_SampleClk__ENABLE CYREG_CLK_DIVIDER_A00
#define CapSense_SampleClk__ENABLE_MASK 0x80000000u
#define CapSense_SampleClk__MASK 0x80000000u
#define CapSense_SampleClk__REGISTER CYREG_CLK_DIVIDER_A00

/* CapSense_SenseClk */
#define CapSense_SenseClk__DIVIDER_MASK 0x0000FFFFu
#define CapSense_SenseClk__ENABLE CYREG_CLK_DIVIDER_B00
#define CapSense_SenseClk__ENABLE_MASK 0x80000000u
#define CapSense_SenseClk__MASK 0x80000000u
#define CapSense_SenseClk__REGISTER CYREG_CLK_DIVIDER_B00

/* CapSense_Sns */
#define CapSense_Sns__0__DM__MASK 0x7000u
#define CapSense_Sns__0__DM__SHIFT 12
#define CapSense_Sns__0__DR CYREG_PRT3_DR
#define CapSense_Sns__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define CapSense_Sns__0__HSIOM_MASK 0x000F0000u
#define CapSense_Sns__0__HSIOM_SHIFT 16u
#define CapSense_Sns__0__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__0__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__0__MASK 0x10u
#define CapSense_Sns__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__0__PC CYREG_PRT3_PC
#define CapSense_Sns__0__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__0__PORT 3u
#define CapSense_Sns__0__PS CYREG_PRT3_PS
#define CapSense_Sns__0__SHIFT 4
#define CapSense_Sns__Button0__BTN__DM__MASK 0x7000u
#define CapSense_Sns__Button0__BTN__DM__SHIFT 12
#define CapSense_Sns__Button0__BTN__DR CYREG_PRT3_DR
#define CapSense_Sns__Button0__BTN__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__Button0__BTN__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__Button0__BTN__MASK 0x10u
#define CapSense_Sns__Button0__BTN__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__Button0__BTN__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__Button0__BTN__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__Button0__BTN__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__Button0__BTN__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__Button0__BTN__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__Button0__BTN__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__Button0__BTN__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__Button0__BTN__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__Button0__BTN__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__Button0__BTN__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__Button0__BTN__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__Button0__BTN__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__Button0__BTN__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__Button0__BTN__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__Button0__BTN__PC CYREG_PRT3_PC
#define CapSense_Sns__Button0__BTN__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__Button0__BTN__PORT 3u
#define CapSense_Sns__Button0__BTN__PS CYREG_PRT3_PS
#define CapSense_Sns__Button0__BTN__SHIFT 4
#define CapSense_Sns__DR CYREG_PRT3_DR
#define CapSense_Sns__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__MASK 0x10u
#define CapSense_Sns__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__PC CYREG_PRT3_PC
#define CapSense_Sns__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__PORT 3u
#define CapSense_Sns__PS CYREG_PRT3_PS
#define CapSense_Sns__SHIFT 4

/* BuzzEnable */
#define BuzzEnable_Sync_ctrl_reg__0__MASK 0x01u
#define BuzzEnable_Sync_ctrl_reg__0__POS 0
#define BuzzEnable_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define BuzzEnable_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_03
#define BuzzEnable_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define BuzzEnable_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_03
#define BuzzEnable_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define BuzzEnable_Sync_ctrl_reg__MASK 0x01u
#define BuzzEnable_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define BuzzEnable_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define BuzzEnable_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_03

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab06_3"
#define CY_VERSION "PSoC Creator  3.3"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 0u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
