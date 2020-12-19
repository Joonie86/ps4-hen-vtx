#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

//6.00-6.02
#define	XFAST_SYSCALL_addr              0x00001C0

// Names - Data
#define PRISON0_addr                    0x1139458
#define ROOTVNODE_addr                  0x21BFAC0
#define PMAP_STORE_addr                 0x21D5638
#define DT_HASH_SEGMENT_addr            0x0BFB890

// Functions
#define pmap_protect_addr               0x02EBAA0
#define pmap_protect_p_addr             0x02EBAE8

// Patches
// debug menu error
#define debug_menu_error_patch1         0x050254E
#define debug_menu_error_patch2         0x050380C

// disable signature check
#define disable_signature_check_patch   0x06A3750

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0667900
#define enable_debug_rifs_patch2        0x0667930

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x027F65B

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x1545D18

// enable debug log
#define enable_debug_log_patch          0x0307ED7

// enable uart output
#define enable_uart_patch               0x156C338

#endif
