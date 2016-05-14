/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_PMC_REGISTERS_H__
#define __HW_PMC_REGISTERS_H__

#include "MKL46Z4.h"
#include "fsl_bitband.h"

/*
 * MKL46Z4 PMC
 *
 * Power Management Controller
 *
 * Registers defined in this header file:
 * - HW_PMC_LVDSC1 - Low Voltage Detect Status And Control 1 register
 * - HW_PMC_LVDSC2 - Low Voltage Detect Status And Control 2 register
 * - HW_PMC_REGSC - Regulator Status And Control register
 *
 * - hw_pmc_t - Struct containing all module registers.
 */

#define HW_PMC_INSTANCE_COUNT (1U) /*!< Number of instances of the PMC module. */

/*******************************************************************************
 * HW_PMC_LVDSC1 - Low Voltage Detect Status And Control 1 register
 ******************************************************************************/

/*!
 * @brief HW_PMC_LVDSC1 - Low Voltage Detect Status And Control 1 register (RW)
 *
 * Reset value: 0x10U
 *
 * This register contains status and control bits to support the low voltage
 * detect function. This register should be written during the reset initialization
 * program to set the desired controls even if the desired settings are the same
 * as the reset settings. While the device is in the very low power or low
 * leakage modes, the LVD system is disabled regardless of LVDSC1 settings. To protect
 * systems that must have LVD always on, configure the SMC's power mode
 * protection register (PMPROT) to disallow any very low power or low leakage modes from
 * being enabled. See the device's data sheet for the exact LVD trip voltages. The
 * LVDV bits are reset solely on a POR Only event. The register's other bits are
 * reset on Chip Reset Not VLLS. For more information about these reset types,
 * refer to the Reset section details.
 */
typedef union _hw_pmc_lvdsc1
{
    uint8_t U;
    struct _hw_pmc_lvdsc1_bitfields
    {
        uint8_t LVDV : 2;              /*!< [1:0] Low-Voltage Detect Voltage Select */
        uint8_t RESERVED0 : 2;         /*!< [3:2]  */
        uint8_t LVDRE : 1;             /*!< [4] Low-Voltage Detect Reset Enable */
        uint8_t LVDIE : 1;             /*!< [5] Low-Voltage Detect Interrupt Enable */
        uint8_t LVDACK : 1;            /*!< [6] Low-Voltage Detect Acknowledge */
        uint8_t LVDF : 1;              /*!< [7] Low-Voltage Detect Flag */
    } B;
} hw_pmc_lvdsc1_t;

/*!
 * @name Constants and macros for entire PMC_LVDSC1 register
 */
/*@{*/
#define HW_PMC_LVDSC1_ADDR(x)    ((x) + 0x0U)

#define HW_PMC_LVDSC1(x)         (*(__IO hw_pmc_lvdsc1_t *) HW_PMC_LVDSC1_ADDR(x))
#define HW_PMC_LVDSC1_RD(x)      (HW_PMC_LVDSC1(x).U)
#define HW_PMC_LVDSC1_WR(x, v)   (HW_PMC_LVDSC1(x).U = (v))
#define HW_PMC_LVDSC1_SET(x, v)  (BME_OR8(HW_PMC_LVDSC1_ADDR(x), (uint8_t)(v)))
#define HW_PMC_LVDSC1_CLR(x, v)  (BME_AND8(HW_PMC_LVDSC1_ADDR(x), (uint8_t)(~(v))))
#define HW_PMC_LVDSC1_TOG(x, v)  (BME_XOR8(HW_PMC_LVDSC1_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PMC_LVDSC1 bitfields
 */

/*!
 * @name Register PMC_LVDSC1, field LVDV[1:0] (RW)
 *
 * Selects the LVD trip point voltage (V LVD ).
 *
 * Values:
 * - 00 - Low trip point selected (V LVD = V LVDL )
 * - 01 - High trip point selected (V LVD = V LVDH )
 * - 10 - Reserved
 * - 11 - Reserved
 */
