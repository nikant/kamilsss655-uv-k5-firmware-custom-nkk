/* Original work Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Modified work Copyright 2024 kamilsss655
 * https://github.com/kamilsss655
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HARDWARE_DP32G030_SARADC_H
#define HARDWARE_DP32G030_SARADC_H

#if !defined(__ASSEMBLY__)
#include <stdint.h>
#endif

/* -------- SARADC -------- */
#define SARADC_BASE_ADDR                        0x400BA000U
#define SARADC_BASE_SIZE                        0x00000800U

#define SARADC_CFG_ADDR                         (SARADC_BASE_ADDR + 0x0000U)
#define SARADC_CFG                              (*(volatile uint32_t *)SARADC_CFG_ADDR)
#define SARADC_CFG_CH_SEL_SHIFT                 0
#define SARADC_CFG_CH_SEL_WIDTH                 15
#define SARADC_CFG_CH_SEL_MASK                  (((1U << SARADC_CFG_CH_SEL_WIDTH) - 1U) << SARADC_CFG_CH_SEL_SHIFT)
#define SARADC_CFG_AVG_SHIFT                    16
#define SARADC_CFG_AVG_WIDTH                    2
#define SARADC_CFG_AVG_MASK                     (((1U << SARADC_CFG_AVG_WIDTH) - 1U) << SARADC_CFG_AVG_SHIFT)
#define SARADC_CFG_AVG_VALUE_1_SAMPLE           0U
#define SARADC_CFG_AVG_BITS_1_SAMPLE            (SARADC_CFG_AVG_VALUE_1_SAMPLE << SARADC_CFG_AVG_SHIFT)
#define SARADC_CFG_AVG_VALUE_2_SAMPLE           1U
#define SARADC_CFG_AVG_BITS_2_SAMPLE            (SARADC_CFG_AVG_VALUE_2_SAMPLE << SARADC_CFG_AVG_SHIFT)
#define SARADC_CFG_AVG_VALUE_4_SAMPLE           2U
#define SARADC_CFG_AVG_BITS_4_SAMPLE            (SARADC_CFG_AVG_VALUE_4_SAMPLE << SARADC_CFG_AVG_SHIFT)
#define SARADC_CFG_AVG_VALUE_8_SAMPLE           3U
#define SARADC_CFG_AVG_BITS_8_SAMPLE            (SARADC_CFG_AVG_VALUE_8_SAMPLE << SARADC_CFG_AVG_SHIFT)

#define SARADC_CFG_CONT_SHIFT                   18
#define SARADC_CFG_CONT_WIDTH                   1
#define SARADC_CFG_CONT_MASK                    (((1U << SARADC_CFG_CONT_WIDTH) - 1U) << SARADC_CFG_CONT_SHIFT)
#define SARADC_CFG_CONT_VALUE_SINGLE            0U
#define SARADC_CFG_CONT_BITS_SINGLE             (SARADC_CFG_CONT_VALUE_SINGLE << SARADC_CFG_CONT_SHIFT)
#define SARADC_CFG_CONT_VALUE_CONTINUOUS        1U
#define SARADC_CFG_CONT_BITS_CONTINUOUS         (SARADC_CFG_CONT_VALUE_CONTINUOUS << SARADC_CFG_CONT_SHIFT)

