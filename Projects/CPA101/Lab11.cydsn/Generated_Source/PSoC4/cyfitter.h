#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* PWM_PWMUDB */
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_CONTROL_REG CYREG_UDB_W32_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_COUNT_REG CYREG_UDB_W32_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__32BIT_PERIOD_REG CYREG_UDB_W32_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_UDB_W8_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_UDB_W8_CTL_00
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_UDB_W8_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_UDB_W16_ST_00
#define PWM_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_PWMUDB_genblk8_stsreg__32BIT_MASK_REG CYREG_UDB_W32_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__32BIT_STATUS_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__32BIT_STATUS_REG CYREG_UDB_W32_ST_00
#define PWM_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define PWM_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_00
#define PWM_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_A0_REG CYREG_UDB_W32_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_A1_REG CYREG_UDB_W32_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_D0_REG CYREG_UDB_W32_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_D1_REG CYREG_UDB_W32_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_DP_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_F0_REG CYREG_UDB_W32_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__32BIT_F1_REG CYREG_UDB_W32_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_00
#define PWM_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_00
#define PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00

/* LED1 */
#define LED1__0__DM__MASK 0x07u
#define LED1__0__DM__SHIFT 0u
#define LED1__0__DR CYREG_PRT0_DR
#define LED1__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define LED1__0__HSIOM_MASK 0x0000000Fu
#define LED1__0__HSIOM_SHIFT 0u
#define LED1__0__INTCFG CYREG_PRT0_INTCFG
#define LED1__0__INTSTAT CYREG_PRT0_INTSTAT
#define LED1__0__MASK 0x01u
#define LED1__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define LED1__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define LED1__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define LED1__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define LED1__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define LED1__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define LED1__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define LED1__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define LED1__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define LED1__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define LED1__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define LED1__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define LED1__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define LED1__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define LED1__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define LED1__0__PC CYREG_PRT0_PC
#define LED1__0__PC2 CYREG_PRT0_PC2
#define LED1__0__PORT 0u
#define LED1__0__PS CYREG_PRT0_PS
#define LED1__0__SHIFT 0u
#define LED1__DR CYREG_PRT0_DR
#define LED1__INTCFG CYREG_PRT0_INTCFG
#define LED1__INTSTAT CYREG_PRT0_INTSTAT
#define LED1__MASK 0x01u
#define LED1__PA__CFG0 CYREG_UDB_PA0_CFG0
#define LED1__PA__CFG1 CYREG_UDB_PA0_CFG1
#define LED1__PA__CFG10 CYREG_UDB_PA0_CFG10
#define LED1__PA__CFG11 CYREG_UDB_PA0_CFG11
#define LED1__PA__CFG12 CYREG_UDB_PA0_CFG12
#define LED1__PA__CFG13 CYREG_UDB_PA0_CFG13
#define LED1__PA__CFG14 CYREG_UDB_PA0_CFG14
#define LED1__PA__CFG2 CYREG_UDB_PA0_CFG2
#define LED1__PA__CFG3 CYREG_UDB_PA0_CFG3
#define LED1__PA__CFG4 CYREG_UDB_PA0_CFG4
#define LED1__PA__CFG5 CYREG_UDB_PA0_CFG5
#define LED1__PA__CFG6 CYREG_UDB_PA0_CFG6
#define LED1__PA__CFG7 CYREG_UDB_PA0_CFG7
#define LED1__PA__CFG8 CYREG_UDB_PA0_CFG8
#define LED1__PA__CFG9 CYREG_UDB_PA0_CFG9
#define LED1__PC CYREG_PRT0_PC
#define LED1__PC2 CYREG_PRT0_PC2
#define LED1__PORT 0u
#define LED1__PS CYREG_PRT0_PS
#define LED1__SHIFT 0u