/*@{*/
#define BP_PMC_LVDSC1_LVDV   (0U)          /*!< Bit position for PMC_LVDSC1_LVDV. */
#define BM_PMC_LVDSC1_LVDV   (0x03U)       /*!< Bit mask for PMC_LVDSC1_LVDV. */
#define BS_PMC_LVDSC1_LVDV   (2U)          /*!< Bit field size in bits for PMC_LVDSC1_LVDV. */

/*! @brief Read current value of the PMC_LVDSC1_LVDV field. */
#define BR_PMC_LVDSC1_LVDV(x) (BME_UBFX8(HW_PMC_LVDSC1_ADDR(x), BP_PMC_LVDSC1_LVDV, BS_PMC_LVDSC1_LVDV))

/*! @brief Format value for bitfield PMC_LVDSC1_LVDV. */
#define BF_PMC_LVDSC1_LVDV(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC1_LVDV) & BM_PMC_LVDSC1_LVDV)

/*! @brief Set the LVDV field to a new value. */
#define BW_PMC_LVDSC1_LVDV(x, v) (BME_BFI8(HW_PMC_LVDSC1_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC1_LVDV), BP_PMC_LVDSC1_LVDV, 2))
/*@}*/

/*!
 * @name Register PMC_LVDSC1, field LVDRE[4] (RW)
 *
 * This write-once bit enables LVDF events to generate a hardware reset.
 * Additional writes are ignored.
 *
 * Values:
 * - 0 - LVDF does not generate hardware resets
 * - 1 - Force an MCU reset when LVDF = 1
 */
/*@{*/
#define BP_PMC_LVDSC1_LVDRE  (4U)          /*!< Bit position for PMC_LVDSC1_LVDRE. */
#define BM_PMC_LVDSC1_LVDRE  (0x10U)       /*!< Bit mask for PMC_LVDSC1_LVDRE. */
#define BS_PMC_LVDSC1_LVDRE  (1U)          /*!< Bit field size in bits for PMC_LVDSC1_LVDRE. */

/*! @brief Read current value of the PMC_LVDSC1_LVDRE field. */
#define BR_PMC_LVDSC1_LVDRE(x) (BME_UBFX8(HW_PMC_LVDSC1_ADDR(x), BP_PMC_LVDSC1_LVDRE, BS_PMC_LVDSC1_LVDRE))

/*! @brief Format value for bitfield PMC_LVDSC1_LVDRE. */
#define BF_PMC_LVDSC1_LVDRE(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC1_LVDRE) & BM_PMC_LVDSC1_LVDRE)

/*! @brief Set the LVDRE field to a new value. */
#define BW_PMC_LVDSC1_LVDRE(x, v) (BME_BFI8(HW_PMC_LVDSC1_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC1_LVDRE), BP_PMC_LVDSC1_LVDRE, 1))
/*@}*/

/*!
 * @name Register PMC_LVDSC1, field LVDIE[5] (RW)
 *
 * Enables hardware interrupt requests for LVDF.
 *
 * Values:
 * - 0 - Hardware interrupt disabled (use polling)
 * - 1 - Request a hardware interrupt when LVDF = 1
 */
/*@{*/
#define BP_PMC_LVDSC1_LVDIE  (5U)          /*!< Bit position for PMC_LVDSC1_LVDIE. */
#define BM_PMC_LVDSC1_LVDIE  (0x20U)       /*!< Bit mask for PMC_LVDSC1_LVDIE. */
#define BS_PMC_LVDSC1_LVDIE  (1U)          /*!< Bit field size in bits for PMC_LVDSC1_LVDIE. */

/*! @brief Read current value of the PMC_LVDSC1_LVDIE field. */
#define BR_PMC_LVDSC1_LVDIE(x) (BME_UBFX8(HW_PMC_LVDSC1_ADDR(x), BP_PMC_LVDSC1_LVDIE, BS_PMC_LVDSC1_LVDIE))

/*! @brief Format value for bitfield PMC_LVDSC1_LVDIE. */
#define BF_PMC_LVDSC1_LVDIE(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC1_LVDIE) & BM_PMC_LVDSC1_LVDIE)

/*! @brief Set the LVDIE field to a new value. */
#define BW_PMC_LVDSC1_LVDIE(x, v) (BME_BFI8(HW_PMC_LVDSC1_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC1_LVDIE), BP_PMC_LVDSC1_LVDIE, 1))
/*@}*/