#define SARADC_CFG_SMPL_SETUP_SHIFT             19
#define SARADC_CFG_SMPL_SETUP_WIDTH             3
#define SARADC_CFG_SMPL_SETUP_MASK              (((1U << SARADC_CFG_SMPL_SETUP_WIDTH) - 1U) << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_1_CYCLE     0U
#define SARADC_CFG_SMPL_SETUP_BITS_1_CYCLE      (SARADC_CFG_SMPL_SETUP_VALUE_1_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_2_CYCLE     1U
#define SARADC_CFG_SMPL_SETUP_BITS_2_CYCLE      (SARADC_CFG_SMPL_SETUP_VALUE_2_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_4_CYCLE     2U
#define SARADC_CFG_SMPL_SETUP_BITS_4_CYCLE      (SARADC_CFG_SMPL_SETUP_VALUE_4_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_8_CYCLE     3U
#define SARADC_CFG_SMPL_SETUP_BITS_8_CYCLE      (SARADC_CFG_SMPL_SETUP_VALUE_8_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_16_CYCLE    4U
#define SARADC_CFG_SMPL_SETUP_BITS_16_CYCLE     (SARADC_CFG_SMPL_SETUP_VALUE_16_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_32_CYCLE    5U
#define SARADC_CFG_SMPL_SETUP_BITS_32_CYCLE     (SARADC_CFG_SMPL_SETUP_VALUE_32_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_64_CYCLE    6U
#define SARADC_CFG_SMPL_SETUP_BITS_64_CYCLE     (SARADC_CFG_SMPL_SETUP_VALUE_64_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)
#define SARADC_CFG_SMPL_SETUP_VALUE_128_CYCLE   7U
#define SARADC_CFG_SMPL_SETUP_BITS_128_CYCLE    (SARADC_CFG_SMPL_SETUP_VALUE_128_CYCLE << SARADC_CFG_SMPL_SETUP_SHIFT)

#define SARADC_CFG_MEM_MODE_SHIFT               22
#define SARADC_CFG_MEM_MODE_WIDTH               1
#define SARADC_CFG_MEM_MODE_MASK                (((1U << SARADC_CFG_MEM_MODE_WIDTH) - 1U) << SARADC_CFG_MEM_MODE_SHIFT)
#define SARADC_CFG_MEM_MODE_VALUE_FIFO          0U
#define SARADC_CFG_MEM_MODE_BITS_FIFO           (SARADC_CFG_MEM_MODE_VALUE_FIFO << SARADC_CFG_MEM_MODE_SHIFT)
#define SARADC_CFG_MEM_MODE_VALUE_CHANNEL       1U
#define SARADC_CFG_MEM_MODE_BITS_CHANNEL        (SARADC_CFG_MEM_MODE_VALUE_CHANNEL << SARADC_CFG_MEM_MODE_SHIFT)

#define SARADC_CFG_SMPL_CLK_SHIFT               23
#define SARADC_CFG_SMPL_CLK_WIDTH               1
#define SARADC_CFG_SMPL_CLK_MASK                (((1U << SARADC_CFG_SMPL_CLK_WIDTH) - 1U) << SARADC_CFG_SMPL_CLK_SHIFT)
#define SARADC_CFG_SMPL_CLK_VALUE_EXTERNAL      0U
#define SARADC_CFG_SMPL_CLK_BITS_EXTERNAL       (SARADC_CFG_SMPL_CLK_VALUE_EXTERNAL << SARADC_CFG_SMPL_CLK_SHIFT)
#define SARADC_CFG_SMPL_CLK_VALUE_INTERNAL      1U
#define SARADC_CFG_SMPL_CLK_BITS_INTERNAL       (SARADC_CFG_SMPL_CLK_VALUE_INTERNAL << SARADC_CFG_SMPL_CLK_SHIFT)

