/***********************************************************************************************************************
 * Copyright [2020-2021] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics Corporation and/or its affiliates and may only
 * be used with products of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.
 * Renesas products are sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for
 * the selection and use of Renesas products and Renesas assumes no liability.  No license, express or implied, to any
 * intellectual property right is granted by Renesas.  This software is protected under all applicable laws, including
 * copyright laws. Renesas reserves the right to change or discontinue this software and/or this documentation.
 * THE SOFTWARE AND DOCUMENTATION IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND
 * TO THE FULLEST EXTENT PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY,
 * INCLUDING WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE
 * SOFTWARE OR DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR
 * DOCUMENTATION (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER,
 * INCLUDING, WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY
 * LOST PROFITS, OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * File Name    : riic_iobitmask.h
 * Version      : 1.00
 * Description  : IO bit mask file for riic.
 *********************************************************************************************************************/

#ifndef RIIC_IOBITMASK_H
#define RIIC_IOBITMASK_H

#define R_RIIC0_ICCR1_SDAI_Msk      (0x00000001UL)
#define R_RIIC0_ICCR1_SDAI_Pos      (0UL)
#define R_RIIC0_ICCR1_SCLI_Msk      (0x00000002UL)
#define R_RIIC0_ICCR1_SCLI_Pos      (1UL)
#define R_RIIC0_ICCR1_SDAO_Msk      (0x00000004UL)
#define R_RIIC0_ICCR1_SDAO_Pos      (2UL)
#define R_RIIC0_ICCR1_SCLO_Msk      (0x00000008UL)
#define R_RIIC0_ICCR1_SCLO_Pos      (3UL)
#define R_RIIC0_ICCR1_SOWP_Msk      (0x00000010UL)
#define R_RIIC0_ICCR1_SOWP_Pos      (4UL)
#define R_RIIC0_ICCR1_CLO_Msk       (0x00000020UL)
#define R_RIIC0_ICCR1_CLO_Pos       (5UL)
#define R_RIIC0_ICCR1_IICRST_Msk    (0x00000040UL)
#define R_RIIC0_ICCR1_IICRST_Pos    (6UL)
#define R_RIIC0_ICCR1_ICE_Msk       (0x00000080UL)
#define R_RIIC0_ICCR1_ICE_Pos       (7UL)
#define R_RIIC0_ICCR2_ST_Msk        (0x00000002UL)
#define R_RIIC0_ICCR2_ST_Pos        (1UL)
#define R_RIIC0_ICCR2_RS_Msk        (0x00000004UL)
#define R_RIIC0_ICCR2_RS_Pos        (2UL)
#define R_RIIC0_ICCR2_SP_Msk        (0x00000008UL)
#define R_RIIC0_ICCR2_SP_Pos        (3UL)
#define R_RIIC0_ICCR2_TRS_Msk       (0x00000020UL)
#define R_RIIC0_ICCR2_TRS_Pos       (5UL)
#define R_RIIC0_ICCR2_MST_Msk       (0x00000040UL)
#define R_RIIC0_ICCR2_MST_Pos       (6UL)
#define R_RIIC0_ICCR2_BBSY_Msk      (0x00000080UL)
#define R_RIIC0_ICCR2_BBSY_Pos      (7UL)
#define R_RIIC0_ICMR1_BC_Msk        (0x00000007UL)
#define R_RIIC0_ICMR1_BC_Pos        (0UL)
#define R_RIIC0_ICMR1_BCWP_Msk      (0x00000008UL)
#define R_RIIC0_ICMR1_BCWP_Pos      (3UL)
#define R_RIIC0_ICMR1_CKS_Msk       (0x00000070UL)
#define R_RIIC0_ICMR1_CKS_Pos       (4UL)
#define R_RIIC0_ICMR2_TMOS_Msk      (0x00000001UL)
#define R_RIIC0_ICMR2_TMOS_Pos      (0UL)
#define R_RIIC0_ICMR2_TMOL_Msk      (0x00000002UL)
#define R_RIIC0_ICMR2_TMOL_Pos      (1UL)
#define R_RIIC0_ICMR2_TMOH_Msk      (0x00000004UL)
#define R_RIIC0_ICMR2_TMOH_Pos      (2UL)
#define R_RIIC0_ICMR2_SDDL_Msk      (0x00000070UL)
#define R_RIIC0_ICMR2_SDDL_Pos      (4UL)
#define R_RIIC0_ICMR2_DLCS_Msk      (0x00000080UL)
#define R_RIIC0_ICMR2_DLCS_Pos      (7UL)
#define R_RIIC0_ICMR3_NF_Msk        (0x00000003UL)
#define R_RIIC0_ICMR3_NF_Pos        (0UL)
#define R_RIIC0_ICMR3_ACKBR_Msk     (0x00000004UL)
#define R_RIIC0_ICMR3_ACKBR_Pos     (2UL)
#define R_RIIC0_ICMR3_ACKBT_Msk     (0x00000008UL)
#define R_RIIC0_ICMR3_ACKBT_Pos     (3UL)
#define R_RIIC0_ICMR3_ACKWP_Msk     (0x00000010UL)
#define R_RIIC0_ICMR3_ACKWP_Pos     (4UL)
#define R_RIIC0_ICMR3_RDRFS_Msk     (0x00000020UL)
#define R_RIIC0_ICMR3_RDRFS_Pos     (5UL)
#define R_RIIC0_ICMR3_WAIT_Msk      (0x00000040UL)
#define R_RIIC0_ICMR3_WAIT_Pos      (6UL)
#define R_RIIC0_ICMR3_SMBE_Msk      (0x00000080UL)
#define R_RIIC0_ICMR3_SMBE_Pos      (7UL)
#define R_RIIC0_ICFER_TMOE_Msk      (0x00000001UL)
#define R_RIIC0_ICFER_TMOE_Pos      (0UL)
#define R_RIIC0_ICFER_MALE_Msk      (0x00000002UL)
#define R_RIIC0_ICFER_MALE_Pos      (1UL)
#define R_RIIC0_ICFER_NALE_Msk      (0x00000004UL)
#define R_RIIC0_ICFER_NALE_Pos      (2UL)
#define R_RIIC0_ICFER_SALE_Msk      (0x00000008UL)
#define R_RIIC0_ICFER_SALE_Pos      (3UL)
#define R_RIIC0_ICFER_NACKE_Msk     (0x00000010UL)
#define R_RIIC0_ICFER_NACKE_Pos     (4UL)
#define R_RIIC0_ICFER_NFE_Msk       (0x00000020UL)
#define R_RIIC0_ICFER_NFE_Pos       (5UL)
#define R_RIIC0_ICFER_SCLE_Msk      (0x00000040UL)
#define R_RIIC0_ICFER_SCLE_Pos      (6UL)
#define R_RIIC0_ICFER_FMPE_Msk      (0x00000080UL)
#define R_RIIC0_ICFER_FMPE_Pos      (7UL)
#define R_RIIC0_ICSER_SAR0_Msk      (0x00000001UL)
#define R_RIIC0_ICSER_SAR0_Pos      (0UL)
#define R_RIIC0_ICSER_SAR1_Msk      (0x00000002UL)
#define R_RIIC0_ICSER_SAR1_Pos      (1UL)
#define R_RIIC0_ICSER_SAR2_Msk      (0x00000004UL)
#define R_RIIC0_ICSER_SAR2_Pos      (2UL)
#define R_RIIC0_ICSER_GCE_Msk       (0x00000008UL)
#define R_RIIC0_ICSER_GCE_Pos       (3UL)
#define R_RIIC0_ICSER_DIDE_Msk      (0x00000020UL)
#define R_RIIC0_ICSER_DIDE_Pos      (5UL)
#define R_RIIC0_ICSER_HOAE_Msk      (0x00000080UL)
#define R_RIIC0_ICSER_HOAE_Pos      (7UL)
#define R_RIIC0_ICIER_TMOIE_Msk     (0x00000001UL)
#define R_RIIC0_ICIER_TMOIE_Pos     (0UL)
#define R_RIIC0_ICIER_ALIE_Msk      (0x00000002UL)
#define R_RIIC0_ICIER_ALIE_Pos      (1UL)
#define R_RIIC0_ICIER_STIE_Msk      (0x00000004UL)
#define R_RIIC0_ICIER_STIE_Pos      (2UL)
#define R_RIIC0_ICIER_SPIE_Msk      (0x00000008UL)
#define R_RIIC0_ICIER_SPIE_Pos      (3UL)
#define R_RIIC0_ICIER_NAKIE_Msk     (0x00000010UL)
#define R_RIIC0_ICIER_NAKIE_Pos     (4UL)
#define R_RIIC0_ICIER_RIE_Msk       (0x00000020UL)
#define R_RIIC0_ICIER_RIE_Pos       (5UL)
#define R_RIIC0_ICIER_TEIE_Msk      (0x00000040UL)
#define R_RIIC0_ICIER_TEIE_Pos      (6UL)
#define R_RIIC0_ICIER_TIE_Msk       (0x00000080UL)
#define R_RIIC0_ICIER_TIE_Pos       (7UL)
#define R_RIIC0_ICSR1_AAS0_Msk      (0x00000001UL)
#define R_RIIC0_ICSR1_AAS0_Pos      (0UL)
#define R_RIIC0_ICSR1_AAS1_Msk      (0x00000002UL)
#define R_RIIC0_ICSR1_AAS1_Pos      (1UL)
#define R_RIIC0_ICSR1_AAS2_Msk      (0x00000004UL)
#define R_RIIC0_ICSR1_AAS2_Pos      (2UL)
#define R_RIIC0_ICSR1_GCA_Msk       (0x00000008UL)
#define R_RIIC0_ICSR1_GCA_Pos       (3UL)
#define R_RIIC0_ICSR1_DID_Msk       (0x00000020UL)
#define R_RIIC0_ICSR1_DID_Pos       (5UL)
#define R_RIIC0_ICSR1_HOA_Msk       (0x00000080UL)
#define R_RIIC0_ICSR1_HOA_Pos       (7UL)
#define R_RIIC0_ICSR2_TMOF_Msk      (0x00000001UL)
#define R_RIIC0_ICSR2_TMOF_Pos      (0UL)
#define R_RIIC0_ICSR2_AL_Msk        (0x00000002UL)
#define R_RIIC0_ICSR2_AL_Pos        (1UL)
#define R_RIIC0_ICSR2_START_Msk     (0x00000004UL)
#define R_RIIC0_ICSR2_START_Pos     (2UL)
#define R_RIIC0_ICSR2_STOP_Msk      (0x00000008UL)
#define R_RIIC0_ICSR2_STOP_Pos      (3UL)
#define R_RIIC0_ICSR2_NACKF_Msk     (0x00000010UL)
#define R_RIIC0_ICSR2_NACKF_Pos     (4UL)
#define R_RIIC0_ICSR2_RDRF_Msk      (0x00000020UL)
#define R_RIIC0_ICSR2_RDRF_Pos      (5UL)
#define R_RIIC0_ICSR2_TEND_Msk      (0x00000040UL)
#define R_RIIC0_ICSR2_TEND_Pos      (6UL)
#define R_RIIC0_ICSR2_TDRE_Msk      (0x00000080UL)
#define R_RIIC0_ICSR2_TDRE_Pos      (7UL)
#define R_RIIC0_ICSAR0_SVA0_Msk     (0x00000001UL)
#define R_RIIC0_ICSAR0_SVA0_Pos     (0UL)
#define R_RIIC0_ICSAR0_SVA_Msk      (0x000003FEUL)
#define R_RIIC0_ICSAR0_SVA_Pos      (1UL)
#define R_RIIC0_ICSAR0_FS0_Msk      (0x00008000UL)
#define R_RIIC0_ICSAR0_FS0_Pos      (15UL)
#define R_RIIC0_ICSAR1_SVA0_Msk     (0x00000001UL)
#define R_RIIC0_ICSAR1_SVA0_Pos     (0UL)
#define R_RIIC0_ICSAR1_SVA_Msk      (0x000003FEUL)
#define R_RIIC0_ICSAR1_SVA_Pos      (1UL)
#define R_RIIC0_ICSAR1_FS1_Msk      (0x00008000UL)
#define R_RIIC0_ICSAR1_FS1_Pos      (15UL)
#define R_RIIC0_ICSAR2_SVA0_Msk     (0x00000001UL)
#define R_RIIC0_ICSAR2_SVA0_Pos     (0UL)
#define R_RIIC0_ICSAR2_SVA_Msk      (0x000003FEUL)
#define R_RIIC0_ICSAR2_SVA_Pos      (1UL)
#define R_RIIC0_ICSAR2_FS2_Msk      (0x00008000UL)
#define R_RIIC0_ICSAR2_FS2_Pos      (15UL)
#define R_RIIC0_ICBRL_BRL_Msk       (0x0000001FUL)
#define R_RIIC0_ICBRL_BRL_Pos       (0UL)
#define R_RIIC0_ICBRH_BRH_Msk       (0x0000001FUL)
#define R_RIIC0_ICBRH_BRH_Pos       (0UL)
#define R_RIIC0_ICDRT_DRT_Msk       (0x000000FFUL)
#define R_RIIC0_ICDRT_DRT_Pos       (0UL)
#define R_RIIC0_ICDRR_DRR_Msk       (0x000000FFUL)
#define R_RIIC0_ICDRR_DRR_Pos       (0UL)

#endif                                 /* RIIC_IOBITMASK_H */