/*!
 * @name Register PMC_LVDSC1, field LVDACK[6] (WORZ)
 *
 * This write-only bit is used to acknowledge low voltage detection errors.
 * Write 1 to clear LVDF. Reads always return 0.
 */
/*@{*/
#define BP_PMC_LVDSC1_LVDACK (6U)          /*!< Bit position for PMC_LVDSC1_LVDACK. */
#define BM_PMC_LVDSC1_LVDACK (0x40U)       /*!< Bit mask for PMC_LVDSC1_LVDACK. */
#define BS_PMC_LVDSC1_LVDACK (1U)          /*!< Bit field size in bits for PMC_LVDSC1_LVDACK. */

/*! @brief Format value for bitfield PMC_LVDSC1_LVDACK. */
#define BF_PMC_LVDSC1_LVDACK(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC1_LVDACK) & BM_PMC_LVDSC1_LVDACK)

/*! @brief Set the LVDACK field to a new value. */
#define BW_PMC_LVDSC1_LVDACK(x, v) (BME_BFI8(HW_PMC_LVDSC1_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC1_LVDACK), BP_PMC_LVDSC1_LVDACK, 1))
/*@}*/

/*!
 * @name Register PMC_LVDSC1, field LVDF[7] (RO)
 *
 * This read-only status bit indicates a low-voltage detect event.
 *
 * Values:
 * - 0 - Low-voltage event not detected
 * - 1 - Low-voltage event detected
 */
/*@{*/
#define BP_PMC_LVDSC1_LVDF   (7U)          /*!< Bit position for PMC_LVDSC1_LVDF. */
#define BM_PMC_LVDSC1_LVDF   (0x80U)       /*!< Bit mask for PMC_LVDSC1_LVDF. */
#define BS_PMC_LVDSC1_LVDF   (1U)          /*!< Bit field size in bits for PMC_LVDSC1_LVDF. */

/*! @brief Read current value of the PMC_LVDSC1_LVDF field. */
#define BR_PMC_LVDSC1_LVDF(x) (BME_UBFX8(HW_PMC_LVDSC1_ADDR(x), BP_PMC_LVDSC1_LVDF, BS_PMC_LVDSC1_LVDF))
/*@}*/

/*******************************************************************************
 * HW_PMC_LVDSC2 - Low Voltage Detect Status And Control 2 register
 ******************************************************************************/

/*!
 * @brief HW_PMC_LVDSC2 - Low Voltage Detect Status And Control 2 register (RW)
 *
 * Reset value: 0x00U
 *
 * This register contains status and control bits to support the low voltage
 * warning function. While the device is in the very low power or low leakage modes,
 * the LVD system is disabled regardless of LVDSC2 settings. See the device's
 * data sheet for the exact LVD trip voltages. The LVW trip voltages depend on LVWV
 * and LVDV bits. The LVWV bits are reset solely on a POR Only event. The
 * register's other bits are reset on Chip Reset Not VLLS. For more information about
 * these reset types, refer to the Reset section details.
 */
typedef union _hw_pmc_lvdsc2
{
    uint8_t U;
    struct _hw_pmc_lvdsc2_bitfields
    {
        uint8_t LVWV : 2;              /*!< [1:0] Low-Voltage Warning Voltage Select */
        uint8_t RESERVED0 : 3;         /*!< [4:2]  */
        uint8_t LVWIE : 1;             /*!< [5] Low-Voltage Warning Interrupt Enable */
        uint8_t LVWACK : 1;            /*!< [6] Low-Voltage Warning Acknowledge */
        uint8_t LVWF : 1;              /*!< [7] Low-Voltage Warning Flag */
    } B;
} hw_pmc_lvdsc2_t;

/*!
 * @name Constants and macros for entire PMC_LVDSC2 register
 */
/*@{*/
#define HW_PMC_LVDSC2_ADDR(x)    ((x) + 0x1U)