#define SARADC_CFG_SMPL_WIN_SHIFT               24
#define SARADC_CFG_SMPL_WIN_WIDTH               3
#define SARADC_CFG_SMPL_WIN_MASK                (((1U << SARADC_CFG_SMPL_WIN_WIDTH) - 1U) << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_1_CYCLE       0U
#define SARADC_CFG_SMPL_WIN_BITS_1_CYCLE        (SARADC_CFG_SMPL_WIN_VALUE_1_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_3_CYCLE       1U
#define SARADC_CFG_SMPL_WIN_BITS_3_CYCLE        (SARADC_CFG_SMPL_WIN_VALUE_3_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_5_CYCLE       2U
#define SARADC_CFG_SMPL_WIN_BITS_5_CYCLE        (SARADC_CFG_SMPL_WIN_VALUE_5_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_7_CYCLE       3U
#define SARADC_CFG_SMPL_WIN_BITS_7_CYCLE        (SARADC_CFG_SMPL_WIN_VALUE_7_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_9_CYCLE       4U
#define SARADC_CFG_SMPL_WIN_BITS_9_CYCLE        (SARADC_CFG_SMPL_WIN_VALUE_9_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_11_CYCLE      5U
#define SARADC_CFG_SMPL_WIN_BITS_11_CYCLE       (SARADC_CFG_SMPL_WIN_VALUE_11_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_13_CYCLE      6U
#define SARADC_CFG_SMPL_WIN_BITS_13_CYCLE       (SARADC_CFG_SMPL_WIN_VALUE_13_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)
#define SARADC_CFG_SMPL_WIN_VALUE_15_CYCLE      7U
#define SARADC_CFG_SMPL_WIN_BITS_15_CYCLE       (SARADC_CFG_SMPL_WIN_VALUE_15_CYCLE << SARADC_CFG_SMPL_WIN_SHIFT)

#define SARADC_CFG_ADC_EN_SHIFT                 27
#define SARADC_CFG_ADC_EN_WIDTH                 1
#define SARADC_CFG_ADC_EN_MASK                  (((1U << SARADC_CFG_ADC_EN_WIDTH) - 1U) << SARADC_CFG_ADC_EN_SHIFT)
#define SARADC_CFG_ADC_EN_VALUE_DISABLE         0U
#define SARADC_CFG_ADC_EN_BITS_DISABLE          (SARADC_CFG_ADC_EN_VALUE_DISABLE << SARADC_CFG_ADC_EN_SHIFT)
#define SARADC_CFG_ADC_EN_VALUE_ENABLE          1U
#define SARADC_CFG_ADC_EN_BITS_ENABLE           (SARADC_CFG_ADC_EN_VALUE_ENABLE << SARADC_CFG_ADC_EN_SHIFT)

#define SARADC_CFG_ADC_TRIG_SHIFT               28
#define SARADC_CFG_ADC_TRIG_WIDTH               1
#define SARADC_CFG_ADC_TRIG_MASK                (((1U << SARADC_CFG_ADC_TRIG_WIDTH) - 1U) << SARADC_CFG_ADC_TRIG_SHIFT)
#define SARADC_CFG_ADC_TRIG_VALUE_CPU           0U
#define SARADC_CFG_ADC_TRIG_BITS_CPU            (SARADC_CFG_ADC_TRIG_VALUE_CPU << SARADC_CFG_ADC_TRIG_SHIFT)
#define SARADC_CFG_ADC_TRIG_VALUE_EXTERNAL      1U
#define SARADC_CFG_ADC_TRIG_BITS_EXTERNAL       (SARADC_CFG_ADC_TRIG_VALUE_EXTERNAL << SARADC_CFG_ADC_TRIG_SHIFT)

#define SARADC_CFG_DMA_EN_SHIFT                 29
#define SARADC_CFG_DMA_EN_WIDTH                 1
#define SARADC_CFG_DMA_EN_MASK                  (((1U << SARADC_CFG_DMA_EN_WIDTH) - 1U) << SARADC_CFG_DMA_EN_SHIFT)
#define SARADC_CFG_DMA_EN_VALUE_DISABLE         0U
#define SARADC_CFG_DMA_EN_BITS_DISABLE          (SARADC_CFG_DMA_EN_VALUE_DISABLE << SARADC_CFG_DMA_EN_SHIFT)
#define SARADC_CFG_DMA_EN_VALUE_ENABLE          1U
#define SARADC_CFG_DMA_EN_BITS_ENABLE           (SARADC_CFG_DMA_EN_VALUE_ENABLE << SARADC_CFG_DMA_EN_SHIFT)

