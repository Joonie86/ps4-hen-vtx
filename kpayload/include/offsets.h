#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once
//5.50

// data
#define	XFAST_SYSCALL_addr              0x00001C0
#define M_TEMP_addr                     0x1A8EFF0
#define MINI_SYSCORE_SELF_BINARY_addr   0x1567618
#define ALLPROC_addr                    0x218D0E8
#define SBL_DRIVER_MAPPED_PAGES_addr    0x264F6C8
#define SBL_PFS_SX_addr                 0x2664080
#define SBL_KEYMGR_KEY_SLOTS_addr       0x2657700
#define SBL_KEYMGR_KEY_RBTREE_addr      0x2657710
#define SBL_KEYMGR_BUF_VA_addr          0x2658000
#define SBL_KEYMGR_BUF_GVA_addr         0x2658808
#define FPU_CTX_addr                    0x2668D40
#define DIPSW_addr                      0x22BBF50

// common
#define memcmp_addr                     0x05E270
#define _sx_xlock_addr                  0x482620
#define _sx_xunlock_addr                0x4827E0
#define malloc_addr                     0x466AE0
#define free_addr                       0x466CE0
#define strstr_addr                     0x0E4A50
#define fpu_kern_enter_addr             0x22C990
#define fpu_kern_leave_addr             0x22CA90
#define memcpy_addr                     0x4059C0
#define memset_addr                     0x108810
#define strlen_addr                     0x2A6CC0
#define printf_addr                     0x11AE10
#define eventhandler_register_addr      0x22D430

// Fself
#define sceSblACMgrGetPathId_addr       0x1B49C0
#define sceSblServiceMailbox_addr       0x64A260
#define sceSblAuthMgrSmIsLoadable2_addr 0x65C0E0
#define _sceSblAuthMgrGetSelfInfo_addr  0x65C940
#define _sceSblAuthMgrSmStart_addr      0x656CE0
#define sceSblAuthMgrVerifyHeader_addr  0x658290

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x2EA440
#define Sha256Hmac_addr                 0x31D200
#define AesCbcCfb128Encrypt_addr        0x45AA20
#define AesCbcCfb128Decrypt_addr        0x45AC50
#define sceSblDriverSendMsg_0_addr      0x635A60
#define sceSblPfsSetKeys_addr           0x6413D0
#define sceSblKeymgrSetKeyStorage_addr  0x63C380
#define sceSblKeymgrSetKeyForPfs_addr   0x63E8C0
#define sceSblKeymgrCleartKey_addr      0x63EC40
#define sceSblKeymgrSmCallfunc_addr     0x63E490

// Patch
#define vmspace_acquire_ref_addr        0x029C90
#define vmspace_free_addr               0x029AC0
#define vm_map_lock_read_addr           0x029e40
#define vm_map_unlock_read_addr         0x029e90
#define vm_map_lookup_entry_addr        0x02A470
#define proc_rwmem_addr                 0x3931C0

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x65544D
#define sceSblAuthMgrIsLoadable2_hook                               0x655591
#define sceSblAuthMgrVerifyHeader_hook1                             0x655CEC
#define sceSblAuthMgrVerifyHeader_hook2                             0x656998
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x6588D3
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x659526

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x63C425
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x63FAEA
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x663CF0 //0x663B49
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x664AD3
#define mountpfs__sceSblPfsSetKeys_hook1                            0x6B1628
#define mountpfs__sceSblPfsSetKeys_hook2                            0x6B1857

// SceShellUI patches - debug patches
// /system/common/lib/libkernel_sys.sprx
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x01D4D0
#define sceSblRcMgrIsStoreMode_patch                                0x01D830

// SceShellUI patches - remote play patches
// `/system_ex/app/NPXS20001/eboot.bin`
#define CreateUserForIDU_patch                                      0x1A3350

// `/system_ex/app/NPXS20001/psm/Application/app.exe.sprx`
#define remote_play_menu_patch                                      0xE84901

// SceRemotePlay patches - remote play patches
// `/system/vsh/app/NPXS21006/eboot.bin`
#define SceRemotePlay_patch1                                        0x03C0B6
#define SceRemotePlay_patch2                                    0x03C0D1

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x177A4B
#define sceKernelIsGenuineCEX_patch2    0x7B9CEB
#define sceKernelIsGenuineCEX_patch3    0x804783
#define sceKernelIsGenuineCEX_patch4    0x9946EB

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x177A77
#define nidf_libSceDipsw_patch2         0x24A4ED
#define nidf_libSceDipsw_patch3         0x7B9D17
#define nidf_libSceDipsw_patch4         0x994717

// enable data mount
#define enable_data_mount_patch         0x32779A

// enable fpkg
#define enable_fpkg_patch               0x3DE492

// debug pkg free string
#define fake_free_patch                 0xF18910

// make pkgs installer working with external hdd
#define pkg_installer_patch             0x97D071

// enable support with 6.xx external hdd
#define ext_hdd_patch                   0x59C03D

// enable debug trophies on retail
#define debug_trophies_patch            0x6B8A09

// disable screenshot block
#define disable_screenshot_patch        0x0D46F6

#endif
