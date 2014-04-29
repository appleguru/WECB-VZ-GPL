#ifndef INCLUDE_UPMIB_H
#define INCLUDE_UPMIB_H
#include "apmib.h"
#include "mibtbl.h"

/*
 * The 'id' in 'struct upmib' is the same as the defination in apmib.h.
 *eg:it should be 'MIB_MIB_VER' according to "#define MIB_MIB_VER 655 " in apmib.h
 *
 * The 'name' in 'struct upmib' is the same as the defination in mibdef.h
 *eg:it should be 'MIB_VER' according to "MIBDEF(unsigned char,   mibVer, , MIB_VER,    BYTE_T, APMIB_T, 5, 0)" 
 *defined in mibdef.h
 *
 * If you want to update MIB current setting value,you must change MIB VERSION in 'UPMIB_T update_mib[]' first.
 * Add the new MIB in 'UPMIB_T new_mib'. 
 * Add the MIB that you want to update its value in 'UPMIB_T update_mib[]'.
 *
 */

#define UPMIB_VALUE_MAX 128
#define UPMIB_NAME_MAX 64

 
typedef struct upmib{
        int id;				
        unsigned char name[UPMIB_NAME_MAX]; 	
	unsigned char value[UPMIB_VALUE_MAX];	//the mib value
	TYPE_T type;
}UPMIB_T, *UPMIB_Tp;

#define AEI_MIB_VER		"14" //this macro must update when modify update_mib or new_mib
 