#define SARADC_START_ADDR                       (SARADC_BASE_ADDR + 0x0004U)
#define SARADC_START                            (*(volatile uint32_t *)SARADC_START_ADDR)
#define SARADC_START_START_SHIFT                0
#define SARADC_START_START_WIDTH                1
#define SARADC_START_START_MASK                 (((1U << SARADC_START_START_WIDTH) - 1U) << SARADC_START_START_SHIFT)
#define SARADC_START_START_VALUE_DISABLE        0U
#define SARADC_START_START_BITS_DISABLE         (SARADC_START_START_VALUE_DISABLE << SARADC_START_START_SHIFT)
#define SARADC_START_START_VALUE_ENABLE         1U
#define SARADC_START_START_BITS_ENABLE          (SARADC_START_START_VALUE_ENABLE << SARADC_START_START_SHIFT)

#define SARADC_START_SOFT_RESET_SHIFT           2
#define SARADC_START_SOFT_RESET_WIDTH           1
#define SARADC_START_SOFT_RESET_MASK            (((1U << SARADC_START_SOFT_RESET_WIDTH) - 1U) << SARADC_START_SOFT_RESET_SHIFT)
#define SARADC_START_SOFT_RESET_VALUE_ASSERT    0U
#define SARADC_START_SOFT_RESET_BITS_ASSERT     (SARADC_START_SOFT_RESET_VALUE_ASSERT << SARADC_START_SOFT_RESET_SHIFT)
#define SARADC_START_SOFT_RESET_VALUE_DEASSERT  1U
#define SARADC_START_SOFT_RESET_BITS_DEASSERT   (SARADC_START_SOFT_RESET_VALUE_DEASSERT << SARADC_START_SOFT_RESET_SHIFT)

#define SARADC_IE_ADDR                          (SARADC_BASE_ADDR + 0x0008U)
#define SARADC_IE                               (*(volatile uint32_t *)SARADC_IE_ADDR)
#define SARADC_IE_CHx_EOC_SHIFT                 0
#define SARADC_IE_CHx_EOC_WIDTH                 16
#define SARADC_IE_CHx_EOC_MASK                  (((1U << SARADC_IE_CHx_EOC_WIDTH) - 1U) << SARADC_IE_CHx_EOC_SHIFT)
#define SARADC_IE_CHx_EOC_VALUE_NONE            0U
#define SARADC_IE_CHx_EOC_BITS_NONE             (SARADC_IE_CHx_EOC_VALUE_NONE << SARADC_IE_CHx_EOC_SHIFT)
#define SARADC_IE_CHx_EOC_VALUE_ALL             65535U
#define SARADC_IE_CHx_EOC_BITS_ALL              (SARADC_IE_CHx_EOC_VALUE_ALL << SARADC_IE_CHx_EOC_SHIFT)

#define SARADC_IE_FIFO_FULL_SHIFT               16
#define SARADC_IE_FIFO_FULL_WIDTH               1
#define SARADC_IE_FIFO_FULL_MASK                (((1U << SARADC_IE_FIFO_FULL_WIDTH) - 1U) << SARADC_IE_FIFO_FULL_SHIFT)
#define SARADC_IE_FIFO_FULL_VALUE_DISABLE       0U
#define SARADC_IE_FIFO_FULL_BITS_DISABLE        (SARADC_IE_FIFO_FULL_VALUE_DISABLE << SARADC_IE_FIFO_FULL_SHIFT)
#define SARADC_IE_FIFO_FULL_VALUE_ENABLE        1U
#define SARADC_IE_FIFO_FULL_BITS_ENABLE         (SARADC_IE_FIFO_FULL_VALUE_ENABLE << SARADC_IE_FIFO_FULL_SHIFT)

#define SARADC_IE_FIFO_HFULL_SHIFT              17
#define SARADC_IE_FIFO_HFULL_WIDTH              1
#define SARADC_IE_FIFO_HFULL_MASK               (((1U << SARADC_IE_FIFO_HFULL_WIDTH) - 1U) << SARADC_IE_FIFO_HFULL_SHIFT)
#define SARADC_IE_FIFO_HFULL_VALUE_DISABLE      0U
#define SARADC_IE_FIFO_HFULL_BITS_DISABLE       (SARADC_IE_FIFO_HFULL_VALUE_DISABLE << SARADC_IE_FIFO_HFULL_SHIFT)
#define SARADC_IE_FIFO_HFULL_VALUE_ENABLE       1U
#define SARADC_IE_FIFO_HFULL_BITS_ENABLE        (SARADC_IE_FIFO_HFULL_VALUE_ENABLE << SARADC_IE_FIFO_HFULL_SHIFT)

