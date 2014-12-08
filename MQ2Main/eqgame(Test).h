/******************************************************************************
    MQ2Main.dll: MacroQuest2's extension DLL for EverQuest 
    Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax 

    This program is free software; you can redistribute it and/or modify 
    it under the terms of the GNU General Public License, version 2, as published by 
    the Free Software Foundation. 

    This program is distributed in the hope that it will be useful, 
    but WITHOUT ANY WARRANTY; without even the implied warranty of 
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
    GNU General Public License for more details. 
******************************************************************************/ 
#ifdef PRIVATE
#include "eqgame-private.h"
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Nov 21 2014"
#define __ExpectedVersionTime                                     "09:49:06"
#define __ActualVersionDate_x                                      0xA57880
#define __ActualVersionTime_x                                      0xA5788C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuestTray"
#define __MacroQuestWinName                                       "MacroQuest"

// Memory Protection
#define __MemChecker0_x                                            0x573A30
#define __MemChecker1_x                                            0x83B4C0
#define __MemChecker2_x                                            0x60B350
#define __MemChecker3_x                                            0x60B2A0
#define __MemChecker4_x                                            0x7BFBE0
#define __EncryptPad0_x                                            0xBC3790
#define __EncryptPad1_x                                            0xD3ED00
#define __EncryptPad2_x                                            0xC0AD40
#define __EncryptPad3_x                                            0xC0A940
#define __EncryptPad4_x                                            0xD1C3E8
#define __AC1_x                                                    0x77CCE5
#define __AC2_x                                                    0x5297D7
#define __AC3_x                                                    0x53DEC0
#define __AC4_x                                                    0x5441F0
#define __AC5_x                                                    0x55065E
#define __AC6_x                                                    0x5541A2
#define __AC7_x                                                    0x54AD4C
#define __AC1_Data                                                 0x11111111
// Direct Input
#define DI8__Main_x                                                0x10F0050
#define DI8__Keyboard_x                                            0x10F0054
#define DI8__Mouse_x                                               0x10F0058
#define __AltTimerReady_x                                          0xF4FAE1
#define __Attack_x                                                 0xFE2BF7
#define __Autofire_x                                               0xFE2BF8
#define __BindList_x                                               0xB876A8
#define __bCommandEnabled_x                                        0xF4DBF0
#define __Clicks_x                                                 0xF5E728
#define __CommandList_x                                            0xB8B7F0
#define __CurrentMapLabel_x                                        0x10F5AA8
#define __CurrentSocial_x                                          0xB4CFCC
#define __DoAbilityList_x                                          0xF94EAC
#define __do_loot_x                                                0x4F1120
#define __DrawHandler_x                                            0x175A6BC
#define __GroupCount_x                                             0xF4F1BA

#define __Guilds_x                                                 0xF54CA8
#define __gWorld_x                                                 0xF51674
#define __HotkeyPage_x                                             0xFDB8AC
#define __HWnd_x                                                   0xFE7F58
#define __InChatMode_x                                             0xF5E654
#define __LastTell_x                                               0xF605B4
#define __LMouseHeldTime_x                                         0xF5E794
#define __Mouse_x                                                  0x10F005C
#define __MouseLook_x                                              0xF5E6EE
#define __MouseEventTime_x                                         0xFE33E4
#define __NetStatusToggle_x                                        0xF5E6F1
#define __PCNames_x                                                0xF5FBE4
#define __RangeAttackReady_x                                       0xF5F878
#define __RMouseHeldTime_x                                         0xF5E790
#define __RunWalkState_x                                           0xF5E658
#define __ScreenMode_x                                             0xE9DBB0
#define __ScreenX_x                                                0xF5E60C
#define __ScreenY_x                                                0xF5E608
#define __ScreenXMax_x                                             0xF5E610
#define __ScreenYMax_x                                             0xF5E614
#define __ServerHost_x                                             0xF4F104
#define __ServerName_x                                             0xF94E6C
#define __ShiftKeyDown_x                                           0xF5ECFC
#define __ShowNames_x                                              0xF5FA88
#define __Socials_x                                                0xF94F6C
#define __SubscriptionType_x                                       0x1121E38
#define __TargetAggroHolder_x                                      0x10F7CE4
#define __GroupAggro_x                                             0x10F7D24
#define __LoginName_x                                              0xFE6B30
#define __Inviter_x                                                0xFE2B74