#define HW_PMC_LVDSC2(x)         (*(__IO hw_pmc_lvdsc2_t *) HW_PMC_LVDSC2_ADDR(x))
#define HW_PMC_LVDSC2_RD(x)      (HW_PMC_LVDSC2(x).U)
#define HW_PMC_LVDSC2_WR(x, v)   (HW_PMC_LVDSC2(x).U = (v))
#define HW_PMC_LVDSC2_SET(x, v)  (BME_OR8(HW_PMC_LVDSC2_ADDR(x), (uint8_t)(v)))
#define HW_PMC_LVDSC2_CLR(x, v)  (BME_AND8(HW_PMC_LVDSC2_ADDR(x), (uint8_t)(~(v))))
#define HW_PMC_LVDSC2_TOG(x, v)  (BME_XOR8(HW_PMC_LVDSC2_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PMC_LVDSC2 bitfields
 */

/*!
 * @name Register PMC_LVDSC2, field LVWV[1:0] (RW)
 *
 * Selects the LVW trip point voltage (VLVW). The actual voltage for the warning
 * depends on LVDSC1[LVDV].
 *
 * Values:
 * - 00 - Low trip point selected (VLVW = VLVW1)
 * - 01 - Mid 1 trip point selected (VLVW = VLVW2)
 * - 10 - Mid 2 trip point selected (VLVW = VLVW3)
 * - 11 - High trip point selected (VLVW = VLVW4)
 */
/*@{*/
#define BP_PMC_LVDSC2_LVWV   (0U)          /*!< Bit position for PMC_LVDSC2_LVWV. */
#define BM_PMC_LVDSC2_LVWV   (0x03U)       /*!< Bit mask for PMC_LVDSC2_LVWV. */
#define BS_PMC_LVDSC2_LVWV   (2U)          /*!< Bit field size in bits for PMC_LVDSC2_LVWV. */

/*! @brief Read current value of the PMC_LVDSC2_LVWV field. */
#define BR_PMC_LVDSC2_LVWV(x) (BME_UBFX8(HW_PMC_LVDSC2_ADDR(x), BP_PMC_LVDSC2_LVWV, BS_PMC_LVDSC2_LVWV))

/*! @brief Format value for bitfield PMC_LVDSC2_LVWV. */
#define BF_PMC_LVDSC2_LVWV(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC2_LVWV) & BM_PMC_LVDSC2_LVWV)

/*! @brief Set the LVWV field to a new value. */
#define BW_PMC_LVDSC2_LVWV(x, v) (BME_BFI8(HW_PMC_LVDSC2_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC2_LVWV), BP_PMC_LVDSC2_LVWV, 2))
/*@}*/

/*!
 * @name Register PMC_LVDSC2, field LVWIE[5] (RW)
 *
 * Enables hardware interrupt requests for LVWF.
 *
 * Values:
 * - 0 - Hardware interrupt disabled (use polling)
 * - 1 - Request a hardware interrupt when LVWF = 1
 */
/*@{*/
#define BP_PMC_LVDSC2_LVWIE  (5U)          /*!< Bit position for PMC_LVDSC2_LVWIE. */
#define BM_PMC_LVDSC2_LVWIE  (0x20U)       /*!< Bit mask for PMC_LVDSC2_LVWIE. */
#define BS_PMC_LVDSC2_LVWIE  (1U)          /*!< Bit field size in bits for PMC_LVDSC2_LVWIE. */

/*! @brief Read current value of the PMC_LVDSC2_LVWIE field. */
#define BR_PMC_LVDSC2_LVWIE(x) (BME_UBFX8(HW_PMC_LVDSC2_ADDR(x), BP_PMC_LVDSC2_LVWIE, BS_PMC_LVDSC2_LVWIE))

/*! @brief Format value for bitfield PMC_LVDSC2_LVWIE. */
#define BF_PMC_LVDSC2_LVWIE(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC2_LVWIE) & BM_PMC_LVDSC2_LVWIE)

/*! @brief Set the LVWIE field to a new value. */
#define BW_PMC_LVDSC2_LVWIE(x, v) (BME_BFI8(HW_PMC_LVDSC2_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC2_LVWIE), BP_PMC_LVDSC2_LVWIE, 1))
/*@}*/

