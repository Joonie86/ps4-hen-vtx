#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 5.56
#define	XFAST_SYSCALL_addr              0x00001C0

// Names - Data
#define PRISON0_addr                    0x1139180
#define ROOTVNODE_addr                  0x22f3570
#define PMAP_STORE_addr                 0x22A4BA0
#define DT_HASH_SEGMENT_addr            0x0bfb3e0 // 0xD04A18

// Functions
#define pmap_protect_addr               0x02FC960
#define pmap_protect_p_addr             0x02FC9A6

// Patches
// debug menu error
#define debug_menu_error_patch1         0x050985E
#define debug_menu_error_patch2         0x050AB2C

// disable signature check
#define disable_signature_check_patch   0x069B730

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0665AA0
#define enable_debug_rifs_patch2        0x0665AD0

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x006390A

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x1A81340

// enable debug log
#define enable_debug_log_patch          0x011B237

// enable uart output
#define enable_uart_patch               0x1A63DD0

#endif