//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF51760
#define instEQZoneInfo_x                                           0xF5E8E4
#define instKeypressHandler_x                                      0xFE33C8
#define pinstActiveBanker_x                                        0xF51718
#define pinstActiveCorpse_x                                        0xF5171C
#define pinstActiveGMaster_x                                       0xF51720
#define pinstActiveMerchant_x                                      0xF51714
#define pinstAggroInfo_x                                           0xD62198
#define pinstAltAdvManager_x                                       0xE9EC88
#define pinstAuraMgr_x                                             0xD6C060
#define pinstBandageTarget_x                                       0xF51700
#define pinstCamActor_x                                            0xE9E590
#define pinstCDBStr_x                                              0xE9DB44
#define pinstCDisplay_x                                            0xF51728
#define pinstCEverQuest_x                                          0x10F01D4
#define pinstCharData_x                                            0xF516E4
#define pinstCharSpawn_x                                           0xF5170C
#define pinstControlledMissile_x                                   0xF516E0
#define pinstControlledPlayer_x                                    0xF5170C
#define pinstCSidlManager_x                                        0x1759AD0
#define pinstCXWndManager_x                                        0x1759AC8
#define instDynamicZone_x                                          0xF5E4A0
#define pinstDZMember_x                                            0xF5E5B0
#define pinstDZTimerInfo_x                                         0xF5E5B4
#define pinstEQItemList_x                                          0xF4DE3C
#define instEQMisc_x                                               0xB68A68
#define pinstEQSoundManager_x                                      0xE9EF88
#define instExpeditionLeader_x                                     0xF5E4EA
#define instExpeditionName_x                                       0xF5E52A
#define pinstGroup_x                                               0xF4F1B6
#define pinstImeManager_x                                          0x1759AD4
#define pinstLocalPlayer_x                                         0xF516F8
#define pinstMercenaryData_x                                       0xFE3A18
#define pinstMercAltAbilities_x                                    0xE9EEA8
#define pinstModelPlayer_x                                         0xF51724
#define pinstPCData_x                                              0xF516E4
#define pinstSkillMgr_x                                            0xFE4850
#define pinstSpawnManager_x                                        0xFE4138
#define pinstSpellManager_x                                        0xFE4998
#define pinstSpellSets_x                                           0xFDB910
#define pinstStringTable_x                                         0xF5168C
#define pinstSwitchManager_x                                       0xF4ED48
#define pinstTarget_x                                              0xF51710
#define pinstTargetObject_x                                        0xF516E8
#define pinstTargetSwitch_x                                        0xF516EC
#define pinstTaskMember_x                                          0xE9DA90
#define pinstTrackTarget_x                                         0xF51704
#define pinstTradeTarget_x                                         0xF516F4
#define instTributeActive_x                                        0xB68A8D
#define pinstViewActor_x                                           0xE9E58C
#define pinstWorldData_x                                           0xF516C8