/*!
 * @name Register PMC_LVDSC2, field LVWACK[6] (WORZ)
 *
 * This write-only bit is used to acknowledge low voltage warning errors. Write
 * 1 to clear LVWF. Reads always return 0.
 */
/*@{*/
#define BP_PMC_LVDSC2_LVWACK (6U)          /*!< Bit position for PMC_LVDSC2_LVWACK. */
#define BM_PMC_LVDSC2_LVWACK (0x40U)       /*!< Bit mask for PMC_LVDSC2_LVWACK. */
#define BS_PMC_LVDSC2_LVWACK (1U)          /*!< Bit field size in bits for PMC_LVDSC2_LVWACK. */

/*! @brief Format value for bitfield PMC_LVDSC2_LVWACK. */
#define BF_PMC_LVDSC2_LVWACK(v) ((uint8_t)((uint8_t)(v) << BP_PMC_LVDSC2_LVWACK) & BM_PMC_LVDSC2_LVWACK)

/*! @brief Set the LVWACK field to a new value. */
#define BW_PMC_LVDSC2_LVWACK(x, v) (BME_BFI8(HW_PMC_LVDSC2_ADDR(x), ((uint8_t)(v) << BP_PMC_LVDSC2_LVWACK), BP_PMC_LVDSC2_LVWACK, 1))
/*@}*/

/*!
 * @name Register PMC_LVDSC2, field LVWF[7] (RO)
 *
 * This read-only status bit indicates a low-voltage warning event. LVWF is set
 * when VSupply transitions below the trip point, or after reset and VSupply is
 * already below VLVW. LVWF bit may be 1 after power on reset, therefore, to use
 * LVW interrupt function, before enabling LVWIE, LVWF must be cleared by writing
 * LVWACK first.
 *
 * Values:
 * - 0 - Low-voltage warning event not detected
 * - 1 - Low-voltage warning event detected
 */
/*@{*/
#define BP_PMC_LVDSC2_LVWF   (7U)          /*!< Bit position for PMC_LVDSC2_LVWF. */
#define BM_PMC_LVDSC2_LVWF   (0x80U)       /*!< Bit mask for PMC_LVDSC2_LVWF. */
#define BS_PMC_LVDSC2_LVWF   (1U)          /*!< Bit field size in bits for PMC_LVDSC2_LVWF. */

/*! @brief Read current value of the PMC_LVDSC2_LVWF field. */
#define BR_PMC_LVDSC2_LVWF(x) (BME_UBFX8(HW_PMC_LVDSC2_ADDR(x), BP_PMC_LVDSC2_LVWF, BS_PMC_LVDSC2_LVWF))
/*@}*/

/*******************************************************************************
 * HW_PMC_REGSC - Regulator Status And Control register
 ******************************************************************************/

/*!
 * @brief HW_PMC_REGSC - Regulator Status And Control register (RW)
 *
 * Reset value: 0x04U
 *
 * The PMC contains an internal voltage regulator. The voltage regulator design
 * uses a bandgap reference that is also available through a buffer as input to
 * certain internal peripherals, such as the CMP and ADC. The internal regulator
 * provides a status bit (REGONS) indicating the regulator is in run regulation.
 * This register is reset on Chip Reset Not VLLS and by reset types that trigger
 * Chip Reset not VLLS. See the Reset section for more information.
 */
typedef union _hw_pmc_regsc
{
    uint8_t U;
    struct _hw_pmc_regsc_bitfields
    {
        uint8_t BGBE : 1;              /*!< [0] Bandgap Buffer Enable */
        uint8_t RESERVED0 : 1;         /*!< [1]  */
        uint8_t REGONS : 1;            /*!< [2] Regulator In Run Regulation Status */
        uint8_t ACKISO : 1;            /*!< [3] Acknowledge Isolation */
        uint8_t BGEN : 1;              /*!< [4] Bandgap Enable In VLPx Operation */
        uint8_t RESERVED1 : 3;         /*!< [7:5]  */
    } B;
} hw_pmc_regsc_t;

/*!
 * @name Constants and macros for entire PMC_REGSC register
 */
/*@{*/
#define HW_PMC_REGSC_ADDR(x)     ((x) + 0x2U)

