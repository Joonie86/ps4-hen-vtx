#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once
//6.20

// data
#define	XFAST_SYSCALL_addr              0x00001C0
#define M_TEMP_addr                     0x155D070
#define MINI_SYSCORE_SELF_BINARY_addr   0x157F648
#define ALLPROC_addr                    0x22FBCD0
#define SBL_DRIVER_MAPPED_PAGES_addr    0x2659E58
#define SBL_PFS_SX_addr                 0x2677290
#define SBL_KEYMGR_KEY_SLOTS_addr       0x2684A78
#define SBL_KEYMGR_KEY_RBTREE_addr      0x2684A88
#define SBL_KEYMGR_BUF_VA_addr          0x2688808
#define SBL_KEYMGR_BUF_GVA_addr         0x2688808
#define FPU_CTX_addr                    0x26846C0
#define DIPSW_addr                      0x215DB50

// common
#define memcmp_addr                     0x4A1740
#define _sx_xlock_addr                  0x083F00
#define _sx_xunlock_addr                0x0840C0
#define malloc_addr                     0x1D9060
#define free_addr                       0x1D9260
#define strstr_addr                     0x4247F0
#define fpu_kern_enter_addr             0x1E3990
#define fpu_kern_leave_addr             0x1E3A90
#define memcpy_addr                     0x114700
#define memset_addr                     0x394C60
#define strlen_addr                     0x0D5AA0
#define printf_addr                     0x307E10
#define eventhandler_register_addr      0x180F80

// Fself
#define sceSblACMgrGetPathId_addr       0x4594E0
#define sceSblServiceMailbox_addr       0x64B480
#define sceSblAuthMgrSmIsLoadable2_addr 0x656D20
#define _sceSblAuthMgrGetSelfInfo_addr  0x6575B0
#define _sceSblAuthMgrSmStart_addr      0x65B070
#define sceSblAuthMgrVerifyHeader_addr  0x65CBD0

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x2209B0
#define Sha256Hmac_addr                 0x165D80
#define AesCbcCfb128Encrypt_addr        0x2D40F0
#define AesCbcCfb128Decrypt_addr        0x2D4320
#define sceSblDriverSendMsg_0_addr      0x6378E0
#define sceSblPfsSetKeys_addr           0x640C90
#define sceSblKeymgrSetKeyStorage_addr  0x646050
#define sceSblKeymgrSetKeyForPfs_addr   0x648EF0
#define sceSblKeymgrCleartKey_addr      0x649280
#define sceSblKeymgrSmCallfunc_addr     0x648AC0

// Patch
#define vmspace_acquire_ref_addr        0x34D0B0
#define vmspace_free_addr               0x34CEE0
#define vm_map_lock_read_addr           0x34D260
#define vm_map_unlock_read_addr         0x34D2B0
#define vm_map_lookup_entry_addr        0x34D860
#define proc_rwmem_addr                 0x13E7A0

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x658D2C
#define sceSblAuthMgrIsLoadable2_hook                               0x658E7F
#define sceSblAuthMgrVerifyHeader_hook1                             0x659636
#define sceSblAuthMgrVerifyHeader_hook2                             0x65A2D8
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x65D29A
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x65DEE1

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x6460F5
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x64A11D
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x6685C0
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x6693D3
#define mountpfs__sceSblPfsSetKeys_hook1                            0x69FABA
#define mountpfs__sceSblPfsSetKeys_hook2                            0x69FCE6

// SceShellUI patches - debug patches
// /system/common/lib/libkernel_sys.sprx
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x01D6D0
#define sceSblRcMgrIsStoreMode_patch                                0x01DA30

// SceShellUI patches - remote play patches
// `/system_ex/app/NPXS20001/eboot.bin`
#define CreateUserForIDU_patch                                      0x1A0510

// `/system_ex/app/NPXS20001/psm/Application/app.exe.sprx`
#define remote_play_menu_patch                                      0xE9F7B1

// SceRemotePlay patches - remote play patches
// `/system/vsh/app/NPXS21006/eboot.bin`
#define SceRemotePlay_patch1                                        0x03CED6
#define SceRemotePlay_patch2                                    0x03CEF1

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x186170
#define sceKernelIsGenuineCEX_patch2    0x81ED20
#define sceKernelIsGenuineCEX_patch3    0x869BA3
#define sceKernelIsGenuineCEX_patch4    0x9F7550

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x18619A
#define nidf_libSceDipsw_patch2         0x25C923
#define nidf_libSceDipsw_patch3         0x81ED4A
#define nidf_libSceDipsw_patch4         0x9F757A

// enable data mount
#define enable_data_mount_patch         0x33FF4C

// enable fpkg
#define enable_fpkg_patch               0x3F7222
 
// debug pkg free string
#define fake_free_patch                 0xF9FB11

// make pkgs installer working with external hdd
#define pkg_installer_patch             0x9E0031

// enable support with 6.xx external hdd
#define ext_hdd_patch                   0x60081D

// enable debug trophies on retail
#define debug_trophies_patch            0x71CDD9

// disable screenshot block
#define disable_screenshot_patch        0x0DAC66

#endif