//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCTextOverlay_x                                        0xD62678
#define pinstCAudioTriggersWindow_x                                0xD62508
#define pinstCCharacterSelect_x                                    0xE9E438
#define pinstCFacePick_x                                           0xE9E3E8
#define pinstCNoteWnd_x                                            0xE9E3F0
#define pinstCBookWnd_x                                            0xE9E3F8
#define pinstCPetInfoWnd_x                                         0xE9E3FC
#define pinstCTrainWnd_x                                           0xE9E400
#define pinstCSkillsWnd_x                                          0xE9E404
#define pinstCSkillsSelectWnd_x                                    0xE9E408
#define pinstCCombatSkillSelectWnd_x                               0xE9E40C
#define pinstCFriendsWnd_x                                         0xE9E410
#define pinstCAuraWnd_x                                            0xE9E414
#define pinstCRespawnWnd_x                                         0xE9E418
#define pinstCBandolierWnd_x                                       0xE9E41C
#define pinstCPotionBeltWnd_x                                      0xE9E420
#define pinstCAAWnd_x                                              0xE9E424
#define pinstCGroupSearchFiltersWnd_x                              0xE9E428
#define pinstCLoadskinWnd_x                                        0xE9E42C
#define pinstCAlarmWnd_x                                           0xE9E430
#define pinstCMusicPlayerWnd_x                                     0xE9E434
#define pinstCMailWnd_x                                            0xE9E43C
#define pinstCMailCompositionWnd_x                                 0xE9E440
#define pinstCMailAddressBookWnd_x                                 0xE9E444
#define pinstCRaidWnd_x                                            0xE9E44C
#define pinstCRaidOptionsWnd_x                                     0xE9E450
#define pinstCBreathWnd_x                                          0xE9E454
#define pinstCMapViewWnd_x                                         0xE9E458
#define pinstCMapToolbarWnd_x                                      0xE9E45C
#define pinstCEditLabelWnd_x                                       0xE9E460
#define pinstCTargetWnd_x                                          0xE9E464
#define pinstCColorPickerWnd_x                                     0xE9E468
#define pinstCPlayerWnd_x                                          0xE9E46C
#define pinstCOptionsWnd_x                                         0xE9E470
#define pinstCBuffWindowNORMAL_x                                   0xE9E474
#define pinstCBuffWindowSHORT_x                                    0xE9E478
#define pinstCharacterCreation_x                                   0xE9E47C
#define pinstCCursorAttachment_x                                   0xE9E480
#define pinstCCastingWnd_x                                         0xE9E484
#define pinstCCastSpellWnd_x                                       0xE9E488
#define pinstCSpellBookWnd_x                                       0xE9E48C
#define pinstCInventoryWnd_x                                       0xE9E490
#define pinstCBankWnd_x                                            0xE9E494
#define pinstCQuantityWnd_x                                        0xE9E498
#define pinstCLootWnd_x                                            0xE9E49C
#define pinstCActionsWnd_x                                         0xE9E4A0
#define pinstCCombatAbilityWnd_x                                   0xE9E4A4
#define pinstCMerchantWnd_x                                        0xE9E4A8
#define pinstCTradeWnd_x                                           0xE9E4AC
#define pinstCSelectorWnd_x                                        0xE9E4B0
#define pinstCBazaarWnd_x                                          0xE9E4B4
#define pinstCBazaarSearchWnd_x                                    0xE9E4B8
#define pinstCGiveWnd_x                                            0xE9E4D4
#define pinstCTrackingWnd_x                                        0xE9E4DC
#define pinstCInspectWnd_x                                         0xE9E4E0
#define pinstCSocialEditWnd_x                                      0xE9E4E4
#define pinstCFeedbackWnd_x                                        0xE9E4E8
#define pinstCBugReportWnd_x                                       0xE9E4EC
#define pinstCVideoModesWnd_x                                      0xE9E4F0
#define pinstCTextEntryWnd_x                                       0xE9E4F8
#define pinstCFileSelectionWnd_x                                   0xE9E4FC
#define pinstCCompassWnd_x                                         0xE9E500
#define pinstCPlayerNotesWnd_x                                     0xE9E504
#define pinstCGemsGameWnd_x                                        0xE9E508
#define pinstCTimeLeftWnd_x                                        0xE9E50C
#define pinstCPetitionQWnd_x                                       0xE9E520
#define pinstCSoulmarkWnd_x                                        0xE9E524
#define pinstCStoryWnd_x                                           0xE9E528
#define pinstCJournalTextWnd_x                                     0xE9E52C
#define pinstCJournalCatWnd_x                                      0xE9E530
#define pinstCBodyTintWnd_x                                        0xE9E534
#define pinstCServerListWnd_x                                      0xE9E538
#define pinstCAvaZoneWnd_x                                         0xE9E544
#define pinstCBlockedBuffWnd_x                                     0xE9E548
#define pinstCBlockedPetBuffWnd_x                                  0xE9E54C
#define pinstCInvSlotMgr_x                                         0xE9E584
#define pinstCContainerMgr_x                                       0xE9E588
#define pinstCAdventureLeaderboardWnd_x                            0x10F0B80
#define pinstCAdventureRequestWnd_x                                0x10F0BF8
#define pinstCAltStorageWnd_x                                      0x10F0ED8
#define pinstCAdventureStatsWnd_x                                  0x10F0C70
#define pinstCBarterMerchantWnd_x                                  0x10F1AC0
#define pinstCBarterSearchWnd_x                                    0x10F1B38
#define pinstCBarterWnd_x                                          0x10F1BB0
#define pinstCChatManager_x                                        0x10F2240
#define pinstCDynamicZoneWnd_x                                     0x10F26F0
#define pinstCEQMainWnd_x                                          0x10F2888
#define pinstCFellowshipWnd_x                                      0x10F2684
#define pinstCFindLocationWnd_x                                    0x10F2B58
#define pinstCGroupSearchWnd_x                                     0x10F2E28
#define pinstCGroupWnd_x                                           0x10F2EA0
#define pinstCGuildBankWnd_x                                       0x10F2F18
#define pinstCGuildMgmtWnd_x                                       0x10F5008
#define pinstCHotButtonWnd_x                                       0x10F50D4
#define pinstCHotButtonWnd1_x                                      0x10F50D4
#define pinstCHotButtonWnd2_x                                      0x10F50D8
#define pinstCHotButtonWnd3_x                                      0x10F50DC
#define pinstCHotButtonWnd4_x                                      0x10F5100
#define pinstCItemDisplayManager_x                                 0x10F53F8
#define pinstCItemExpTransferWnd_x                                 0x10F5474
#define pinstCLFGuildWnd_x                                         0x10F5750
#define pinstCMIZoneSelectWnd_x                                    0x10F5D38
#define pinstCConfirmationDialog_x                                 0x10F6440
#define pinstCPopupWndManager_x                                    0x10F6440
#define pinstCProgressionSelectionWnd_x                            0x10F6530
#define pinstCPvPStatsWnd_x                                        0x10F6620
#define pinstCSystemInfoDialogBox_x                                0x10F6D28
#define pinstCTaskWnd_x                                            0x10F80F0
#define pinstCTaskTemplateSelectWnd_x                              0x10F8078
#define pinstCTipWndOFDAY_x                                        0x10F8348
#define pinstCTipWndCONTEXT_x                                      0x10F834C
#define pinstCTitleWnd_x                                           0x10F83C8
#define pinstCContextMenuManager_x                                 0x17596E4
#define pinstCVoiceMacroWnd_x                                      0xFE5000
#define pinstCHtmlWnd_x                                            0xFE50F8
#define pinstIconCache_x                                           0x10F285C
#define pinstCTradeskillWnd_x                                      0x10F84C8

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x508C30
#define __ConvertItemTags_x                                        0x4F5DE0
#define __ExecuteCmd_x                                             0x4E08F0
#define __EQGetTime_x                                              0x83C030
#define __get_melee_range_x                                        0x4E75E0
#define __GetGaugeValueFromEQ_x                                    0x77BA30
#define __GetLabelFromEQ_x                                         0x77CC70
#define __GetXTargetType_x                                         0x8F99F0
#define __LoadFrontEnd_x                                           0x60AA00
#define __NewUIINI_x                                               0x77B370
#define __ProcessGameEvents_x                                      0x54CAB0
#define __ProcessMouseEvent_x                                      0x54C250
#define CrashDetected_x                                            0x60C4D0
#define DrawNetStatus_x                                            0x583360
#define Util__FastTime_x                                           0x83B330
#define Expansion_HoT_x                                            0xF5F9E4
#define __HelpPath_x                                               0xFE3150
//// 
// Section 4: Function Offsets 
//// 
// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x4A6140
#define AltAdvManager__IsAbilityReady_x                            0x4A61B0
#define AltAdvManager__GetAltAbility_x                             0x4A6570

