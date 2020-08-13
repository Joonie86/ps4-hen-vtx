#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once
//5.55

// data
#define	XFAST_SYSCALL_addr              0x00001C0
#define M_TEMP_addr                     0x1a92ff0
#define MINI_SYSCORE_SELF_BINARY_addr   0x156B618
#define ALLPROC_addr                    0x21910e8
#define SBL_DRIVER_MAPPED_PAGES_addr    0x26536C8
#define SBL_PFS_SX_addr                 0x2668080
#define SBL_KEYMGR_KEY_SLOTS_addr       0x265B700
#define SBL_KEYMGR_KEY_RBTREE_addr      0x265B710
#define SBL_KEYMGR_BUF_VA_addr          0x265C000
#define SBL_KEYMGR_BUF_GVA_addr         0x265C808
#define FPU_CTX_addr                    0x265B040
#define DIPSW_addr                      0x22BFF50

// common
#define memcmp_addr                     0x05E270
#define _sx_xlock_addr                  0x4828e0
#define _sx_xunlock_addr                0x482aa0
#define malloc_addr                     0x466da0
#define free_addr                       0x466fa0
#define strstr_addr                     0x0E4D90
#define fpu_kern_enter_addr             0x22CC00
#define fpu_kern_leave_addr             0x22CD00
#define memcpy_addr                     0x405c80
#define memset_addr                     0x108b50
#define strlen_addr                     0x2a6f30
#define printf_addr                     0x11b150
#define eventhandler_register_addr      0x22D6A0

// Fself
#define sceSblACMgrGetPathId_addr       0x1B4C30
#define sceSblServiceMailbox_addr       0x64A6A0
#define sceSblAuthMgrSmIsLoadable2_addr 0x65C520
#define _sceSblAuthMgrGetSelfInfo_addr  0x65CD80
#define _sceSblAuthMgrSmStart_addr      0x657120
#define sceSblAuthMgrVerifyHeader_addr  0x6586D0

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x2EA6B0
#define Sha256Hmac_addr                 0x31D470
#define AesCbcCfb128Encrypt_addr        0x45ACE0
#define AesCbcCfb128Decrypt_addr        0x45AF10
#define sceSblDriverSendMsg_0_addr      0x635EA0
#define sceSblPfsSetKeys_addr           0x641810
#define sceSblKeymgrSetKeyStorage_addr  0x63C7C0
#define sceSblKeymgrSetKeyForPfs_addr   0x63ED00
#define sceSblKeymgrCleartKey_addr      0x63F080
#define sceSblKeymgrSmCallfunc_addr     0x63E8D0

// Patch
#define vmspace_acquire_ref_addr        0x029C90
#define vmspace_free_addr               0x029AC0
#define vm_map_lock_read_addr           0x029e40
#define vm_map_unlock_read_addr         0x029e90
#define vm_map_lookup_entry_addr        0x02A470
#define proc_rwmem_addr                 0x393470

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x65588D
#define sceSblAuthMgrIsLoadable2_hook                               0x6559D1
#define sceSblAuthMgrVerifyHeader_hook1                             0x65612C
#define sceSblAuthMgrVerifyHeader_hook2                             0x656DD8
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x658D13
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x659966

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x63C865
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x63FF2A
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x664130
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x664F13
#define mountpfs__sceSblPfsSetKeys_hook1                            0x6B1A68
#define mountpfs__sceSblPfsSetKeys_hook2                            0x6B1C97

// SceShellUI patches - debug patches
// /system/common/lib/libkernel_sys.sprx
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x01D4D0
#define sceSblRcMgrIsStoreMode_patch                                0x01D830

// SceShellUI patches - remote play patches
// `/system_ex/app/NPXS20001/eboot.bin`
#define CreateUserForIDU_patch                                      0x1A3350

// `/system_ex/app/NPXS20001/psm/Application/app.exe.sprx`
#define remote_play_menu_patch                                      0xE86151

// SceRemotePlay patches - remote play patches
// `/system/vsh/app/NPXS21006/eboot.bin`
#define SceRemotePlay_patch1                                        0x03C0B6
#define SceRemotePlay_patch2                                    0x03C0D1

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x177AFB
#define sceKernelIsGenuineCEX_patch2    0x7BA80B
#define sceKernelIsGenuineCEX_patch3    0x8052A3
#define sceKernelIsGenuineCEX_patch4    0x99520B

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x177B27
#define nidf_libSceDipsw_patch2         0x24A9DD
#define nidf_libSceDipsw_patch3         0x7BA837
#define nidf_libSceDipsw_patch4         0x995237

// enable data mount
#define enable_data_mount_patch         0x327C8A

// enable fpkg
#define enable_fpkg_patch               0x3DE982
 
// debug pkg free string
#define fake_free_patch                 0xF196B0

// make pkgs installer working with external hdd
#define pkg_installer_patch             0x97DB91

// enable support with 6.xx external hdd
#define ext_hdd_patch                   0x59CB5D

// enable debug trophies on retail
#define debug_trophies_patch            0x6B9529

// disable screenshot block
#define disable_screenshot_patch        0x0D4766

#endif
