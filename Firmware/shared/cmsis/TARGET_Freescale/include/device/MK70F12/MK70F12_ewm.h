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
#ifndef __HW_EWM_REGISTERS_H__
#define __HW_EWM_REGISTERS_H__

#include "MK70F12.h"
#include "fsl_bitband.h"

/*
 * MK70F12 EWM
 *
 * External Watchdog Monitor
 *
 * Registers defined in this header file:
 * - HW_EWM_CTRL - Control Register
 * - HW_EWM_SERV - Service Register
 * - HW_EWM_CMPL - Compare Low Register
 * - HW_EWM_CMPH - Compare High Register
 *
 * - hw_ewm_t - Struct containing all module registers.
 */

#define HW_EWM_INSTANCE_COUNT (1U) /*!< Number of instances of the EWM module. */

/*******************************************************************************
 * HW_EWM_CTRL - Control Register
 ******************************************************************************/

/*!
 * @brief HW_EWM_CTRL - Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * The CTRL register is cleared by any reset. INEN, ASSIN and EWMEN bits can be
 * written once after a CPU reset. Modifying these bits more than once, generates
 * a bus transfer error.
 */
typedef union _hw_ewm_ctrl
{
    uint8_t U;
    struct _hw_ewm_ctrl_bitfields
    {
        uint8_t EWMEN : 1;             /*!< [0] EWM enable. */
        uint8_t ASSIN : 1;             /*!< [1] EWM_in's Assertion State Select. */
        uint8_t INEN : 1;              /*!< [2] Input Enable. */
        uint8_t INTEN : 1;             /*!< [3] Interrupt Enable. */
        uint8_t RESERVED0 : 4;         /*!< [7:4]  */
    } B;
} hw_ewm_ctrl_t;

/*!
 * @name Constants and macros for entire EWM_CTRL register
 */
/*@{*/
#define HW_EWM_CTRL_ADDR(x)      ((x) + 0x0U)

#define HW_EWM_CTRL(x)           (*(__IO hw_ewm_ctrl_t *) HW_EWM_CTRL_ADDR(x))
#define HW_EWM_CTRL_RD(x)        (HW_EWM_CTRL(x).U)
#define HW_EWM_CTRL_WR(x, v)     (HW_EWM_CTRL(x).U = (v))
#define HW_EWM_CTRL_SET(x, v)    (HW_EWM_CTRL_WR(x, HW_EWM_CTRL_RD(x) |  (v)))
#define HW_EWM_CTRL_CLR(x, v)    (HW_EWM_CTRL_WR(x, HW_EWM_CTRL_RD(x) & ~(v)))
#define HW_EWM_CTRL_TOG(x, v)    (HW_EWM_CTRL_WR(x, HW_EWM_CTRL_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual EWM_CTRL bitfields
 */

/*!
 * @name Register EWM_CTRL, field EWMEN[0] (RW)
 *
 * This bit when set, enables the EWM module. This resets the EWM counter to
 * zero and deasserts the EWM_out signal. Clearing EWMEN bit disables the EWM, and
 * therefore it cannot be enabled until a reset occurs, due to the write-once
 * nature of this bit.
 */
/*@{*/
#define BP_EWM_CTRL_EWMEN    (0U)          /*!< Bit position for EWM_CTRL_EWMEN. */
#define BM_EWM_CTRL_EWMEN    (0x01U)       /*!< Bit mask for EWM_CTRL_EWMEN. */
#define BS_EWM_CTRL_EWMEN    (1U)          /*!< Bit field size in bits for EWM_CTRL_EWMEN. */

/*! @brief Read current value of the EWM_CTRL_EWMEN field. */
#define BR_EWM_CTRL_EWMEN(x) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_EWMEN))

/*! @brief Format value for bitfield EWM_CTRL_EWMEN. */
#define BF_EWM_CTRL_EWMEN(v) ((uint8_t)((uint8_t)(v) << BP_EWM_CTRL_EWMEN) & BM_EWM_CTRL_EWMEN)

/*! @brief Set the EWMEN field to a new value. */
#define BW_EWM_CTRL_EWMEN(x, v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_EWMEN) = (v))
/*@}*/

/*!
 * @name Register EWM_CTRL, field ASSIN[1] (RW)
 *
 * Default assert state of the EWM_in signal is logic zero. Setting ASSIN bit
 * inverts the assert state to a logic one.
 */