// CharacterZoneClient
#define CharacterZoneClient__HasSkill_x                            0x452F90
#define CharacterZoneClient__MakeMeVisible_x                       0x458050

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x63A0E0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6482B0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x562A80

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x6634B0
#define CChatManager__InitContextMenu_x                            0x663FD0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x7E1A50
#define CChatService__GetFriendName_x                              0x821EF0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x668E20
#define CChatWindow__Clear_x                                       0x6689D0
#define CChatWindow__WndNotification_x                             0x669360

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x89A8B0
#define CComboWnd__Draw_x                                          0x89AA90
#define CComboWnd__GetCurChoice_x                                  0x89A6D0
#define CComboWnd__GetListRect_x                                   0x89AD30
#define CComboWnd__GetTextRect_x                                   0x89A910
#define CComboWnd__InsertChoice_x                                  0x89ADA0
#define CComboWnd__SetColors_x                                     0x89A660
#define CComboWnd__SetChoice_x                                     0x89A690

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x6724F0
#define CContainerWnd__vftable_x                                   0xA60FF0

// CDisplay 
#define CDisplay__CleanGameUI_x                                    0x494A30
#define CDisplay__GetClickedActor_x                                0x48D4D0
#define CDisplay__GetUserDefinedColor_x                            0x48BD90
#define CDisplay__GetWorldFilePath_x                               0x48B190
#define CDisplay__is3dON_x                                         0x48A560
#define CDisplay__ReloadUI_x                                       0x49FE90
#define CDisplay__WriteTextHD2_x                                   0x490D20

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x8BC710

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x8AB260
#define CEditWnd__GetCharIndexPt_x                                 0x8AC290
#define CEditWnd__GetDisplayString_x                               0x8AB410
#define CEditWnd__GetHorzOffset_x                                  0x8AB750
#define CEditWnd__GetLineForPrintableChar_x                        0x8ABD50
#define CEditWnd__GetSelStartPt_x                                  0x8AC550
#define CEditWnd__GetSTMLSafeText_x                                0x8AB8F0
#define CEditWnd__PointFromPrintableChar_x                         0x8ABE40
#define CEditWnd__SelectableCharFromPoint_x                        0x8ABFC0
#define CEditWnd__SetEditable_x                                    0x8AB8C0