#define HW_PMC_REGSC(x)          (*(__IO hw_pmc_regsc_t *) HW_PMC_REGSC_ADDR(x))
#define HW_PMC_REGSC_RD(x)       (HW_PMC_REGSC(x).U)
#define HW_PMC_REGSC_WR(x, v)    (HW_PMC_REGSC(x).U = (v))
#define HW_PMC_REGSC_SET(x, v)   (BME_OR8(HW_PMC_REGSC_ADDR(x), (uint8_t)(v)))
#define HW_PMC_REGSC_CLR(x, v)   (BME_AND8(HW_PMC_REGSC_ADDR(x), (uint8_t)(~(v))))
#define HW_PMC_REGSC_TOG(x, v)   (BME_XOR8(HW_PMC_REGSC_ADDR(x), (uint8_t)(v)))
/*@}*/

/*
 * Constants & macros for individual PMC_REGSC bitfields
 */

/*!
 * @name Register PMC_REGSC, field BGBE[0] (RW)
 *
 * Enables the bandgap buffer.
 *
 * Values:
 * - 0 - Bandgap buffer not enabled
 * - 1 - Bandgap buffer enabled
 */
/*@{*/
#define BP_PMC_REGSC_BGBE    (0U)          /*!< Bit position for PMC_REGSC_BGBE. */
#define BM_PMC_REGSC_BGBE    (0x01U)       /*!< Bit mask for PMC_REGSC_BGBE. */
#define BS_PMC_REGSC_BGBE    (1U)          /*!< Bit field size in bits for PMC_REGSC_BGBE. */

/*! @brief Read current value of the PMC_REGSC_BGBE field. */
#define BR_PMC_REGSC_BGBE(x) (BME_UBFX8(HW_PMC_REGSC_ADDR(x), BP_PMC_REGSC_BGBE, BS_PMC_REGSC_BGBE))

/*! @brief Format value for bitfield PMC_REGSC_BGBE. */
#define BF_PMC_REGSC_BGBE(v) ((uint8_t)((uint8_t)(v) << BP_PMC_REGSC_BGBE) & BM_PMC_REGSC_BGBE)

/*! @brief Set the BGBE field to a new value. */
#define BW_PMC_REGSC_BGBE(x, v) (BME_BFI8(HW_PMC_REGSC_ADDR(x), ((uint8_t)(v) << BP_PMC_REGSC_BGBE), BP_PMC_REGSC_BGBE, 1))
/*@}*/

/*!
 * @name Register PMC_REGSC, field REGONS[2] (RO)
 *
 * This read-only bit provides the current status of the internal voltage
 * regulator.
 *
 * Values:
 * - 0 - Regulator is in stop regulation or in transition to/from it
 * - 1 - Regulator is in run regulation
 */
/*@{*/
#define BP_PMC_REGSC_REGONS  (2U)          /*!< Bit position for PMC_REGSC_REGONS. */
#define BM_PMC_REGSC_REGONS  (0x04U)       /*!< Bit mask for PMC_REGSC_REGONS. */
#define BS_PMC_REGSC_REGONS  (1U)          /*!< Bit field size in bits for PMC_REGSC_REGONS. */

/*! @brief Read current value of the PMC_REGSC_REGONS field. */
#define BR_PMC_REGSC_REGONS(x) (BME_UBFX8(HW_PMC_REGSC_ADDR(x), BP_PMC_REGSC_REGONS, BS_PMC_REGSC_REGONS))
/*@}*/

/*!
 * @name Register PMC_REGSC, field ACKISO[3] (W1C)
 *
 * Reading this bit indicates whether certain peripherals and the I/O pads are
 * in a latched state as a result of having been in a VLLS mode. Writing one to
 * this bit when it is set releases the I/O pads and certain peripherals to their
 * normal run mode state. After recovering from a VLLS mode, user should restore
 * chip configuration before clearing ACKISO. In particular, pin configuration for
 * enabled LLWU wakeup pins should be restored to avoid any LLWU flag from being
 * falsely set when ACKISO is cleared.
 *
 * Values:
 * - 0 - Peripherals and I/O pads are in normal run state
 * - 1 - Certain peripherals and I/O pads are in an isolated and latched state
 */