/*@{*/
#define BP_EWM_CTRL_ASSIN    (1U)          /*!< Bit position for EWM_CTRL_ASSIN. */
#define BM_EWM_CTRL_ASSIN    (0x02U)       /*!< Bit mask for EWM_CTRL_ASSIN. */
#define BS_EWM_CTRL_ASSIN    (1U)          /*!< Bit field size in bits for EWM_CTRL_ASSIN. */

/*! @brief Read current value of the EWM_CTRL_ASSIN field. */
#define BR_EWM_CTRL_ASSIN(x) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_ASSIN))

/*! @brief Format value for bitfield EWM_CTRL_ASSIN. */
#define BF_EWM_CTRL_ASSIN(v) ((uint8_t)((uint8_t)(v) << BP_EWM_CTRL_ASSIN) & BM_EWM_CTRL_ASSIN)

/*! @brief Set the ASSIN field to a new value. */
#define BW_EWM_CTRL_ASSIN(x, v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_ASSIN) = (v))
/*@}*/

/*!
 * @name Register EWM_CTRL, field INEN[2] (RW)
 *
 * This bit when set, enables the EWM_in port.
 */
/*@{*/
#define BP_EWM_CTRL_INEN     (2U)          /*!< Bit position for EWM_CTRL_INEN. */
#define BM_EWM_CTRL_INEN     (0x04U)       /*!< Bit mask for EWM_CTRL_INEN. */
#define BS_EWM_CTRL_INEN     (1U)          /*!< Bit field size in bits for EWM_CTRL_INEN. */

/*! @brief Read current value of the EWM_CTRL_INEN field. */
#define BR_EWM_CTRL_INEN(x)  (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_INEN))

/*! @brief Format value for bitfield EWM_CTRL_INEN. */
#define BF_EWM_CTRL_INEN(v)  ((uint8_t)((uint8_t)(v) << BP_EWM_CTRL_INEN) & BM_EWM_CTRL_INEN)

/*! @brief Set the INEN field to a new value. */
#define BW_EWM_CTRL_INEN(x, v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_INEN) = (v))
/*@}*/

/*!
 * @name Register EWM_CTRL, field INTEN[3] (RW)
 *
 * This bit when set and EWM_out is asserted, an interrupt request is generated.
 * To de-assert interrupt request, user should clear this bit by writing 0.
 */
/*@{*/
#define BP_EWM_CTRL_INTEN    (3U)          /*!< Bit position for EWM_CTRL_INTEN. */
#define BM_EWM_CTRL_INTEN    (0x08U)       /*!< Bit mask for EWM_CTRL_INTEN. */
#define BS_EWM_CTRL_INTEN    (1U)          /*!< Bit field size in bits for EWM_CTRL_INTEN. */

/*! @brief Read current value of the EWM_CTRL_INTEN field. */
#define BR_EWM_CTRL_INTEN(x) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_INTEN))

/*! @brief Format value for bitfield EWM_CTRL_INTEN. */
#define BF_EWM_CTRL_INTEN(v) ((uint8_t)((uint8_t)(v) << BP_EWM_CTRL_INTEN) & BM_EWM_CTRL_INTEN)

/*! @brief Set the INTEN field to a new value. */
#define BW_EWM_CTRL_INTEN(x, v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR(x), BP_EWM_CTRL_INTEN) = (v))
/*@}*/

/*******************************************************************************
 * HW_EWM_SERV - Service Register
 ******************************************************************************/

/*!
 * @brief HW_EWM_SERV - Service Register (WORZ)
 *
 * Reset value: 0x00U
 *
 * The SERV register provides the interface from the CPU to the EWM module. It
 * is write-only and reads of this register return zero.
 */
typedef union _hw_ewm_serv
{
    uint8_t U;
    struct _hw_ewm_serv_bitfields
    {
        uint8_t SERVICE : 8;           /*!< [7:0]  */
    } B;
} hw_ewm_serv_t;

/*!
 * @name Constants and macros for entire EWM_SERV register
 */
/*@{*/
#define HW_EWM_SERV_ADDR(x)      ((x) + 0x1U)

#define HW_EWM_SERV(x)           (*(__O hw_ewm_serv_t *) HW_EWM_SERV_ADDR(x))
#define HW_EWM_SERV_RD(x)        (HW_EWM_SERV(x).U)
#define HW_EWM_SERV_WR(x, v)     (HW_EWM_SERV(x).U = (v))
/*@}*/