// CEverQuest 
#define CEverQuest__ClickedPlayer_x                                0x529F20
#define CEverQuest__DoTellWindow_x                                 0x52F8B0
#define CEverQuest__DropHeldItemOnGround_x                         0x538340
#define CEverQuest__dsp_chat_x                                     0x531050
#define CEverQuest__Emote_x                                        0x5312B0
#define CEverQuest__EnterZone_x                                    0x544A10
#define CEverQuest__GetBodyTypeDesc_x                              0x526850
#define CEverQuest__GetClassDesc_x                                 0x52C420
#define CEverQuest__GetClassThreeLetterCode_x                      0x52CA20
#define CEverQuest__GetDeityDesc_x                                 0x527130
#define CEverQuest__GetLangDesc_x                                  0x526BE0
#define CEverQuest__GetRaceDesc_x                                  0x52CBE0
#define CEverQuest__InterpretCmd_x                                 0x531B90
#define CEverQuest__LeftClickedOnPlayer_x                          0x5491C0
#define CEverQuest__LMouseUp_x                                     0x54B2A0
#define CEverQuest__RightClickedOnPlayer_x                         0x549CC0
#define CEverQuest__RMouseUp_x                                     0x54AD00
#define CEverQuest__SetGameState_x                                 0x52A5D0
#define CEverQuest__UPCNotificationFlush_x                         0x532D30

// CGaugeWnd 
#define CGaugeWnd__CalcFillRect_x                                  0x683070
#define CGaugeWnd__CalcLinesFillRect_x                             0x6830D0
#define CGaugeWnd__Draw_x                                          0x683500

// CGuild
#define CGuild__FindMemberByName_x                                 0x424890

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x6A01B0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x6ADFF0
#define CInvSlotMgr__MoveItem_x                                    0x6AEF30
#define CInvSlotMgr__SelectSlot_x                                  0x6AE0A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x6AD480
#define CInvSlot__SliderComplete_x                                 0x6AAE50
#define CInvSlot__GetItemBase_x                                    0x6AA2D0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x6B00E0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x778560
#define CItemDisplayWnd__UpdateStrings_x                           0x6B1450

// CLabel 
#define CLabel__Draw_x                                             0x6CC1E0