/*@{*/
#define BP_PMC_REGSC_ACKISO  (3U)          /*!< Bit position for PMC_REGSC_ACKISO. */
#define BM_PMC_REGSC_ACKISO  (0x08U)       /*!< Bit mask for PMC_REGSC_ACKISO. */
#define BS_PMC_REGSC_ACKISO  (1U)          /*!< Bit field size in bits for PMC_REGSC_ACKISO. */

/*! @brief Read current value of the PMC_REGSC_ACKISO field. */
#define BR_PMC_REGSC_ACKISO(x) (BME_UBFX8(HW_PMC_REGSC_ADDR(x), BP_PMC_REGSC_ACKISO, BS_PMC_REGSC_ACKISO))

/*! @brief Format value for bitfield PMC_REGSC_ACKISO. */
#define BF_PMC_REGSC_ACKISO(v) ((uint8_t)((uint8_t)(v) << BP_PMC_REGSC_ACKISO) & BM_PMC_REGSC_ACKISO)

/*! @brief Set the ACKISO field to a new value. */
#define BW_PMC_REGSC_ACKISO(x, v) (BME_BFI8(HW_PMC_REGSC_ADDR(x), ((uint8_t)(v) << BP_PMC_REGSC_ACKISO), BP_PMC_REGSC_ACKISO, 1))
/*@}*/

/*!
 * @name Register PMC_REGSC, field BGEN[4] (RW)
 *
 * BGEN controls whether the bandgap is enabled in lower power modes of
 * operation (VLPx, LLS, and VLLSx). When on-chip peripherals require the bandgap voltage
 * reference in low power modes of operation, set BGEN to continue to enable the
 * bandgap operation. When the bandgap voltage reference is not needed in low
 * power modes, clear BGEN to avoid excess power consumption.
 *
 * Values:
 * - 0 - Bandgap voltage reference is disabled in VLPx , LLS , and VLLSx modes
 * - 1 - Bandgap voltage reference is enabled in VLPx , LLS , and VLLSx modes
 */
/*@{*/
#define BP_PMC_REGSC_BGEN    (4U)          /*!< Bit position for PMC_REGSC_BGEN. */
#define BM_PMC_REGSC_BGEN    (0x10U)       /*!< Bit mask for PMC_REGSC_BGEN. */
#define BS_PMC_REGSC_BGEN    (1U)          /*!< Bit field size in bits for PMC_REGSC_BGEN. */

/*! @brief Read current value of the PMC_REGSC_BGEN field. */
#define BR_PMC_REGSC_BGEN(x) (BME_UBFX8(HW_PMC_REGSC_ADDR(x), BP_PMC_REGSC_BGEN, BS_PMC_REGSC_BGEN))

/*! @brief Format value for bitfield PMC_REGSC_BGEN. */
#define BF_PMC_REGSC_BGEN(v) ((uint8_t)((uint8_t)(v) << BP_PMC_REGSC_BGEN) & BM_PMC_REGSC_BGEN)

/*! @brief Set the BGEN field to a new value. */
#define BW_PMC_REGSC_BGEN(x, v) (BME_BFI8(HW_PMC_REGSC_ADDR(x), ((uint8_t)(v) << BP_PMC_REGSC_BGEN), BP_PMC_REGSC_BGEN, 1))
/*@}*/

/*******************************************************************************
 * hw_pmc_t - module struct
 ******************************************************************************/
/*!
 * @brief All PMC module registers.
 */
#pragma pack(1)
typedef struct _hw_pmc
{
    __IO hw_pmc_lvdsc1_t LVDSC1;           /*!< [0x0] Low Voltage Detect Status And Control 1 register */
    __IO hw_pmc_lvdsc2_t LVDSC2;           /*!< [0x1] Low Voltage Detect Status And Control 2 register */
    __IO hw_pmc_regsc_t REGSC;             /*!< [0x2] Regulator Status And Control register */
} hw_pmc_t;
#pragma pack()

/*! @brief Macro to access all PMC registers. */
/*! @param x PMC module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_PMC(PMC_BASE)</code>. */
#define HW_PMC(x)      (*(hw_pmc_t *)(x))

#endif /* __HW_PMC_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
