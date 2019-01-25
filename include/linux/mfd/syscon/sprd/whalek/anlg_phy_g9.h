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


#ifndef ANLG_PHY_G9_H
#define ANLG_PHY_G9_H



#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL0          (0x0000)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL1          (0x0004)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL2          (0x0008)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL3          (0x000C)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL4          (0x0010)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL5          (0x0014)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL6          (0x0018)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL0          (0x001C)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL1          (0x0020)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL2          (0x0024)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL3          (0x0028)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL4          (0x002C)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL5          (0x0030)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL6          (0x0034)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_REG_SEL_CFG_0        (0x0038)
#define REG_ANLG_PHY_G9_ANALOG_MPLL0_MPLL0_CTRL_DBG_SEL0  (0x003C)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL_DBG_SEL   (0x0040)
#define REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL_DBG_SEL   (0x0044)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX0_1         (0x0048)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX0_2         (0x004C)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX1_1         (0x0050)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX1_2         (0x0054)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX2_1         (0x0058)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX2_2         (0x005C)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX3_1         (0x0060)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX3_2         (0x0064)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX4_1         (0x0068)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX4_2         (0x006C)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX5_1         (0x0070)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX5_2         (0x0074)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX6_1         (0x0078)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX6_2         (0x007C)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX7_1         (0x0080)
#define REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX7_2         (0x0084)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX0_1           (0x0088)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX0_2           (0x008C)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX1_1           (0x0090)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX1_2           (0x0094)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX2_1           (0x0098)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX2_2           (0x009C)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX3_1           (0x00A0)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX3_2           (0x00A4)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX4_1           (0x00A8)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX4_2           (0x00AC)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX5_1           (0x00B0)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX5_2           (0x00B4)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX6_1           (0x00B8)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX6_2           (0x00BC)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX7_1           (0x00C0)
#define REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX7_2           (0x00C4)

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL0 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_PD                   BIT(23)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_RST                  BIT(22)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CLKOUT_EN            BIT(21)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_DIV32_EN             BIT(20)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_LOCK_DONE            BIT(19)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_N(x)                 (((x) & 0x7FF) << 8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_ICP(x)               (((x) & 0x7) << 5)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CP_EN                BIT(4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_LDO_TRIM(x)          (((x) & 0xF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL1 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_R2_SEL(x)            (((x) & 0x3) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_R3_SEL(x)            (((x) & 0x3) << 15)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_C1_SEL(x)            (((x) & 0x3) << 13)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_C2_SEL(x)            (((x) & 0x3) << 11)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_KVCO_SEL(x)          (((x) & 0x3) << 9)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCO_TEST_EN          BIT(8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCO_TEST_INT         BIT(7)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCO_TEST_INTSEL(x)   (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_FBDIV_EN             BIT(3)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCOBUF_EN            BIT(2)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CP_OFFSET(x)         (((x) & 0x3))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL2 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_NINT(x)              (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_KINT(x)              (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL3 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_SDM_EN               BIT(26)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CCS_CTRL(x)          (((x) & 0xFF) << 18)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_MOD_EN               BIT(17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_DIV_S                BIT(16)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_RESERVED(x)          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL4 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_BIST_EN              BIT(25)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_BIST_CTRL(x)         (((x) & 0xFF) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_POSTDIV              BIT(16)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_BIST_CNT(x)          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL5 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_FREQ_DOUBLE_EN       BIT(19)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_MODE(x)         (((x) & 0x3) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_INI(x)          (((x) & 0x1F) << 12)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_TRIG            BIT(11)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_FREQ_DIFF_EN         BIT(10)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_WAITCNT(x)      (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_POLARITY        BIT(7)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_DONE            BIT(6)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_OUT(x)          (((x) & 0x1F) << 1)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_CPPD            BIT(0)

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL6 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCTRLH_SEL(x)        (((x) & 0x7) << 14)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCTRLL_SEL(x)        (((x) & 0x7) << 11)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_RG_CLOSELOOP_EN      BIT(10)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCO_BANK_SEL(x)      (((x) & 0x1F) << 5)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_VCTRL_HIGH      BIT(4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CALI_VCTRL_LOW       BIT(3)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_VCO_BANK_SEL_OFFSET  BIT(2)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_ADJ_MANUAL_PD        BIT(1)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_ISO_SW_EN            BIT(0)

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL0 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_PD                   BIT(23)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_RST                  BIT(22)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CLKOUT_EN            BIT(21)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_DIV32_EN             BIT(20)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_LOCK_DONE            BIT(19)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_N(x)                 (((x) & 0x7FF) << 8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_ICP(x)               (((x) & 0x7) << 5)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CP_EN                BIT(4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_LDO_TRIM(x)          (((x) & 0xF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL1 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_R2_SEL(x)            (((x) & 0x3) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_R3_SEL(x)            (((x) & 0x3) << 15)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_C1_SEL(x)            (((x) & 0x3) << 13)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_C2_SEL(x)            (((x) & 0x3) << 11)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_KVCO_SEL(x)          (((x) & 0x3) << 9)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCO_TEST_EN          BIT(8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCO_TEST_INT         BIT(7)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCO_TEST_INTSEL(x)   (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_FBDIV_EN             BIT(3)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCOBUF_EN            BIT(2)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CP_OFFSET(x)         (((x) & 0x3))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL2 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_NINT(x)              (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_KINT(x)              (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL3 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_SDM_EN               BIT(26)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CCS_CTRL(x)          (((x) & 0xFF) << 18)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_MOD_EN               BIT(17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_DIV_S                BIT(16)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_RESERVED(x)          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL4 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_BIST_EN              BIT(25)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_BIST_CTRL(x)         (((x) & 0xFF) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_POSTDIV              BIT(16)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_BIST_CNT(x)          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL5 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_FREQ_DOUBLE_EN       BIT(19)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_MODE(x)         (((x) & 0x3) << 17)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_INI(x)          (((x) & 0x1F) << 12)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_TRIG            BIT(11)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_FREQ_DIFF_EN         BIT(10)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_WAITCNT(x)      (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_POLARITY        BIT(7)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_DONE            BIT(6)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_OUT(x)          (((x) & 0x1F) << 1)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_CPPD            BIT(0)

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL6 */

#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCTRLH_SEL(x)        (((x) & 0x7) << 16)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCTRLL_SEL(x)        (((x) & 0x7) << 13)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_RG_CLOSELOOP_EN      BIT(12)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCO_BANK_SEL(x)      (((x) & 0x1F) << 7)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_VCTRL_HIGH      BIT(6)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CALI_VCTRL_LOW       BIT(5)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_VCO_BANK_SEL_OFFSET  BIT(4)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_ADJ_MANUAL_PD        BIT(3)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_ISO_SW_EN            BIT(2)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_TEST_CLK_EN                BIT(1)
#define BIT_ANLG_PHY_G9_ANALOG_MPLL2_TEST_SEL                   BIT(0)

/* REG_ANLG_PHY_G9_ANALOG_MPLL2_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_PD           BIT(13)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_RST          BIT(12)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_CLKOUT_EN    BIT(11)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_DIV32_EN     BIT(10)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_N            BIT(9)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_ICP          BIT(8)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL2_POSTDIV      BIT(7)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_PD           BIT(6)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_RST          BIT(5)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_CLKOUT_EN    BIT(4)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_DIV32_EN     BIT(3)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_N            BIT(2)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_ICP          BIT(1)
#define BIT_ANLG_PHY_G9_DBG_SEL_ANALOG_MPLL2_MPLL3_POSTDIV      BIT(0)

/* REG_ANLG_PHY_G9_ANALOG_MPLL0_MPLL0_CTRL_DBG_SEL0 */


/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL2_CTRL_DBG_SEL */


/* REG_ANLG_PHY_G9_ANALOG_MPLL2_MPLL3_CTRL_DBG_SEL */


/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX0_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX0(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX0                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX0_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX0(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX1_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX1(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX1                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX1_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX1(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX2_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX2(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX2                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX2_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX2(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX3_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX3(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX3                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX3_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX3(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX4_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX4(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX4                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX4_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX4(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX5_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX5(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX5                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX5_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX5(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX6_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX6(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX6                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX6_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX6(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX7_1 */

#define BIT_ANLG_PHY_G9_MPLL2_N_INDEX7(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL2_POSTDIV_INDEX7                    BIT(0)

/* REG_ANLG_PHY_G9_ANANKE_LITE_DVFS_INDEX7_2 */

#define BIT_ANLG_PHY_G9_MPLL2_ICP_INDEX7(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX0_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX0(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX0                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX0_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX0(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX1_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX1(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX1                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX1_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX1(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX2_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX2(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX2                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX2_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX2(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX3_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX3(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX3                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX3_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX3(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX4_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX4(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX4                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX4_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX4(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX5_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX5(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX5                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX5_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX5(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX6_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX6(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX6                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX6_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX6(x)                     (((x) & 0x7))

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX7_1 */

#define BIT_ANLG_PHY_G9_MPLL3_N_INDEX7(x)                       (((x) & 0x7FF) << 1)
#define BIT_ANLG_PHY_G9_MPLL3_POSTDIV_INDEX7                    BIT(0)

/* REG_ANLG_PHY_G9_APCPU_SCU_DVFS_INDEX7_2 */

#define BIT_ANLG_PHY_G9_MPLL3_ICP_INDEX7(x)                     (((x) & 0x7))


#endif /* ANLG_PHY_G9_H */