// CListWnd 
#define CListWnd__AddColumn_x                                      0x888840
#define CListWnd__AddColumn1_x                                     0x888020
#define CListWnd__AddLine_x                                        0x887AD0
#define CListWnd__AddString_x                                      0x887CE0
#define CListWnd__CalculateFirstVisibleLine_x                      0x884B80
#define CListWnd__CalculateVSBRange_x                              0x886CC0
#define CListWnd__ClearAllSel_x                                    0x883E30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x8876A0
#define CListWnd__Compare_x                                        0x885690
#define CListWnd__Draw_x                                           0x886920
#define CListWnd__DrawColumnSeparators_x                           0x8867B0
#define CListWnd__DrawHeader_x                                     0x884140
#define CListWnd__DrawItem_x                                       0x885CE0
#define CListWnd__DrawLine_x                                       0x886450
#define CListWnd__DrawSeparator_x                                  0x886850
#define CListWnd__EnsureVisible_x                                  0x884CE0
#define CListWnd__ExtendSel_x                                      0x885BF0
#define CListWnd__GetColumnMinWidth_x                              0x883850
#define CListWnd__GetColumnWidth_x                                 0x883770
#define CListWnd__GetCurSel_x                                      0x882F40
#define CListWnd__GetItemAtPoint_x                                 0x884F80
#define CListWnd__GetItemAtPoint1_x                                0x884FF0
#define CListWnd__GetItemData_x                                    0x883280
#define CListWnd__GetItemHeight_x                                  0x8847D0
#define CListWnd__GetItemIcon_x                                    0x883460
#define CListWnd__GetItemRect_x                                    0x884DC0
#define CListWnd__GetItemText_x                                    0x883310
#define CListWnd__GetSelList_x                                     0x887F10
#define CListWnd__GetSeparatorRect_x                               0x8855B0
#define CListWnd__RemoveLine_x                                     0x887EC0
#define CListWnd__SetColors_x                                      0x883090
#define CListWnd__SetColumnJustification_x                         0x883B20
#define CListWnd__SetColumnWidth_x                                 0x883800
#define CListWnd__SetCurSel_x                                      0x882F80
#define CListWnd__SetItemColor_x                                   0x887380
#define CListWnd__SetItemData_x                                    0x883EE0
#define CListWnd__SetItemText_x                                    0x8871C0
#define CListWnd__ShiftColumnSeparator_x                           0x887050
#define CListWnd__Sort_x                                           0x8889A0
#define CListWnd__ToggleSel_x                                      0x883DB0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x6E5870

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x706A50
#define CMerchantWnd__RequestBuyItem_x                             0x70D8B0
#define CMerchantWnd__RequestSellItem_x                            0x70E320
#define CMerchantWnd__SelectRecoverySlot_x                         0x706D00
#define CMerchantWnd__SelectBuySellSlot_x                          0x705F60
#define CMerchantWnd__ActualSelect_x                               0x70A7D0

// CObfuscator
#define CObfuscator__doit_x                                        0x802420

// CSidlManager 
#define CSidlManager__FindScreenPieceTemplate1_x                   0x8A0010
#define CSidlManager__CreateLabel_x                                0x76E580

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x631400
#define CSidlScreenWnd__CalculateVSBRange_x                        0x631320
#define CSidlScreenWnd__ConvertToRes_x                             0x8BC5F0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x88D9A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x88EEA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x88EF50
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x88E410
#define CSidlScreenWnd__DrawSidlPiece_x                            0x88D480
#define CSidlScreenWnd__EnableIniStorage_x                         0x88CBB0
#define CSidlScreenWnd__GetSidlPiece_x                             0x88D670
#define CSidlScreenWnd__Init1_x                                    0x88EB70
#define CSidlScreenWnd__LoadIniInfo_x                              0x88DA50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x88CD70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x88E660
#define CSidlScreenWnd__StoreIniInfo_x                             0x88C680
#define CSidlScreenWnd__StoreIniVis_x                              0x88CB40
#define CSidlScreenWnd__WndNotification_x                          0x88E8F0
#define CSidlScreenWnd__GetChildItem_x                             0x88CC80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x8937E0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x5CC8D0
#define CSkillMgr__GetSkillCap_x                                   0x5CCA70
#define CSkillMgr__GetNameToken_x                                  0x5CC540

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x8C6610
#define CSliderWnd__SetValue_x                                     0x8C67E0
#define CSliderWnd__SetNumTicks_x                                  0x8C6F60

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x776200

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x8B69C0
#define CStmlWnd__CalculateHSBRange_x                              0x8AEF50
#define CStmlWnd__CalculateVSBRange_x                              0x8AEEC0
#define CStmlWnd__CanBreakAtCharacter_x                            0x8AF0D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x8AF9B0
#define CStmlWnd__ForceParseNow_x                                  0x8B7310
#define CStmlWnd__GetNextTagPiece_x                                0x8AF8B0
#define CStmlWnd__GetSTMLText_x                                    0x668270
#define CStmlWnd__GetVisibleText_x                                 0x8B0400
#define CStmlWnd__InitializeWindowVariables_x                      0x8B2790
#define CStmlWnd__MakeStmlColorTag_x                               0x8AE1C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x8AE220
#define CStmlWnd__SetSTMLText_x                                    0x8B4000
#define CStmlWnd__StripFirstSTMLLines_x                            0x8B6660
#define CStmlWnd__UpdateHistoryString_x                            0x8B1340