/*
 * Constants & macros for individual EWM_SERV bitfields
 */

/*!
 * @name Register EWM_SERV, field SERVICE[7:0] (WORZ)
 *
 * The EWM service mechanism requires the CPU to write two values to the SERV
 * register: a first data byte of 0xB4, followed by a second data byte of 0x2C. The
 * EWM service is illegal if either of the following conditions is true. The
 * first or second data byte is not written correctly. The second data byte is not
 * written within a fixed number of peripheral bus cycles of the first data byte.
 * This fixed number of cycles is called EWM_service_time.
 */
/*@{*/
#define BP_EWM_SERV_SERVICE  (0U)          /*!< Bit position for EWM_SERV_SERVICE. */
#define BM_EWM_SERV_SERVICE  (0xFFU)       /*!< Bit mask for EWM_SERV_SERVICE. */
#define BS_EWM_SERV_SERVICE  (8U)          /*!< Bit field size in bits for EWM_SERV_SERVICE. */

/*! @brief Format value for bitfield EWM_SERV_SERVICE. */
#define BF_EWM_SERV_SERVICE(v) ((uint8_t)((uint8_t)(v) << BP_EWM_SERV_SERVICE) & BM_EWM_SERV_SERVICE)

/*! @brief Set the SERVICE field to a new value. */
#define BW_EWM_SERV_SERVICE(x, v) (HW_EWM_SERV_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_EWM_CMPL - Compare Low Register
 ******************************************************************************/

/*!
 * @brief HW_EWM_CMPL - Compare Low Register (RW)
 *
 * Reset value: 0x00U
 *
 * The CMPL register is reset to zero after a CPU reset. This provides no
 * minimum time for the CPU to service the EWM counter. This register can be written
 * only once after a CPU reset. Writing this register more than once generates a
 * bus transfer error.
 */
typedef union _hw_ewm_cmpl
{
    uint8_t U;
    struct _hw_ewm_cmpl_bitfields
    {
        uint8_t COMPAREL : 8;          /*!< [7:0]  */
    } B;
} hw_ewm_cmpl_t;

/*!
 * @name Constants and macros for entire EWM_CMPL register
 */
/*@{*/
#define HW_EWM_CMPL_ADDR(x)      ((x) + 0x2U)

#define HW_EWM_CMPL(x)           (*(__IO hw_ewm_cmpl_t *) HW_EWM_CMPL_ADDR(x))
#define HW_EWM_CMPL_RD(x)        (HW_EWM_CMPL(x).U)
#define HW_EWM_CMPL_WR(x, v)     (HW_EWM_CMPL(x).U = (v))
#define HW_EWM_CMPL_SET(x, v)    (HW_EWM_CMPL_WR(x, HW_EWM_CMPL_RD(x) |  (v)))
#define HW_EWM_CMPL_CLR(x, v)    (HW_EWM_CMPL_WR(x, HW_EWM_CMPL_RD(x) & ~(v)))
#define HW_EWM_CMPL_TOG(x, v)    (HW_EWM_CMPL_WR(x, HW_EWM_CMPL_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual EWM_CMPL bitfields
 */

/*!
 * @name Register EWM_CMPL, field COMPAREL[7:0] (RW)
 *
 * To prevent runaway code from changing this field, software should write to
 * this field after a CPU reset even if the (default) minimum service time is
 * required.
 */
/*@{*/
#define BP_EWM_CMPL_COMPAREL (0U)          /*!< Bit position for EWM_CMPL_COMPAREL. */
#define BM_EWM_CMPL_COMPAREL (0xFFU)       /*!< Bit mask for EWM_CMPL_COMPAREL. */
#define BS_EWM_CMPL_COMPAREL (8U)          /*!< Bit field size in bits for EWM_CMPL_COMPAREL. */

/*! @brief Read current value of the EWM_CMPL_COMPAREL field. */
#define BR_EWM_CMPL_COMPAREL(x) (HW_EWM_CMPL(x).U)

/*! @brief Format value for bitfield EWM_CMPL_COMPAREL. */
#define BF_EWM_CMPL_COMPAREL(v) ((uint8_t)((uint8_t)(v) << BP_EWM_CMPL_COMPAREL) & BM_EWM_CMPL_COMPAREL)