UPMIB_T update_mib[] = {
//add mib info here
	// Current Setting
        {MIB_MIB_VER,	"MIB_VER",	AEI_MIB_VER, 	BYTE_T},
        {MIB_OP_MODE,	"OP_MODE",	"1",			BYTE_T},
		{MIB_DHCP,		"DHCP",		"1",			BYTE_T},
#ifdef AEI_WIFI
		{MIB_HW_11N_TRSWITCH,	"HW_WLAN1_11N_TRSWITCH",	"1",	BYTE_T},
			
		{MIB_WLAN_BAND,		"WLAN1_BAND",		"10",	BYTE_T},
		{MIB_WLAN_CHANNEL,	"WLAN0_CHANNEL",	"0",	BYTE_T},
		{MIB_WLAN_CHANNEL,	"WLAN1_CHANNEL",	"0",	BYTE_T},

		{MIB_WLAN_COEXIST_ENABLED,	"WLAN0_COEXIST_ENABLED",		"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,	"WLAN1_COEXIST_ENABLED",		"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,	"WLAN0_VAP0_COEXIST_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,	"WLAN1_VAP0_COEXIST_ENABLED",	"1",	BYTE_T},

		{MIB_WLAN_AGGREGATION,		"WLAN0_VAP0_AGGREGATION",		"1",	BYTE_T},
		{MIB_WLAN_AGGREGATION,		"WLAN1_VAP0_AGGREGATION",		"1",	BYTE_T},
			
		{MIB_WLAN_CONTROL_SIDEBAND,	"WLAN0_CONTROL_SIDEBAND",		"0",	BYTE_T},
		{MIB_WLAN_CONTROL_SIDEBAND,	"WLAN1_CONTROL_SIDEBAND",		"0",	BYTE_T},

		{MIB_WLAN_SHORT_GI,	"WLAN0_SHORT_GI",	"0",	BYTE_T},
		{MIB_WLAN_SHORT_GI,	"WLAN1_SHORT_GI",	"0",	BYTE_T},

		{MIB_WLAN_RATE_ADAPTIVE_ENABLED,	"WLAN0_RATE_ADAPTIVE_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_RATE_ADAPTIVE_ENABLED,	"WLAN1_RATE_ADAPTIVE_ENABLED",	"0",	BYTE_T},

		{MIB_WLAN_FIX_RATE,	"WLAN0_FIX_RATE",	"4096",	WORD_T},
		{MIB_WLAN_FIX_RATE,	"WLAN1_FIX_RATE",	"4096",	WORD_T},

		{MIB_WLAN_WPA_AUTH,	"WLAN0_VAP0_WPA_AUTH",	"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN0_VAP1_WPA_AUTH",	"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN0_VAP2_WPA_AUTH",	"0",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN0_VAP3_WPA_AUTH",	"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN1_VAP0_WPA_AUTH",	"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN1_VAP1_WPA_AUTH",	"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN1_VAP2_WPA_AUTH",	"0",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,	"WLAN1_VAP3_WPA_AUTH",	"2",	BYTE_T},

		{MIB_WLAN_ENCRYPT,	"WLAN0_VAP0_ENCRYPT",	"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN0_VAP1_ENCRYPT",	"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN0_VAP2_ENCRYPT",	"0",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN0_VAP3_ENCRYPT",	"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN1_VAP0_ENCRYPT",	"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN1_VAP1_ENCRYPT",	"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN1_VAP2_ENCRYPT",	"0",	BYTE_T},
		{MIB_WLAN_ENCRYPT,	"WLAN1_VAP3_ENCRYPT",	"6",	BYTE_T},

		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN0_VAP0_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN0_VAP1_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN0_VAP2_WPA_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN0_VAP3_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN1_VAP0_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN1_VAP1_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN1_VAP2_WPA_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"WLAN1_VAP3_WPA_CIPHER_SUITE",		"3",	BYTE_T},

		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN0_VAP0_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN0_VAP1_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN0_VAP2_WPA2_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN0_VAP3_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN1_VAP0_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN1_VAP1_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN1_VAP2_WPA2_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,	"WLAN1_VAP3_WPA2_CIPHER_SUITE",		"3",	BYTE_T},

		{MIB_WLAN_WLAN_DISABLED,		"WLAN0_VAP0_WLAN_DISABLED",	"0",	BYTE_T},
		{MIB_WLAN_WLAN_DISABLED,		"WLAN1_VAP0_WLAN_DISABLED",	"0",	BYTE_T},

		{MIB_WLAN_WSC_DISABLE,		"WLAN0_WSC_DISABLE",		"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN0_VAP0_WSC_DISABLE",	"0",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN0_VAP1_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN0_VAP2_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN0_VAP3_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN1_WSC_DISABLE",		"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN1_VAP0_WSC_DISABLE",	"0",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN1_VAP1_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN1_VAP2_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"WLAN1_VAP3_WSC_DISABLE",	"1",	BYTE_T},

        {MIB_WLAN_WSC_CONFIGURED,   "WLAN0_WSC_CONFIGURED",         "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN0_VAP0_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN0_VAP1_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN0_VAP2_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN0_VAP3_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN1_WSC_CONFIGURED",         "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN1_VAP0_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN1_VAP1_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN1_VAP2_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "WLAN1_VAP3_WSC_CONFIGURED",    "1",    BYTE_T},
			
		{MIB_WLAN_HIDDEN_SSID, 	"WLAN0_HIDDEN_SSID",	"1",	BYTE_T},
		{MIB_WLAN_HIDDEN_SSID, 	"WLAN1_HIDDEN_SSID",	"1",	BYTE_T},
			
		{MIB_WLAN_IAPP_DISABLED,	"WLAN0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN0_VAP0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN0_VAP1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN0_VAP2_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN0_VAP3_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN1_VAP0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN1_VAP1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN1_VAP2_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"WLAN1_VAP3_IAPP_DISABLED",	"1",	BYTE_T},

		{MIB_WLAN_UAPSD_ENABLED,	"WLAN0_UAPSD_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN0_VAP0_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN0_VAP1_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN0_VAP2_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN0_VAP3_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN1_UAPSD_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN1_VAP0_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN1_VAP1_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN1_VAP2_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"WLAN1_VAP3_UAPSD_ENABLED",	"1",	BYTE_T},

		{MIB_WLAN_WSC_UPNP_ENABLED, 	"WLAN0_VAP0_WSC_UPNP_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_WSC_UPNP_ENABLED, 	"WLAN1_VAP0_WSC_UPNP_ENABLED",	"1",	BYTE_T},
#endif
        {0}
};
 
UPMIB_T new_mib[] = {
//add mib info here
	// Default Setting
	// TODO: If remove prefix 'DEF_' per SDK Guide, not work.
        {MIB_MIB_VER,           "DEF_MIB_VER",              AEI_MIB_VER,	BYTE_T},
        {MIB_OP_MODE,           "DEF_OP_MODE",              "1",	BYTE_T},
        {MIB_DHCP,              "DEF_DHCP",                 "1",	BYTE_T},
#ifdef AEI_WIFI
		{MIB_WLAN_BAND, 		"DEF_WLAN1_BAND",			"10",	BYTE_T},
		{MIB_WLAN_CHANNEL, 		"DEF_WLAN0_CHANNEL",		"0",	BYTE_T},
		{MIB_WLAN_CHANNEL,		"DEF_WLAN1_CHANNEL",		"0",	BYTE_T},
#ifdef CONFIG_RTL_FLASH_DUAL_IMAGE_ENABLE
	{MIB_DUALBANK_ENABLED,              "DEF_DUALBANK_ENABLED",                 "1",	BYTE_T},
#endif
		{MIB_WLAN_COEXIST_ENABLED,		"DEF_WLAN0_COEXIST_ENABLED",			"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,		"DEF_WLAN1_COEXIST_ENABLED",			"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,		"DEF_WLAN0_VAP0_COEXIST_ENABLED",		"1",	BYTE_T},
		{MIB_WLAN_COEXIST_ENABLED,		"DEF_WLAN1_VAP0_COEXIST_ENABLED",		"1",	BYTE_T},

		{MIB_WLAN_AGGREGATION,		"DEF_WLAN0_VAP0_AGGREGATION",		"1",	BYTE_T},
		{MIB_WLAN_AGGREGATION,		"DEF_WLAN1_VAP0_AGGREGATION",		"1",	BYTE_T},
			
		{MIB_WLAN_CONTROL_SIDEBAND,		"DEF_WLAN0_CONTROL_SIDEBAND",		"0",	BYTE_T},
		{MIB_WLAN_CONTROL_SIDEBAND,		"DEF_WLAN1_CONTROL_SIDEBAND",		"0",	BYTE_T},

		{MIB_WLAN_SHORT_GI,		"DEF_WLAN0_SHORT_GI",		"0",	BYTE_T},
		{MIB_WLAN_SHORT_GI,		"DEF_WLAN1_SHORT_GI",		"0",	BYTE_T},

		{MIB_WLAN_RATE_ADAPTIVE_ENABLED,		"DEF_WLAN0_RATE_ADAPTIVE_ENABLED",		"0",	BYTE_T},
		{MIB_WLAN_RATE_ADAPTIVE_ENABLED,		"DEF_WLAN1_RATE_ADAPTIVE_ENABLED",		"0",	BYTE_T},

		{MIB_WLAN_FIX_RATE,		"DEF_WLAN0_FIX_RATE",		"4096",	WORD_T},
		{MIB_WLAN_FIX_RATE,		"DEF_WLAN1_FIX_RATE",		"4096",	WORD_T},

		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN0_VAP0_WPA_AUTH",		"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN0_VAP1_WPA_AUTH",		"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN0_VAP2_WPA_AUTH",		"0",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN0_VAP3_WPA_AUTH",		"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN1_VAP0_WPA_AUTH",		"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN1_VAP1_WPA_AUTH",		"2",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN1_VAP2_WPA_AUTH",		"0",	BYTE_T},
		{MIB_WLAN_WPA_AUTH,		"DEF_WLAN1_VAP3_WPA_AUTH",		"2",	BYTE_T},

		{MIB_WLAN_ENCRYPT,		"DEF_WLAN0_VAP0_ENCRYPT",		"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN0_VAP1_ENCRYPT",		"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN0_VAP2_ENCRYPT",		"0",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN0_VAP3_ENCRYPT",		"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN1_VAP0_ENCRYPT",		"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN1_VAP1_ENCRYPT",		"6",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN1_VAP2_ENCRYPT",		"0",	BYTE_T},
		{MIB_WLAN_ENCRYPT,		"DEF_WLAN1_VAP3_ENCRYPT",		"6",	BYTE_T},

		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN0_VAP0_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN0_VAP1_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN0_VAP2_WPA_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN0_VAP3_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN1_VAP0_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN1_VAP1_WPA_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN1_VAP2_WPA_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA_CIPHER_SUITE,		"DEF_WLAN1_VAP3_WPA_CIPHER_SUITE",		"3",	BYTE_T},

		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN0_VAP0_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN0_VAP1_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN0_VAP2_WPA2_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN0_VAP3_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN1_VAP0_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN1_VAP1_WPA2_CIPHER_SUITE",		"3",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN1_VAP2_WPA2_CIPHER_SUITE",		"0",	BYTE_T},
		{MIB_WLAN_WPA2_CIPHER_SUITE,		"DEF_WLAN1_VAP3_WPA2_CIPHER_SUITE",		"3",	BYTE_T},

		{MIB_WLAN_WLAN_DISABLED,		"DEF_WLAN0_VAP0_WLAN_DISABLED",	"0",	BYTE_T},
		{MIB_WLAN_WLAN_DISABLED,		"DEF_WLAN1_VAP0_WLAN_DISABLED",	"0",	BYTE_T},

		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN0_WSC_DISABLE",		"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN0_VAP0_WSC_DISABLE",	"0",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN0_VAP1_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN0_VAP2_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN0_VAP3_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN1_WSC_DISABLE",		"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN1_VAP0_WSC_DISABLE",	"0",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN1_VAP1_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN1_VAP2_WSC_DISABLE",	"1",	BYTE_T},
		{MIB_WLAN_WSC_DISABLE,		"DEF_WLAN1_VAP3_WSC_DISABLE",	"1",	BYTE_T},

        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN0_WSC_CONFIGURED",         "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN0_VAP0_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN0_VAP1_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN0_VAP2_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN0_VAP3_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN1_WSC_CONFIGURED",         "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN1_VAP0_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN1_VAP1_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN1_VAP2_WSC_CONFIGURED",    "1",    BYTE_T},
        {MIB_WLAN_WSC_CONFIGURED,   "DEF_WLAN1_VAP3_WSC_CONFIGURED",    "1",    BYTE_T},

		{MIB_WLAN_HIDDEN_SSID, 	"DEF_WLAN0_HIDDEN_SSID",	"1",	BYTE_T},
		{MIB_WLAN_HIDDEN_SSID, 	"DEF_WLAN1_HIDDEN_SSID",	"1",	BYTE_T},
			
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN0_VAP0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN0_VAP1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN0_VAP2_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN0_VAP3_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN1_VAP0_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN1_VAP1_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN1_VAP2_IAPP_DISABLED",	"1",	BYTE_T},
		{MIB_WLAN_IAPP_DISABLED,	"DEF_WLAN1_VAP3_IAPP_DISABLED",	"1",	BYTE_T},

		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN0_UAPSD_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN0_VAP0_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN0_VAP1_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN0_VAP2_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN0_VAP3_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN1_UAPSD_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN1_VAP0_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN1_VAP1_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN1_VAP2_UAPSD_ENABLED",	"1",	BYTE_T},
		{MIB_WLAN_UAPSD_ENABLED,	"DEF_WLAN1_VAP3_UAPSD_ENABLED",	"1",	BYTE_T},

		{MIB_WLAN_WSC_UPNP_ENABLED,		"DEF_WLAN0_VAP0_WSC_UPNP_ENABLED",	"0",	BYTE_T},
		{MIB_WLAN_WSC_UPNP_ENABLED,		"DEF_WLAN1_VAP0_WSC_UPNP_ENABLED",	"1",	BYTE_T},
#endif
        {0}
};


#endif