// CTabWnd 
#define CTabWnd__Draw_x                                            0x8BDDF0
#define CTabWnd__DrawCurrentPage_x                                 0x8BD660
#define CTabWnd__DrawTab_x                                         0x8BD420
#define CTabWnd__GetCurrentPage_x                                  0x8BDA30
#define CTabWnd__GetPageInnerRect_x                                0x8BD110
#define CTabWnd__GetTabInnerRect_x                                 0x8BD310
#define CTabWnd__GetTabRect_x                                      0x8BD1E0
#define CTabWnd__InsertPage_x                                      0x8BE0E0
#define CTabWnd__SetPage_x                                         0x8BDA60
#define CTabWnd__SetPageRect_x                                     0x8BDD30
#define CTabWnd__UpdatePage_x                                      0x8BE080

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x420590

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x8B9E50

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x8C2FD0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x8810A0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x411810
#define CXStr__CXStr1_x                                            0x718470
#define CXStr__CXStr3_x                                            0x8383C0
#define CXStr__dCXStr_x                                            0x779620
#define CXStr__operator_equal_x                                    0x838530
#define CXStr__operator_equal1_x                                   0x838580
#define CXStr__operator_plus_equal1_x                              0x839660

// CXWnd 
#define CXWnd__BringToTop_x                                        0x892A50
#define CXWnd__Center_x                                            0x898CC0
#define CXWnd__ClrFocus_x                                          0x892610
#define CXWnd__DoAllDrawing_x                                      0x898910
#define CXWnd__DrawChildren_x                                      0x898AB0
#define CXWnd__DrawColoredRect_x                                   0x892DF0
#define CXWnd__DrawTooltip_x                                       0x8930A0
#define CXWnd__DrawTooltipAtPoint_x                                0x897860
#define CXWnd__GetBorderFrame_x                                    0x8934B0
#define CXWnd__GetChildWndAt_x                                     0x896810
#define CXWnd__GetClientClipRect_x                                 0x8932B0
#define CXWnd__GetScreenClipRect_x                                 0x897F60
#define CXWnd__GetScreenRect_x                                     0x893680
#define CXWnd__GetTooltipRect_x                                    0x892F30
#define CXWnd__GetWindowTextA_x                                    0x411850
#define CXWnd__IsActive_x                                          0x8A6030
#define CXWnd__IsDescendantOf_x                                    0x8933F0
#define CXWnd__IsReallyVisible_x                                   0x8967F0
#define CXWnd__IsType_x                                            0x8BF7F0
#define CXWnd__Move_x                                              0x895EE0
#define CXWnd__Move1_x                                             0x8985C0
#define CXWnd__ProcessTransition_x                                 0x8929F0
#define CXWnd__Refade_x                                            0x8927C0
#define CXWnd__Resize_x                                            0x893740
#define CXWnd__Right_x                                             0x897D60
#define CXWnd__SetFocus_x                                          0x895050
#define CXWnd__SetFont_x                                           0x892660
#define CXWnd__SetKeyTooltip_x                                     0x8939B0
#define CXWnd__SetMouseOver_x                                      0x8982A0
#define CXWnd__StartFade_x                                         0x892AA0
#define CXWnd__GetChildItem_x                                      0x8981E0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x8A7940
#define CXWndManager__DrawWindows_x                                0x8A7580
#define CXWndManager__GetKeyboardFlags_x                           0x8A5B70
#define CXWndManager__HandleKeyboardMsg_x                          0x8A64C0
#define CXWndManager__RemoveWnd_x                                  0x8A61C0