/*! @brief Set the COMPAREL field to a new value. */
#define BW_EWM_CMPL_COMPAREL(x, v) (HW_EWM_CMPL_WR(x, v))
/*@}*/

/*******************************************************************************
 * HW_EWM_CMPH - Compare High Register
 ******************************************************************************/

/*!
 * @brief HW_EWM_CMPH - Compare High Register (RW)
 *
 * Reset value: 0xFFU
 *
 * The CMPH register is reset to 0xFF after a CPU reset. This provides a maximum
 * of 256 clocks time, for the CPU to service the EWM counter. This register can
 * be written only once after a CPU reset. Writing this register more than once
 * generates a bus transfer error. The valid values for CMPH are up to 0xFE
 * because the EWM counter never expires when CMPH = 0xFF. The expiration happens only
 * if EWM counter is greater than CMPH.
 */
typedef union _hw_ewm_cmph
{
    uint8_t U;
    struct _hw_ewm_cmph_bitfields
    {
        uint8_t COMPAREH : 8;          /*!< [7:0]  */
    } B;
} hw_ewm_cmph_t;

/*!
 * @name Constants and macros for entire EWM_CMPH register
 */
/*@{*/
#define HW_EWM_CMPH_ADDR(x)      ((x) + 0x3U)

#define HW_EWM_CMPH(x)           (*(__IO hw_ewm_cmph_t *) HW_EWM_CMPH_ADDR(x))
#define HW_EWM_CMPH_RD(x)        (HW_EWM_CMPH(x).U)
#define HW_EWM_CMPH_WR(x, v)     (HW_EWM_CMPH(x).U = (v))
#define HW_EWM_CMPH_SET(x, v)    (HW_EWM_CMPH_WR(x, HW_EWM_CMPH_RD(x) |  (v)))
#define HW_EWM_CMPH_CLR(x, v)    (HW_EWM_CMPH_WR(x, HW_EWM_CMPH_RD(x) & ~(v)))
#define HW_EWM_CMPH_TOG(x, v)    (HW_EWM_CMPH_WR(x, HW_EWM_CMPH_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual EWM_CMPH bitfields
 */

/*!
 * @name Register EWM_CMPH, field COMPAREH[7:0] (RW)
 *
 * To prevent runaway code from changing this field, software should write to
 * this field after a CPU reset even if the (default) maximum service time is
 * required.
 */
/*@{*/
#define BP_EWM_CMPH_COMPAREH (0U)          /*!< Bit position for EWM_CMPH_COMPAREH. */
#define BM_EWM_CMPH_COMPAREH (0xFFU)       /*!< Bit mask for EWM_CMPH_COMPAREH. */
#define BS_EWM_CMPH_COMPAREH (8U)          /*!< Bit field size in bits for EWM_CMPH_COMPAREH. */

/*! @brief Read current value of the EWM_CMPH_COMPAREH field. */
#define BR_EWM_CMPH_COMPAREH(x) (HW_EWM_CMPH(x).U)

/*! @brief Format value for bitfield EWM_CMPH_COMPAREH. */
#define BF_EWM_CMPH_COMPAREH(v) ((uint8_t)((uint8_t)(v) << BP_EWM_CMPH_COMPAREH) & BM_EWM_CMPH_COMPAREH)

/*! @brief Set the COMPAREH field to a new value. */
#define BW_EWM_CMPH_COMPAREH(x, v) (HW_EWM_CMPH_WR(x, v))
/*@}*/

/*******************************************************************************
 * hw_ewm_t - module struct
 ******************************************************************************/
/*!
 * @brief All EWM module registers.
 */
#pragma pack(1)
typedef struct _hw_ewm
{
    __IO hw_ewm_ctrl_t CTRL;               /*!< [0x0] Control Register */
    __O hw_ewm_serv_t SERV;                /*!< [0x1] Service Register */
    __IO hw_ewm_cmpl_t CMPL;               /*!< [0x2] Compare Low Register */
    __IO hw_ewm_cmph_t CMPH;               /*!< [0x3] Compare High Register */
} hw_ewm_t;
#pragma pack()

/*! @brief Macro to access all EWM registers. */
/*! @param x EWM module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_EWM(EWM_BASE)</code>. */
#define HW_EWM(x)      (*(hw_ewm_t *)(x))

#endif /* __HW_EWM_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