#define SARADC_IF_ADDR                          (SARADC_BASE_ADDR + 0x000CU)
#define SARADC_IF                               (*(volatile uint32_t *)SARADC_IF_ADDR)
#define SARADC_IF_CHx_EOC_SHIFT                 0
#define SARADC_IF_CHx_EOC_WIDTH                 16
#define SARADC_IF_CHx_EOC_MASK                  (((1U << SARADC_IF_CHx_EOC_WIDTH) - 1U) << SARADC_IF_CHx_EOC_SHIFT)
#define SARADC_IF_FIFO_FULL_SHIFT               16
#define SARADC_IF_FIFO_FULL_WIDTH               1
#define SARADC_IF_FIFO_FULL_MASK                (((1U << SARADC_IF_FIFO_FULL_WIDTH) - 1U) << SARADC_IF_FIFO_FULL_SHIFT)
#define SARADC_IF_FIFO_FULL_VALUE_NOT_SET       0U
#define SARADC_IF_FIFO_FULL_BITS_NOT_SET        (SARADC_IF_FIFO_FULL_VALUE_NOT_SET << SARADC_IF_FIFO_FULL_SHIFT)
#define SARADC_IF_FIFO_FULL_VALUE_SET           1U
#define SARADC_IF_FIFO_FULL_BITS_SET            (SARADC_IF_FIFO_FULL_VALUE_SET << SARADC_IF_FIFO_FULL_SHIFT)

#define SARADC_IF_FIFO_HFULL_SHIFT              17
#define SARADC_IF_FIFO_HFULL_WIDTH              1
#define SARADC_IF_FIFO_HFULL_MASK               (((1U << SARADC_IF_FIFO_HFULL_WIDTH) - 1U) << SARADC_IF_FIFO_HFULL_SHIFT)
#define SARADC_IF_FIFO_HFULL_VALUE_NOT_SET      0U
#define SARADC_IF_FIFO_HFULL_BITS_NOT_SET       (SARADC_IF_FIFO_HFULL_VALUE_NOT_SET << SARADC_IF_FIFO_HFULL_SHIFT)
#define SARADC_IF_FIFO_HFULL_VALUE_SET          1U
#define SARADC_IF_FIFO_HFULL_BITS_SET           (SARADC_IF_FIFO_HFULL_VALUE_SET << SARADC_IF_FIFO_HFULL_SHIFT)

#define SARADC_CH0_ADDR                         (SARADC_BASE_ADDR + 0x0010U)
#define SARADC_CH0                              (*(volatile uint32_t *)SARADC_CH0_ADDR)
#define SARADC_EXTTRIG_SEL_ADDR                 (SARADC_BASE_ADDR + 0x00B0U)
#define SARADC_EXTTRIG_SEL                      (*(volatile uint32_t *)SARADC_EXTTRIG_SEL_ADDR)

#define SARADC_CALIB_OFFSET_ADDR                (SARADC_BASE_ADDR + 0x00F0U)
#define SARADC_CALIB_OFFSET                     (*(volatile uint32_t *)SARADC_CALIB_OFFSET_ADDR)
#define SARADC_CALIB_OFFSET_OFFSET_SHIFT        0
#define SARADC_CALIB_OFFSET_OFFSET_WIDTH        8
#define SARADC_CALIB_OFFSET_OFFSET_MASK         (((1U << SARADC_CALIB_OFFSET_OFFSET_WIDTH) - 1U) << SARADC_CALIB_OFFSET_OFFSET_SHIFT)
#define SARADC_CALIB_OFFSET_VALID_SHIFT         16
#define SARADC_CALIB_OFFSET_VALID_WIDTH         1
#define SARADC_CALIB_OFFSET_VALID_MASK          (((1U << SARADC_CALIB_OFFSET_VALID_WIDTH) - 1U) << SARADC_CALIB_OFFSET_VALID_SHIFT)
#define SARADC_CALIB_OFFSET_VALID_VALUE_NO      0U
#define SARADC_CALIB_OFFSET_VALID_BITS_NO       (SARADC_CALIB_OFFSET_VALID_VALUE_NO << SARADC_CALIB_OFFSET_VALID_SHIFT)
#define SARADC_CALIB_OFFSET_VALID_VALUE_YES     1U
#define SARADC_CALIB_OFFSET_VALID_BITS_YES      (SARADC_CALIB_OFFSET_VALID_VALUE_YES << SARADC_CALIB_OFFSET_VALID_SHIFT)