// CDBStr
#define CDBStr__GetString_x                                        0x4889E0

// EQ_Character 
#define EQ_Character__CastRay_x                                    0x8F6A60
#define EQ_Character__CastSpell_x                                  0x43C8E0
#define EQ_Character__Cur_HP_x                                     0x452650
#define EQ_Character__GetAACastingTimeModifier_x                   0x4359B0
#define EQ_Character__GetCharInfo2_x                               0x80CAC0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x42DCF0
#define EQ_Character__GetFocusRangeModifier_x                      0x42DED0
#define EQ_Character__Max_Endurance_x                              0x595290
#define EQ_Character__Max_HP_x                                     0x448950
#define EQ_Character__Max_Mana_x                                   0x5950C0
#define EQ_Character__doCombatAbility_x                            0x5926B0
#define EQ_Character__UseSkill_x                                   0x45D180
#define EQ_Character__GetConLevel_x                                0x587A10
#define EQ_Character__IsExpansionFlag_x                            0x410D50
#define EQ_Character__TotalEffect_x                                0x43AA10

// EQ_Item 
#define EQ_Item__CanDrop_x                                         0x568260
#define EQ_Item__CreateItemTagString_x                             0x7ED080
#define EQ_Item__IsStackable_x                                     0x7E1680
#define EQ_Item__GetImageNum_x                                     0x7E4330

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x4A8230
#define EQ_LoadingS__Array_x                                       0xB76258

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x596A20
#define EQ_PC__GetAltAbilityIndex_x                                0x7F51C0
#define EQ_PC__GetCombatAbility_x                                  0x7F5250
#define EQ_PC__GetCombatAbilityTimer_x                             0x7F5300
#define EQ_PC__GetItemTimerValue_x                                 0x5904A0
#define EQ_PC__HasLoreItem_x                                       0x58AD00
#define EQ_PC__AlertInventoryChanged_x                             0x5879E0
#define EQ_PC__GetPcZoneClient_x                                   0x5B0CC0
#define EQ_PC__RemoveMyAffect_x                                    0x58F9B0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x4E5580
#define EQItemList__add_item_x                                     0x4E54C0
#define EQItemList__delete_item_x                                  0x4E5980
#define EQItemList__FreeItemList_x                                 0x4E5880

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x487DE0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x59BEB0
#define EQPlayer__dEQPlayer_x                                      0x5A4B20
#define EQPlayer__DoAttack_x                                       0x5B6AB0
#define EQPlayer__EQPlayer_x                                       0x5A6F70
#define EQPlayer__SetNameSpriteState_x                             0x5A18D0
#define EQPlayer__SetNameSpriteTint_x                              0x59D240
#define EQPlayer__IsBodyType_j_x                                   0x8F5CF0
#define EQPlayer__IsTargetable_x                                   0x8F6540

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x5AB230
#define EQPlayerManager__GetSpawnByName_x                          0x5AB690

// KeyPressHandler 
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x56E470
#define KeypressHandler__AttachKeyToEqCommand_x                    0x56E4B0
#define KeypressHandler__ClearCommandStateArray_x                  0x56E050
#define KeypressHandler__HandleKeyDown_x                           0x56C9A0
#define KeypressHandler__HandleKeyUp_x                             0x56CCC0
#define KeypressHandler__SaveKeymapping_x                          0x56E120

// MapViewMap 
#define MapViewMap__Clear_x                                        0x6DDC50
#define MapViewMap__SaveEx_x                                       0x6E1530

#define PlayerPointManager__GetAltCurrency_x                       0x806C70

// StringTable 
#define StringTable__getString_x                                   0x8026C0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x594D40

//Doors
#define EQSwitch__UseSwitch_x                                      0x523C90

//IconCache
#define IconCache__GetIcon_x                                       0x6789A0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x66F820
#define CContainerMgr__CloseContainer_x                            0x670030

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x73E990

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x561540

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x4B6800
#define EQ_Spell__SpellAffects_x                                   0x4B68A0
#define EQ_Spell__GetSpellBaseByAttrib_x                           0x4B68D0
#define CharacterZoneClient__CalcAffectChange_x                    0x436CD0
#define CLootWnd__LootAll_x                                        0x6D3510
#define CTargetWnd__GetBuffCaster_x                                0x784010
