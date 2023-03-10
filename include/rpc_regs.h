/*
 * Copyright (c) 2021, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RPC_REGS_H__
#define __RPC_REGS_H__

#define	RPC_CMNCR		(RZG2L_SPIMULT_BASE + 0x0000U)	// R/W
#define	RPC_SSLDR		(RZG2L_SPIMULT_BASE + 0x0004U)	// R/W
#define	RPC_DRCR		(RZG2L_SPIMULT_BASE + 0x000CU)	// R/W
#define	RPC_DRCMR		(RZG2L_SPIMULT_BASE + 0x0010U)	// R/W
#define	RPC_DREAR		(RZG2L_SPIMULT_BASE + 0x0014U)	// R/W
#define	RPC_DROPR		(RZG2L_SPIMULT_BASE + 0x0018U)	// R/W
#define	RPC_DRENR		(RZG2L_SPIMULT_BASE + 0x001CU)	// R/W
#define	RPC_SMCR		(RZG2L_SPIMULT_BASE + 0x0020U)	// R/W
#define	RPC_SMCMR		(RZG2L_SPIMULT_BASE + 0x0024U)	// R/W
#define	RPC_SMADR		(RZG2L_SPIMULT_BASE + 0x0028U)	// R/W
#define	RPC_SMOPR		(RZG2L_SPIMULT_BASE + 0x002CU)	// R/W
#define	RPC_SMENR		(RZG2L_SPIMULT_BASE + 0x0030U)	// R/W
#define	RPC_SMRDR0		(RZG2L_SPIMULT_BASE + 0x0038U)	// R
#define	RPC_SMRDR1		(RZG2L_SPIMULT_BASE + 0x003CU)	// R
#define	RPC_SMWDR0		(RZG2L_SPIMULT_BASE + 0x0040U)	// R/W
#define	RPC_SMWDR1		(RZG2L_SPIMULT_BASE + 0x0044U)	// R/W
#define	RPC_CMNSR		(RZG2L_SPIMULT_BASE + 0x0048U)	// R
#define	RPC_DRDMCR		(RZG2L_SPIMULT_BASE + 0x0058U)	// R/W
#define	RPC_DRDRENR		(RZG2L_SPIMULT_BASE + 0x005CU)	// R/W
#define	RPC_SMDMCR		(RZG2L_SPIMULT_BASE + 0x0060U)	// R/W
#define	RPC_SMDRENR		(RZG2L_SPIMULT_BASE + 0x0064U)	// R/W
#define RPC_PHYADJ1		(RZG2L_SPIMULT_BASE + 0x0070U)
#define RPC_PHYADJ2		(RZG2L_SPIMULT_BASE + 0x0074U)
#define	RPC_PHYCNT		(RZG2L_SPIMULT_BASE + 0x007CU)	// R/W
#define	RPC_OFFSET1		(RZG2L_SPIMULT_BASE + 0x0080U)	//
#define	RPC_PHYINT		(RZG2L_SPIMULT_BASE + 0x0088U)	// R/W
#define	RPC_WRBUF		(RZG2L_SPIMULT_WBUF_BASE)	// W	RPC Write buffer (Access size=4/8/16/32/64Byte)

#define RPCIF_CMNCR_MD		(1 << 31)
#define RPCIF_CMNCR_SFDE	(1 << 24) /* undocumented but must be set */
#define RPCIF_CMNCR_MOIIO3(val)	(((val) & 0x3) << 22)
#define RPCIF_CMNCR_MOIIO2(val)	(((val) & 0x3) << 20)
#define RPCIF_CMNCR_MOIIO1(val)	(((val) & 0x3) << 18)
#define RPCIF_CMNCR_MOIIO0(val)	(((val) & 0x3) << 16)
#define RPCIF_CMNCR_MOIIO_HIZ	(RPCIF_CMNCR_MOIIO0(3) | \
				 RPCIF_CMNCR_MOIIO1(3) | \
				 RPCIF_CMNCR_MOIIO2(3) | RPCIF_CMNCR_MOIIO3(3))
#define RPCIF_CMNCR_IO3FV(val)	(((val) & 0x3) << 14) /* documented for RZ/G2L */
#define RPCIF_CMNCR_IO2FV(val)	(((val) & 0x3) << 12) /* documented for RZ/G2L */
#define RPCIF_CMNCR_IO0FV(val)	(((val) & 0x3) << 8)
#define RPCIF_CMNCR_IOFV_HIZ	(RPCIF_CMNCR_IO0FV(3) | RPCIF_CMNCR_IO2FV(3) | \
				 RPCIF_CMNCR_IO3FV(3))
#define RPCIF_CMNCR_BSZ(val)	(((val) & 0x3) << 0)


#endif	/* __RPC_REGS_H__ */