#define SARADC_CALIB_KD_ADDR                    (SARADC_BASE_ADDR + 0x00F4U)
#define SARADC_CALIB_KD                         (*(volatile uint32_t *)SARADC_CALIB_KD_ADDR)
#define SARADC_CALIB_KD_KD_SHIFT                0
#define SARADC_CALIB_KD_KD_WIDTH                8
#define SARADC_CALIB_KD_KD_MASK                 (((1U << SARADC_CALIB_KD_KD_WIDTH) - 1U) << SARADC_CALIB_KD_KD_SHIFT)
#define SARADC_CALIB_KD_VALID_SHIFT             16
#define SARADC_CALIB_KD_VALID_WIDTH             1
#define SARADC_CALIB_KD_VALID_MASK              (((1U << SARADC_CALIB_KD_VALID_WIDTH) - 1U) << SARADC_CALIB_KD_VALID_SHIFT)
#define SARADC_CALIB_KD_VALID_VALUE_NO          0U
#define SARADC_CALIB_KD_VALID_BITS_NO           (SARADC_CALIB_KD_VALID_VALUE_NO << SARADC_CALIB_KD_VALID_SHIFT)
#define SARADC_CALIB_KD_VALID_VALUE_YES         1U
#define SARADC_CALIB_KD_VALID_BITS_YES          (SARADC_CALIB_KD_VALID_VALUE_YES << SARADC_CALIB_KD_VALID_SHIFT)

/* -------- ADC_CHx -------- */

typedef struct {
	uint32_t STAT;
	uint32_t DATA;
} ADC_Channel_t;

#define ADC_CHx_STAT_EOC_SHIFT                  0
#define ADC_CHx_STAT_EOC_WIDTH                  1
#define ADC_CHx_STAT_EOC_MASK                   (((1U << ADC_CHx_STAT_EOC_WIDTH) - 1U) << ADC_CHx_STAT_EOC_SHIFT)
#define ADC_CHx_STAT_EOC_VALUE_NOT_COMPLETE     0U
#define ADC_CHx_STAT_EOC_BITS_NOT_COMPLETE      (ADC_CHx_STAT_EOC_VALUE_NOT_COMPLETE << ADC_CHx_STAT_EOC_SHIFT)
#define ADC_CHx_STAT_EOC_VALUE_COMPLETE         1U
#define ADC_CHx_STAT_EOC_BITS_COMPLETE          (ADC_CHx_STAT_EOC_VALUE_COMPLETE << ADC_CHx_STAT_EOC_SHIFT)

#define ADC_CHx_DATA_DATA_SHIFT                 0
#define ADC_CHx_DATA_DATA_WIDTH                 12
#define ADC_CHx_DATA_DATA_MASK                  (((1U << ADC_CHx_DATA_DATA_WIDTH) - 1U) << ADC_CHx_DATA_DATA_SHIFT)
#define ADC_CHx_DATA_NUM_SHIFT                  12
#define ADC_CHx_DATA_NUM_WIDTH                  4
#define ADC_CHx_DATA_NUM_MASK                   (((1U << ADC_CHx_DATA_NUM_WIDTH) - 1U) << ADC_CHx_DATA_NUM_SHIFT)


#endif

