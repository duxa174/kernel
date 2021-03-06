/*
 * Copyright (C) 2017 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2017-12-14 16:30:27
 *
 */


#ifndef ANLG_PHY_G8_H
#define ANLG_PHY_G8_H



#define REG_ANLG_PHY_G8_ANALOG_THM2_1_THM2_CTL                (0x0000)
#define REG_ANLG_PHY_G8_ANALOG_THM2_1_THM2_RESERVED_CTL       (0x0004)
#define REG_ANLG_PHY_G8_ANALOG_THM2_1_WRAP_GLUE_CTRL          (0x0008)
#define REG_ANLG_PHY_G8_ANALOG_EFUSE1_0_EFUSE_PIN_PW_CTL      (0x000C)
#define REG_ANLG_PHY_G8_ANALOG_EFUSE1_1_EFUSE_PIN_PW_CTL      (0x0010)

/* REG_ANLG_PHY_G8_ANALOG_THM2_1_THM2_CTL */

#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_THM_BG_RBIAS_MODE                        BIT(13)
#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_THM_TEST_SEL(x)                          (((x) & 0x3) << 11)
#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_THM_BP_MODE                              BIT(10)
#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_THM_BP_DATA(x)                           (((x) & 0x3FF))

/* REG_ANLG_PHY_G8_ANALOG_THM2_1_THM2_RESERVED_CTL */

#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_THM_RESERVED(x)                          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G8_ANALOG_THM2_1_WRAP_GLUE_CTRL */

#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_DGB_SEL_THM_RESERVED_BIT0_CONVERT_CYCLE  BIT(1)
#define BIT_ANLG_PHY_G8_ANALOG_THM2_1_DGB_SEL_THM_RESERVED_BIT3_SENSOR_SEL     BIT(0)

/* REG_ANLG_PHY_G8_ANALOG_EFUSE1_0_EFUSE_PIN_PW_CTL */

#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_0_EFS1_TRCS                              BIT(2)
#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_0_EFS1_AT1                               BIT(1)
#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_0_EFS1_AT0                               BIT(0)

/* REG_ANLG_PHY_G8_ANALOG_EFUSE1_1_EFUSE_PIN_PW_CTL */

#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_1_EFS1_TRCS                              BIT(2)
#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_1_EFS1_AT1                               BIT(1)
#define BIT_ANLG_PHY_G8_ANALOG_EFUSE1_1_EFS1_AT0                               BIT(0)


#endif /* ANLG_PHY_G8_H */


