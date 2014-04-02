/****************************************************************************
 *  (c) Copyright 2007 Wi-Fi Alliance.  All Rights Reserved
 *
 *  LICENSE
 *
 *  License is granted only to Wi-Fi Alliance members and designated
 *  contractors ($B!H(BAuthorized Licensees$B!I(B)..AN  Authorized Licensees are granted
 *  the non-exclusive, worldwide, limited right to use, copy, import, export
 *  and distribute this software:
 *  (i) solely for noncommercial applications and solely for testing Wi-Fi
 *  equipment; and
 *  (ii) solely for the purpose of embedding the software into Authorized
 *  Licensee$B!G(Bs proprietary equipment and software products for distribution to
 *  its customers under a license with at least the same restrictions as
 *  contained in this License, including, without limitation, the disclaimer of
 *  warranty and limitation of liability, below..AN  The distribution rights
 *  granted in clause
 *  (ii), above, include distribution to third party companies who will
 *  redistribute the Authorized Licensee$B!G(Bs product to their customers with or
 *  without such third party$B!G(Bs private label. Other than expressly granted
 *  herein, this License is not transferable or sublicensable, and it does not
 *  extend to and may not be used with non-Wi-Fi applications..AN  Wi-Fi Alliance
 *  reserves all rights not expressly granted herein..AN 
 *.AN 
 *  Except as specifically set forth above, commercial derivative works of
 *  this software or applications that use the Wi-Fi scripts generated by this
 *  software are NOT AUTHORIZED without specific prior written permission from
 *  Wi-Fi Alliance.
 *.AN 
 *  Non-Commercial derivative works of this software for internal use are
 *  authorized and are limited by the same restrictions; provided, however,
 *  that the Authorized Licensee shall provide Wi-Fi Alliance with a copy of
 *  such derivative works under a perpetual, payment-free license to use,
 *  modify, and distribute such derivative works for purposes of testing Wi-Fi
 *  equipment.
 *.AN 
 *  Neither the name of the author nor "Wi-Fi Alliance" may be used to endorse
 *  or promote products that are derived from or that use this software without
 *  specific prior written permission from Wi-Fi Alliance.
 *
 *  THIS SOFTWARE IS PROVIDED BY WI-FI ALLIANCE "AS IS" AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 *  OF MERCHANTABILITY, NON-INFRINGEMENT AND FITNESS FOR A.AN PARTICULAR PURPOSE,
 *  ARE DISCLAIMED. IN NO EVENT SHALL WI-FI ALLIANCE BE LIABLE FOR ANY DIRECT,
 *  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, THE COST OF PROCUREMENT OF SUBSTITUTE
 *  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 *  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE) ARISING IN ANY WAY OUT OF
 *  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. ******************************************************************************
 */
/*
 *   Revision History: WINv03.00.00 - Simga 3.0 Release, supports TGn Program including WMM and WPA2
 */

/*
 * wfa_types.h:
 *   Defines general types and enum 
 */
#ifndef _WFA_TYPES_H
#define _WFA_TYPES_H 

//#define WFA_P2P

#define WFA_IF_NAME_LEN 16
#define WFA_VERSION_LEN 64
#define WFA_SSID_NAME_LEN 64
#define WFA_IP_ADDR_STR_LEN  16
#define WFA_IP_MASK_STR_LEN  16
#define WFA_MAX_DNS_NUM      2
#define WFA_MAC_ADDR_STR_LEN 20

#define WFA_IP_V6_ADDR_STR_LEN  48
#define WFA_CLI_CMD_RESP_LEN 512

#ifdef WFA_P2P
#define WFA_P2P_DEVID_LEN 16
#define WFA_P2P_GRP_ID_LEN 128
#define WFA_WPS_PIN_LEN 256
#define WFA_PSK_PP_LEN	256

#endif
#define IF_80211   1
#define IF_ETH     2
#ifdef _WINDOWS
#define WMM_ATHEROS		1
#define WMM_BROADCOMM	2
#define WMM_INTEL		3
#define WMM_MARVELL		4
#endif
typedef unsigned short WORD;
typedef unsigned char BYTE;

enum _response_staus
{
       STATUS_RUNNING = 0x0001,
       STATUS_INVALID = 0x0002,
       STATUS_ERROR = 0x0003,
       STATUS_COMPLETE = 0x0004,
};

typedef int BOOL;

#ifndef    TRUE
    #define    FALSE       -1
    #define    TRUE        0
    #define    DONE        1
#endif

typedef enum returnTypes
{
   WFA_SUCCESS = 0,
   WFA_FAILURE = 1,
} retType_t;

#endif
