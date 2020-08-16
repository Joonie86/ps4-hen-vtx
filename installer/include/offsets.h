#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 6.20
#define	XFAST_SYSCALL_addr              0x00001C0

// Names - Data
#define PRISON0_addr                    0x113D458
#define ROOTVNODE_addr                  0x21C3AC0
#define PMAP_STORE_addr                 0x21D9638
#define DT_HASH_SEGMENT_addr            0x0bff890 //0x0d08f28

// Functions
#define pmap_protect_addr               0x02EBAC0
#define pmap_protect_p_addr             0x02EBB08

// Patches

// debug menu error
#define debug_menu_error_patch1         0x050382c
#define debug_menu_error_patch2         0x050256e

// disable signature check
#define disable_signature_check_patch   0x06a3c10

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0667dc0
#define enable_debug_rifs_patch2        0x0667df0

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x027F67B

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x1549d18

// enable debug log
#define enable_debug_log_patch          0x0307EF7

// enable uart output
#define enable_uart_patch               0x1570338

#endif
