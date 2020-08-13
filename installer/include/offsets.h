#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 5.50
#define	XFAST_SYSCALL_addr              0x00001C0

// Names - Data
#define PRISON0_addr                    0x1134180
#define ROOTVNODE_addr                  0x22EF570
#define PMAP_STORE_addr                 0x22A0BA0
#define DT_HASH_SEGMENT_addr            0x0D00978

// Functions
#define pmap_protect_addr               0x02FC6F0
#define pmap_protect_p_addr             0x02FC736

// Patches
// debug menu error
#define debug_menu_error_patch1         0x050959E
#define debug_menu_error_patch2         0x050A86C

// disable signature check
#define disable_signature_check_patch   0x069B2F0

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0665660
#define enable_debug_rifs_patch2        0x0665690

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x006390A

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x1A7D340

// enable debug log
#define enable_debug_log_patch          0x011AEF7

// enable uart output
#define enable_uart_patch               0x1A5FDD0

#endif