/* LED2 */
#define LED2__0__DM__MASK 0x07u
#define LED2__0__DM__SHIFT 0u
#define LED2__0__DR CYREG_PRT1_DR
#define LED2__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED2__0__HSIOM_MASK 0x0000000Fu
#define LED2__0__HSIOM_SHIFT 0u
#define LED2__0__INTCFG CYREG_PRT1_INTCFG
#define LED2__0__INTSTAT CYREG_PRT1_INTSTAT
#define LED2__0__MASK 0x01u
#define LED2__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED2__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED2__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED2__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED2__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED2__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED2__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED2__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED2__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED2__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED2__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED2__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED2__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED2__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED2__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED2__0__PC CYREG_PRT1_PC
#define LED2__0__PC2 CYREG_PRT1_PC2
#define LED2__0__PORT 1u
#define LED2__0__PS CYREG_PRT1_PS
#define LED2__0__SHIFT 0u
#define LED2__DR CYREG_PRT1_DR
#define LED2__INTCFG CYREG_PRT1_INTCFG
#define LED2__INTSTAT CYREG_PRT1_INTSTAT
#define LED2__MASK 0x01u
#define LED2__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED2__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED2__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED2__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED2__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED2__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED2__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED2__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED2__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED2__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED2__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED2__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED2__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED2__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED2__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED2__PC CYREG_PRT1_PC
#define LED2__PC2 CYREG_PRT1_PC2
#define LED2__PORT 1u
#define LED2__PS CYREG_PRT1_PS
#define LED2__SHIFT 0u

/* int1 */
#define int1__INTC_CLR_EN_REG CYREG_CM0_ICER
#define int1__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define int1__INTC_MASK 0x02u
#define int1__INTC_NUMBER 1u
#define int1__INTC_PRIOR_MASK 0xC000u
#define int1__INTC_PRIOR_NUM 3u
#define int1__INTC_PRIOR_REG CYREG_CM0_IPR0
#define int1__INTC_SET_EN_REG CYREG_CM0_ISER
#define int1__INTC_SET_PD_REG CYREG_CM0_ISPR

/* int2 */
#define int2__INTC_CLR_EN_REG CYREG_CM0_ICER
#define int2__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define int2__INTC_MASK 0x01u
#define int2__INTC_NUMBER 0u
#define int2__INTC_PRIOR_MASK 0xC0u
#define int2__INTC_PRIOR_NUM 3u
#define int2__INTC_PRIOR_REG CYREG_CM0_IPR0
#define int2__INTC_SET_EN_REG CYREG_CM0_ISER
#define int2__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Button */
#define Button__0__DM__MASK 0x1C0000u
#define Button__0__DM__SHIFT 18u
#define Button__0__DR CYREG_PRT0_DR
#define Button__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Button__0__HSIOM_MASK 0x0F000000u
#define Button__0__HSIOM_SHIFT 24u
#define Button__0__INTCFG CYREG_PRT0_INTCFG
#define Button__0__INTSTAT CYREG_PRT0_INTSTAT
#define Button__0__MASK 0x40u
#define Button__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Button__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Button__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Button__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Button__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Button__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Button__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Button__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Button__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Button__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Button__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Button__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Button__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Button__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Button__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Button__0__PC CYREG_PRT0_PC
#define Button__0__PC2 CYREG_PRT0_PC2
#define Button__0__PORT 0u
#define Button__0__PS CYREG_PRT0_PS
#define Button__0__SHIFT 6u
#define Button__DR CYREG_PRT0_DR
#define Button__INTCFG CYREG_PRT0_INTCFG
#define Button__INTSTAT CYREG_PRT0_INTSTAT
#define Button__MASK 0x40u
#define Button__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Button__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Button__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Button__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Button__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Button__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Button__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Button__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Button__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Button__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Button__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Button__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Button__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Button__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Button__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Button__PC CYREG_PRT0_PC
#define Button__PC2 CYREG_PRT0_PC2
#define Button__PORT 0u
#define Button__PS CYREG_PRT0_PS
#define Button__SHIFT 6u
#define Button__SNAP CYREG_PRT0_INTSTAT

/* Clock_1 */
#define Clock_1__DIVIDER_MASK 0x0000FFFFu
#define Clock_1__ENABLE CYREG_CLK_DIVIDER_B00
#define Clock_1__ENABLE_MASK 0x80000000u
#define Clock_1__MASK 0x80000000u
#define Clock_1__REGISTER CYREG_CLK_DIVIDER_B00

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab11"
#define CY_VERSION "PSoC Creator  4.0"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
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
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
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
#define CYDEV_HEAP_SIZE 0x0100
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
