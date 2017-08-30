#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DBASYNCLaunchEmptyResult.h"
#import "DBASYNCLaunchResultBase.h"
#import "DBASYNCPollArg.h"
#import "DBASYNCPollEmptyResult.h"
#import "DBASYNCPollError.h"
#import "DBASYNCPollResultBase.h"
#import "DBAUTHAccessError.h"
#import "DBAUTHAuthError.h"
#import "DBAUTHInvalidAccountTypeError.h"
#import "DBAUTHPaperAccessError.h"
#import "DBAUTHRateLimitError.h"
#import "DBAUTHRateLimitReason.h"
#import "DBAUTHTokenFromOAuth1Arg.h"
#import "DBAUTHTokenFromOAuth1Error.h"
#import "DBAUTHTokenFromOAuth1Result.h"
#import "DBCOMMONInvalidPathRootError.h"
#import "DBCOMMONPathRoot.h"
#import "DBCOMMONPathRootError.h"
#import "DBFILESAddPropertiesError.h"
#import "DBFILESAlphaGetMetadataArg.h"
#import "DBFILESAlphaGetMetadataError.h"
#import "DBFILESCommitInfo.h"
#import "DBFILESCommitInfoWithProperties.h"
#import "DBFILESCreateFolderArg.h"
#import "DBFILESCreateFolderError.h"
#import "DBFILESCreateFolderResult.h"
#import "DBFILESDeleteArg.h"
#import "DBFILESDeleteBatchArg.h"
#import "DBFILESDeleteBatchError.h"
#import "DBFILESDeleteBatchJobStatus.h"
#import "DBFILESDeleteBatchLaunch.h"
#import "DBFILESDeleteBatchResult.h"
#import "DBFILESDeleteBatchResultData.h"
#import "DBFILESDeleteBatchResultEntry.h"
#import "DBFILESDeletedMetadata.h"
#import "DBFILESDeleteError.h"
#import "DBFILESDeleteResult.h"
#import "DBFILESDimensions.h"
#import "DBFILESDownloadArg.h"
#import "DBFILESDownloadError.h"
#import "DBFILESFileMetadata.h"
#import "DBFILESFileOpsResult.h"
#import "DBFILESFileSharingInfo.h"
#import "DBFILESFolderMetadata.h"
#import "DBFILESFolderSharingInfo.h"
#import "DBFILESGetCopyReferenceArg.h"
#import "DBFILESGetCopyReferenceError.h"
#import "DBFILESGetCopyReferenceResult.h"
#import "DBFILESGetMetadataArg.h"
#import "DBFILESGetMetadataError.h"
#import "DBFILESGetTemporaryLinkArg.h"
#import "DBFILESGetTemporaryLinkError.h"
#import "DBFILESGetTemporaryLinkResult.h"
#import "DBFILESGpsCoordinates.h"
#import "DBFILESInvalidPropertyGroupError.h"
#import "DBFILESListFolderArg.h"
#import "DBFILESListFolderContinueArg.h"
#import "DBFILESListFolderContinueError.h"
#import "DBFILESListFolderError.h"
#import "DBFILESListFolderGetLatestCursorResult.h"
#import "DBFILESListFolderLongpollArg.h"
#import "DBFILESListFolderLongpollError.h"
#import "DBFILESListFolderLongpollResult.h"
#import "DBFILESListFolderResult.h"
#import "DBFILESListRevisionsArg.h"
#import "DBFILESListRevisionsError.h"
#import "DBFILESListRevisionsResult.h"
#import "DBFILESLookupError.h"
#import "DBFILESLookUpPropertiesError.h"
#import "DBFILESMediaInfo.h"
#import "DBFILESMediaMetadata.h"
#import "DBFILESMetadata.h"
#import "DBFILESPhotoMetadata.h"
#import "DBFILESPreviewArg.h"
#import "DBFILESPreviewError.h"
#import "DBFILESPropertiesError.h"
#import "DBFILESPropertyGroupUpdate.h"
#import "DBFILESPropertyGroupWithPath.h"
#import "DBFILESRelocationArg.h"
#import "DBFILESRelocationBatchArg.h"
#import "DBFILESRelocationBatchError.h"
#import "DBFILESRelocationBatchJobStatus.h"
#import "DBFILESRelocationBatchLaunch.h"
#import "DBFILESRelocationBatchResult.h"
#import "DBFILESRelocationBatchResultData.h"
#import "DBFILESRelocationError.h"
#import "DBFILESRelocationPath.h"
#import "DBFILESRelocationResult.h"
#import "DBFILESRemovePropertiesArg.h"
#import "DBFILESRemovePropertiesError.h"
#import "DBFILESRestoreArg.h"
#import "DBFILESRestoreError.h"
#import "DBFILESSaveCopyReferenceArg.h"
#import "DBFILESSaveCopyReferenceError.h"
#import "DBFILESSaveCopyReferenceResult.h"
#import "DBFILESSaveUrlArg.h"
#import "DBFILESSaveUrlError.h"
#import "DBFILESSaveUrlJobStatus.h"
#import "DBFILESSaveUrlResult.h"
#import "DBFILESSearchArg.h"
#import "DBFILESSearchError.h"
#import "DBFILESSearchMatch.h"
#import "DBFILESSearchMatchType.h"
#import "DBFILESSearchMode.h"
#import "DBFILESSearchResult.h"
#import "DBFILESSharingInfo.h"
#import "DBFILESThumbnailArg.h"
#import "DBFILESThumbnailError.h"
#import "DBFILESThumbnailFormat.h"
#import "DBFILESThumbnailSize.h"
#import "DBFILESUpdatePropertiesError.h"
#import "DBFILESUpdatePropertyGroupArg.h"
#import "DBFILESUploadError.h"
#import "DBFILESUploadErrorWithProperties.h"
#import "DBFILESUploadSessionAppendArg.h"
#import "DBFILESUploadSessionCursor.h"
#import "DBFILESUploadSessionFinishArg.h"
#import "DBFILESUploadSessionFinishBatchArg.h"
#import "DBFILESUploadSessionFinishBatchJobStatus.h"
#import "DBFILESUploadSessionFinishBatchLaunch.h"
#import "DBFILESUploadSessionFinishBatchResult.h"
#import "DBFILESUploadSessionFinishBatchResultEntry.h"
#import "DBFILESUploadSessionFinishError.h"
#import "DBFILESUploadSessionLookupError.h"
#import "DBFILESUploadSessionOffsetError.h"
#import "DBFILESUploadSessionStartArg.h"
#import "DBFILESUploadSessionStartResult.h"
#import "DBFILESUploadWriteFailed.h"
#import "DBFILESVideoMetadata.h"
#import "DBFILESWriteConflictError.h"
#import "DBFILESWriteError.h"
#import "DBFILESWriteMode.h"
#import "DBPAPERAddMember.h"
#import "DBPAPERAddPaperDocUser.h"
#import "DBPAPERAddPaperDocUserMemberResult.h"
#import "DBPAPERAddPaperDocUserResult.h"
#import "DBPAPERCursor.h"
#import "DBPAPERDocLookupError.h"
#import "DBPAPERDocSubscriptionLevel.h"
#import "DBPAPERExportFormat.h"
#import "DBPAPERFolder.h"
#import "DBPAPERFoldersContainingPaperDoc.h"
#import "DBPAPERFolderSharingPolicyType.h"
#import "DBPAPERFolderSubscriptionLevel.h"
#import "DBPAPERInviteeInfoWithPermissionLevel.h"
#import "DBPAPERListDocsCursorError.h"
#import "DBPAPERListPaperDocsArgs.h"
#import "DBPAPERListPaperDocsContinueArgs.h"
#import "DBPAPERListPaperDocsFilterBy.h"
#import "DBPAPERListPaperDocsResponse.h"
#import "DBPAPERListPaperDocsSortBy.h"
#import "DBPAPERListPaperDocsSortOrder.h"
#import "DBPAPERListUsersCursorError.h"
#import "DBPAPERListUsersOnFolderArgs.h"
#import "DBPAPERListUsersOnFolderContinueArgs.h"
#import "DBPAPERListUsersOnFolderResponse.h"
#import "DBPAPERListUsersOnPaperDocArgs.h"
#import "DBPAPERListUsersOnPaperDocContinueArgs.h"
#import "DBPAPERListUsersOnPaperDocResponse.h"
#import "DBPAPERPaperApiBaseError.h"
#import "DBPAPERPaperApiCursorError.h"
#import "DBPAPERPaperDocExport.h"
#import "DBPAPERPaperDocExportResult.h"
#import "DBPAPERPaperDocPermissionLevel.h"
#import "DBPAPERPaperDocSharingPolicy.h"
#import "DBPAPERRefPaperDoc.h"
#import "DBPAPERRemovePaperDocUser.h"
#import "DBPAPERSharingPolicy.h"
#import "DBPAPERSharingPublicPolicyType.h"
#import "DBPAPERSharingTeamPolicyType.h"
#import "DBPAPERUserInfoWithPermissionLevel.h"
#import "DBPAPERUserOnPaperDocFilter.h"
#import "DBPROPERTIESGetPropertyTemplateArg.h"
#import "DBPROPERTIESGetPropertyTemplateResult.h"
#import "DBPROPERTIESListPropertyTemplateIds.h"
#import "DBPROPERTIESModifyPropertyTemplateError.h"
#import "DBPROPERTIESPropertyField.h"
#import "DBPROPERTIESPropertyFieldTemplate.h"
#import "DBPROPERTIESPropertyGroup.h"
#import "DBPROPERTIESPropertyGroupTemplate.h"
#import "DBPROPERTIESPropertyTemplateError.h"
#import "DBPROPERTIESPropertyType.h"
#import "DBSHARINGAccessLevel.h"
#import "DBSHARINGAclUpdatePolicy.h"
#import "DBSHARINGAddFileMemberArgs.h"
#import "DBSHARINGAddFileMemberError.h"
#import "DBSHARINGAddFolderMemberArg.h"
#import "DBSHARINGAddFolderMemberError.h"
#import "DBSHARINGAddMember.h"
#import "DBSHARINGAddMemberSelectorError.h"
#import "DBSHARINGAudienceExceptionContentInfo.h"
#import "DBSHARINGAudienceExceptions.h"
#import "DBSHARINGAudienceRestrictingSharedFolder.h"
#import "DBSHARINGChangeFileMemberAccessArgs.h"
#import "DBSHARINGCollectionLinkMetadata.h"
#import "DBSHARINGCreateSharedLinkArg.h"
#import "DBSHARINGCreateSharedLinkError.h"
#import "DBSHARINGCreateSharedLinkWithSettingsArg.h"
#import "DBSHARINGCreateSharedLinkWithSettingsError.h"
#import "DBSHARINGExpectedSharedContentLinkMetadata.h"
#import "DBSHARINGFileAction.h"
#import "DBSHARINGFileErrorResult.h"
#import "DBSHARINGFileLinkMetadata.h"
#import "DBSHARINGFileMemberActionError.h"
#import "DBSHARINGFileMemberActionIndividualResult.h"
#import "DBSHARINGFileMemberActionResult.h"
#import "DBSHARINGFileMemberRemoveActionResult.h"
#import "DBSHARINGFilePermission.h"
#import "DBSHARINGFolderAction.h"
#import "DBSHARINGFolderLinkMetadata.h"
#import "DBSHARINGFolderPermission.h"
#import "DBSHARINGFolderPolicy.h"
#import "DBSHARINGGetFileMetadataArg.h"
#import "DBSHARINGGetFileMetadataBatchArg.h"
#import "DBSHARINGGetFileMetadataBatchResult.h"
#import "DBSHARINGGetFileMetadataError.h"
#import "DBSHARINGGetFileMetadataIndividualResult.h"
#import "DBSHARINGGetMetadataArgs.h"
#import "DBSHARINGGetSharedLinkFileError.h"
#import "DBSHARINGGetSharedLinkMetadataArg.h"
#import "DBSHARINGGetSharedLinksArg.h"
#import "DBSHARINGGetSharedLinksError.h"
#import "DBSHARINGGetSharedLinksResult.h"
#import "DBSHARINGGroupInfo.h"
#import "DBSHARINGGroupMembershipInfo.h"
#import "DBSHARINGInsufficientPlan.h"
#import "DBSHARINGInsufficientQuotaAmounts.h"
#import "DBSHARINGInviteeInfo.h"
#import "DBSHARINGInviteeMembershipInfo.h"
#import "DBSHARINGJobError.h"
#import "DBSHARINGJobStatus.h"
#import "DBSHARINGLinkAction.h"
#import "DBSHARINGLinkAudience.h"
#import "DBSHARINGLinkExpiry.h"
#import "DBSHARINGLinkMetadata.h"
#import "DBSHARINGLinkPassword.h"
#import "DBSHARINGLinkPermission.h"
#import "DBSHARINGLinkPermissions.h"
#import "DBSHARINGLinkSettings.h"
#import "DBSHARINGListFileMembersArg.h"
#import "DBSHARINGListFileMembersBatchArg.h"
#import "DBSHARINGListFileMembersBatchResult.h"
#import "DBSHARINGListFileMembersContinueArg.h"
#import "DBSHARINGListFileMembersContinueError.h"
#import "DBSHARINGListFileMembersCountResult.h"
#import "DBSHARINGListFileMembersError.h"
#import "DBSHARINGListFileMembersIndividualResult.h"
#import "DBSHARINGListFilesArg.h"
#import "DBSHARINGListFilesContinueArg.h"
#import "DBSHARINGListFilesContinueError.h"
#import "DBSHARINGListFilesResult.h"
#import "DBSHARINGListFolderMembersArgs.h"
#import "DBSHARINGListFolderMembersContinueArg.h"
#import "DBSHARINGListFolderMembersContinueError.h"
#import "DBSHARINGListFolderMembersCursorArg.h"
#import "DBSHARINGListFoldersArgs.h"
#import "DBSHARINGListFoldersContinueArg.h"
#import "DBSHARINGListFoldersContinueError.h"
#import "DBSHARINGListFoldersResult.h"
#import "DBSHARINGListSharedLinksArg.h"
#import "DBSHARINGListSharedLinksError.h"
#import "DBSHARINGListSharedLinksResult.h"
#import "DBSHARINGMemberAccessLevelResult.h"
#import "DBSHARINGMemberAction.h"
#import "DBSHARINGMemberPermission.h"
#import "DBSHARINGMemberPolicy.h"
#import "DBSHARINGMemberSelector.h"
#import "DBSHARINGMembershipInfo.h"
#import "DBSHARINGModifySharedLinkSettingsArgs.h"
#import "DBSHARINGModifySharedLinkSettingsError.h"
#import "DBSHARINGMountFolderArg.h"
#import "DBSHARINGMountFolderError.h"
#import "DBSHARINGParentFolderAccessInfo.h"
#import "DBSHARINGPathLinkMetadata.h"
#import "DBSHARINGPendingUploadMode.h"
#import "DBSHARINGPermissionDeniedReason.h"
#import "DBSHARINGRelinquishFileMembershipArg.h"
#import "DBSHARINGRelinquishFileMembershipError.h"
#import "DBSHARINGRelinquishFolderMembershipArg.h"
#import "DBSHARINGRelinquishFolderMembershipError.h"
#import "DBSHARINGRemoveFileMemberArg.h"
#import "DBSHARINGRemoveFileMemberError.h"
#import "DBSHARINGRemoveFolderMemberArg.h"
#import "DBSHARINGRemoveFolderMemberError.h"
#import "DBSHARINGRemoveMemberJobStatus.h"
#import "DBSHARINGRequestedVisibility.h"
#import "DBSHARINGResolvedVisibility.h"
#import "DBSHARINGRevokeSharedLinkArg.h"
#import "DBSHARINGRevokeSharedLinkError.h"
#import "DBSHARINGSharedContentLinkMetadata.h"
#import "DBSHARINGSharedContentLinkMetadataBase.h"
#import "DBSHARINGSharedFileMembers.h"
#import "DBSHARINGSharedFileMetadata.h"
#import "DBSHARINGSharedFolderAccessError.h"
#import "DBSHARINGSharedFolderMemberError.h"
#import "DBSHARINGSharedFolderMembers.h"
#import "DBSHARINGSharedFolderMetadata.h"
#import "DBSHARINGSharedFolderMetadataBase.h"
#import "DBSHARINGSharedLinkAccessFailureReason.h"
#import "DBSHARINGSharedLinkError.h"
#import "DBSHARINGSharedLinkMetadata.h"
#import "DBSHARINGSharedLinkPolicy.h"
#import "DBSHARINGSharedLinkSettings.h"
#import "DBSHARINGSharedLinkSettingsError.h"
#import "DBSHARINGShareFolderArg.h"
#import "DBSHARINGShareFolderArgBase.h"
#import "DBSHARINGShareFolderError.h"
#import "DBSHARINGShareFolderErrorBase.h"
#import "DBSHARINGShareFolderJobStatus.h"
#import "DBSHARINGShareFolderLaunch.h"
#import "DBSHARINGSharePathError.h"
#import "DBSHARINGSharingFileAccessError.h"
#import "DBSHARINGSharingUserError.h"
#import "DBSHARINGTeamMemberInfo.h"
#import "DBSHARINGTransferFolderArg.h"
#import "DBSHARINGTransferFolderError.h"
#import "DBSHARINGUnmountFolderArg.h"
#import "DBSHARINGUnmountFolderError.h"
#import "DBSHARINGUnshareFileArg.h"
#import "DBSHARINGUnshareFileError.h"
#import "DBSHARINGUnshareFolderArg.h"
#import "DBSHARINGUnshareFolderError.h"
#import "DBSHARINGUpdateFileMemberArgs.h"
#import "DBSHARINGUpdateFolderMemberArg.h"
#import "DBSHARINGUpdateFolderMemberError.h"
#import "DBSHARINGUpdateFolderPolicyArg.h"
#import "DBSHARINGUpdateFolderPolicyError.h"
#import "DBSHARINGUserInfo.h"
#import "DBSHARINGUserMembershipInfo.h"
#import "DBSHARINGViewerInfoPolicy.h"
#import "DBSHARINGVisibility.h"
#import "DBTEAMActiveWebSession.h"
#import "DBTEAMAddPropertyTemplateArg.h"
#import "DBTEAMAddPropertyTemplateResult.h"
#import "DBTEAMAdminTier.h"
#import "DBTEAMApiApp.h"
#import "DBTEAMBaseDfbReport.h"
#import "DBTEAMBaseTeamFolderError.h"
#import "DBTEAMDateRange.h"
#import "DBTEAMDateRangeError.h"
#import "DBTEAMDesktopClientSession.h"
#import "DBTEAMDesktopPlatform.h"
#import "DBTEAMDevicesActive.h"
#import "DBTEAMDeviceSession.h"
#import "DBTEAMDeviceSessionArg.h"
#import "DBTEAMFeature.h"
#import "DBTEAMFeaturesGetValuesBatchArg.h"
#import "DBTEAMFeaturesGetValuesBatchError.h"
#import "DBTEAMFeaturesGetValuesBatchResult.h"
#import "DBTEAMFeatureValue.h"
#import "DBTEAMGetActivityReport.h"
#import "DBTEAMGetDevicesReport.h"
#import "DBTEAMGetMembershipReport.h"
#import "DBTEAMGetStorageReport.h"
#import "DBTEAMGroupAccessType.h"
#import "DBTEAMGroupCreateArg.h"
#import "DBTEAMGroupCreateError.h"
#import "DBTEAMGroupDeleteError.h"
#import "DBTEAMGroupFullInfo.h"
#import "DBTEAMGroupMemberInfo.h"
#import "DBTEAMGroupMembersAddArg.h"
#import "DBTEAMGroupMembersAddError.h"
#import "DBTEAMGroupMembersChangeResult.h"
#import "DBTEAMGroupMemberSelector.h"
#import "DBTEAMGroupMemberSelectorError.h"
#import "DBTEAMGroupMemberSetAccessTypeError.h"
#import "DBTEAMGroupMembersRemoveArg.h"
#import "DBTEAMGroupMembersRemoveError.h"
#import "DBTEAMGroupMembersSelector.h"
#import "DBTEAMGroupMembersSelectorError.h"
#import "DBTEAMGroupMembersSetAccessTypeArg.h"
#import "DBTEAMGroupSelector.h"
#import "DBTEAMGroupSelectorError.h"
#import "DBTEAMGroupSelectorWithTeamGroupError.h"
#import "DBTEAMGroupsGetInfoError.h"
#import "DBTEAMGroupsGetInfoItem.h"
#import "DBTEAMGroupsListArg.h"
#import "DBTEAMGroupsListContinueArg.h"
#import "DBTEAMGroupsListContinueError.h"
#import "DBTEAMGroupsListResult.h"
#import "DBTEAMGroupsMembersListArg.h"
#import "DBTEAMGroupsMembersListContinueArg.h"
#import "DBTEAMGroupsMembersListContinueError.h"
#import "DBTEAMGroupsMembersListResult.h"
#import "DBTEAMGroupsPollError.h"
#import "DBTEAMGroupsSelector.h"
#import "DBTEAMGroupUpdateArgs.h"
#import "DBTEAMGroupUpdateError.h"
#import "DBTEAMHasTeamSharedDropboxValue.h"
#import "DBTEAMIncludeMembersArg.h"
#import "DBTEAMListMemberAppsArg.h"
#import "DBTEAMListMemberAppsError.h"
#import "DBTEAMListMemberAppsResult.h"
#import "DBTEAMListMemberDevicesArg.h"
#import "DBTEAMListMemberDevicesError.h"
#import "DBTEAMListMemberDevicesResult.h"
#import "DBTEAMListMembersAppsArg.h"
#import "DBTEAMListMembersAppsError.h"
#import "DBTEAMListMembersAppsResult.h"
#import "DBTEAMListMembersDevicesArg.h"
#import "DBTEAMListMembersDevicesError.h"
#import "DBTEAMListMembersDevicesResult.h"
#import "DBTEAMListTeamAppsArg.h"
#import "DBTEAMListTeamAppsError.h"
#import "DBTEAMListTeamAppsResult.h"
#import "DBTEAMListTeamDevicesArg.h"
#import "DBTEAMListTeamDevicesError.h"
#import "DBTEAMListTeamDevicesResult.h"
#import "DBTEAMMemberAccess.h"
#import "DBTEAMMemberAddArg.h"
#import "DBTEAMMemberAddResult.h"
#import "DBTEAMMemberDevices.h"
#import "DBTEAMMemberLinkedApps.h"
#import "DBTEAMMemberProfile.h"
#import "DBTEAMMembersAddArg.h"
#import "DBTEAMMembersAddJobStatus.h"
#import "DBTEAMMembersAddLaunch.h"
#import "DBTEAMMembersDeactivateArg.h"
#import "DBTEAMMembersDeactivateError.h"
#import "DBTEAMMemberSelectorError.h"
#import "DBTEAMMembersGetInfoArgs.h"
#import "DBTEAMMembersGetInfoError.h"
#import "DBTEAMMembersGetInfoItem.h"
#import "DBTEAMMembersListArg.h"
#import "DBTEAMMembersListContinueArg.h"
#import "DBTEAMMembersListContinueError.h"
#import "DBTEAMMembersListError.h"
#import "DBTEAMMembersListResult.h"
#import "DBTEAMMembersRecoverArg.h"
#import "DBTEAMMembersRecoverError.h"
#import "DBTEAMMembersRemoveArg.h"
#import "DBTEAMMembersRemoveError.h"
#import "DBTEAMMembersSendWelcomeError.h"
#import "DBTEAMMembersSetPermissionsArg.h"
#import "DBTEAMMembersSetPermissionsError.h"
#import "DBTEAMMembersSetPermissionsResult.h"
#import "DBTEAMMembersSetProfileArg.h"
#import "DBTEAMMembersSetProfileError.h"
#import "DBTEAMMembersSuspendError.h"
#import "DBTEAMMembersUnsuspendArg.h"
#import "DBTEAMMembersUnsuspendError.h"
#import "DBTEAMMobileClientPlatform.h"
#import "DBTEAMMobileClientSession.h"
#import "DBTEAMNamespaceMetadata.h"
#import "DBTEAMNamespaceType.h"
#import "DBTEAMRemovedStatus.h"
#import "DBTEAMRevokeDesktopClientArg.h"
#import "DBTEAMRevokeDeviceSessionArg.h"
#import "DBTEAMRevokeDeviceSessionBatchArg.h"
#import "DBTEAMRevokeDeviceSessionBatchError.h"
#import "DBTEAMRevokeDeviceSessionBatchResult.h"
#import "DBTEAMRevokeDeviceSessionError.h"
#import "DBTEAMRevokeDeviceSessionStatus.h"
#import "DBTEAMRevokeLinkedApiAppArg.h"
#import "DBTEAMRevokeLinkedApiAppBatchArg.h"
#import "DBTEAMRevokeLinkedAppBatchError.h"
#import "DBTEAMRevokeLinkedAppBatchResult.h"
#import "DBTEAMRevokeLinkedAppError.h"
#import "DBTEAMRevokeLinkedAppStatus.h"
#import "DBTEAMStorageBucket.h"
#import "DBTEAMTeamFolderAccessError.h"
#import "DBTEAMTeamFolderActivateError.h"
#import "DBTEAMTeamFolderArchiveArg.h"
#import "DBTEAMTeamFolderArchiveError.h"
#import "DBTEAMTeamFolderArchiveJobStatus.h"
#import "DBTEAMTeamFolderArchiveLaunch.h"
#import "DBTEAMTeamFolderCreateArg.h"
#import "DBTEAMTeamFolderCreateError.h"
#import "DBTEAMTeamFolderGetInfoItem.h"
#import "DBTEAMTeamFolderIdArg.h"
#import "DBTEAMTeamFolderIdListArg.h"
#import "DBTEAMTeamFolderInvalidStatusError.h"
#import "DBTEAMTeamFolderListArg.h"
#import "DBTEAMTeamFolderListContinueArg.h"
#import "DBTEAMTeamFolderListContinueError.h"
#import "DBTEAMTeamFolderListError.h"
#import "DBTEAMTeamFolderListResult.h"
#import "DBTEAMTeamFolderMetadata.h"
#import "DBTEAMTeamFolderPermanentlyDeleteError.h"
#import "DBTEAMTeamFolderRenameArg.h"
#import "DBTEAMTeamFolderRenameError.h"
#import "DBTEAMTeamFolderStatus.h"
#import "DBTEAMTeamFolderTeamSharedDropboxError.h"
#import "DBTEAMTeamGetInfoResult.h"
#import "DBTEAMTeamMemberInfo.h"
#import "DBTEAMTeamMemberProfile.h"
#import "DBTEAMTeamMembershipType.h"
#import "DBTEAMTeamMemberStatus.h"
#import "DBTEAMTeamNamespacesListArg.h"
#import "DBTEAMTeamNamespacesListContinueArg.h"
#import "DBTEAMTeamNamespacesListContinueError.h"
#import "DBTEAMTeamNamespacesListResult.h"
#import "DBTEAMTokenGetAuthenticatedAdminError.h"
#import "DBTEAMTokenGetAuthenticatedAdminResult.h"
#import "DBTEAMUpdatePropertyTemplateArg.h"
#import "DBTEAMUpdatePropertyTemplateResult.h"
#import "DBTEAMUploadApiRateLimitValue.h"
#import "DBTEAMUserSelectorArg.h"
#import "DBTEAMUserSelectorError.h"
#import "DBTEAMUsersSelectorArg.h"
#import "DBTEAMCOMMONGroupManagementType.h"
#import "DBTEAMCOMMONGroupSummary.h"
#import "DBTEAMCOMMONGroupType.h"
#import "DBTEAMCOMMONTimeRange.h"
#import "DBTEAMLOGAccessMethodLogInfo.h"
#import "DBTEAMLOGAccountCaptureAvailability.h"
#import "DBTEAMLOGAccountCaptureChangeAvailabilityDetails.h"
#import "DBTEAMLOGAccountCaptureChangePolicyDetails.h"
#import "DBTEAMLOGAccountCaptureMigrateAccountDetails.h"
#import "DBTEAMLOGAccountCapturePolicy.h"
#import "DBTEAMLOGAccountCaptureRelinquishAccountDetails.h"
#import "DBTEAMLOGActorLogInfo.h"
#import "DBTEAMLOGAdminRole.h"
#import "DBTEAMLOGAllowDownloadDisabledDetails.h"
#import "DBTEAMLOGAllowDownloadEnabledDetails.h"
#import "DBTEAMLOGApiSessionLogInfo.h"
#import "DBTEAMLOGAppLinkTeamDetails.h"
#import "DBTEAMLOGAppLinkUserDetails.h"
#import "DBTEAMLOGAppLogInfo.h"
#import "DBTEAMLOGAppUnlinkTeamDetails.h"
#import "DBTEAMLOGAppUnlinkUserDetails.h"
#import "DBTEAMLOGAssetLogInfo.h"
#import "DBTEAMLOGCertificate.h"
#import "DBTEAMLOGCollectionShareDetails.h"
#import "DBTEAMLOGConfidentiality.h"
#import "DBTEAMLOGContentPermanentDeletePolicy.h"
#import "DBTEAMLOGContextLogInfo.h"
#import "DBTEAMLOGCreateFolderDetails.h"
#import "DBTEAMLOGDataPlacementRestrictionChangePolicyDetails.h"
#import "DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails.h"
#import "DBTEAMLOGDesktopSessionLogInfo.h"
#import "DBTEAMLOGDeviceApprovalsChangeDesktopPolicyDetails.h"
#import "DBTEAMLOGDeviceApprovalsChangeMobilePolicyDetails.h"
#import "DBTEAMLOGDeviceApprovalsChangeOverageActionDetails.h"
#import "DBTEAMLOGDeviceApprovalsChangeUnlinkActionDetails.h"
#import "DBTEAMLOGDeviceApprovalsPolicy.h"
#import "DBTEAMLOGDeviceApprovalsRolloutPolicy.h"
#import "DBTEAMLOGDeviceChangeIpDesktopDetails.h"
#import "DBTEAMLOGDeviceChangeIpMobileDetails.h"
#import "DBTEAMLOGDeviceChangeIpWebDetails.h"
#import "DBTEAMLOGDeviceDeleteOnUnlinkFailDetails.h"
#import "DBTEAMLOGDeviceDeleteOnUnlinkSuccessDetails.h"
#import "DBTEAMLOGDeviceLinkFailDetails.h"
#import "DBTEAMLOGDeviceLinkSuccessDetails.h"
#import "DBTEAMLOGDeviceLogInfo.h"
#import "DBTEAMLOGDeviceManagementDisabledDetails.h"
#import "DBTEAMLOGDeviceManagementEnabledDetails.h"
#import "DBTEAMLOGDeviceType.h"
#import "DBTEAMLOGDeviceUnlinkDetails.h"
#import "DBTEAMLOGDeviceUnlinkPolicy.h"
#import "DBTEAMLOGDisabledDomainInvitesDetails.h"
#import "DBTEAMLOGDomainInvitesApproveRequestToJoinTeamDetails.h"
#import "DBTEAMLOGDomainInvitesDeclineRequestToJoinTeamDetails.h"
#import "DBTEAMLOGDomainInvitesEmailExistingUsersDetails.h"
#import "DBTEAMLOGDomainInvitesRequestToJoinTeamDetails.h"
#import "DBTEAMLOGDomainInvitesSetInviteNewUserPrefToNoDetails.h"
#import "DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails.h"
#import "DBTEAMLOGDomainVerificationAddDomainFailDetails.h"
#import "DBTEAMLOGDomainVerificationAddDomainSuccessDetails.h"
#import "DBTEAMLOGDomainVerificationRemoveDomainDetails.h"
#import "DBTEAMLOGDurationLogInfo.h"
#import "DBTEAMLOGEmmAddExceptionDetails.h"
#import "DBTEAMLOGEmmChangePolicyDetails.h"
#import "DBTEAMLOGEmmCreateExceptionsReportDetails.h"
#import "DBTEAMLOGEmmCreateUsageReportDetails.h"
#import "DBTEAMLOGEmmLoginSuccessDetails.h"
#import "DBTEAMLOGEmmPolicy.h"
#import "DBTEAMLOGEmmRefreshAuthTokenDetails.h"
#import "DBTEAMLOGEmmRemoveExceptionDetails.h"
#import "DBTEAMLOGEnabledDomainInvitesDetails.h"
#import "DBTEAMLOGEventCategory.h"
#import "DBTEAMLOGEventDetails.h"
#import "DBTEAMLOGEventType.h"
#import "DBTEAMLOGExtendedVersionHistoryChangePolicyDetails.h"
#import "DBTEAMLOGExtendedVersionHistoryPolicy.h"
#import "DBTEAMLOGFailureDetailsLogInfo.h"
#import "DBTEAMLOGFileAddCommentDetails.h"
#import "DBTEAMLOGFileAddDetails.h"
#import "DBTEAMLOGFileCommentsChangePolicyDetails.h"
#import "DBTEAMLOGFileCommentsPolicy.h"
#import "DBTEAMLOGFileCopyDetails.h"
#import "DBTEAMLOGFileDeleteDetails.h"
#import "DBTEAMLOGFileDownloadDetails.h"
#import "DBTEAMLOGFileEditDetails.h"
#import "DBTEAMLOGFileGetCopyReferenceDetails.h"
#import "DBTEAMLOGFileLikeCommentDetails.h"
#import "DBTEAMLOGFileLogInfo.h"
#import "DBTEAMLOGFileMoveDetails.h"
#import "DBTEAMLOGFileOrFolderLogInfo.h"
#import "DBTEAMLOGFilePermanentlyDeleteDetails.h"
#import "DBTEAMLOGFilePreviewDetails.h"
#import "DBTEAMLOGFileRenameDetails.h"
#import "DBTEAMLOGFileRequestAddDeadlineDetails.h"
#import "DBTEAMLOGFileRequestChangeFolderDetails.h"
#import "DBTEAMLOGFileRequestChangeTitleDetails.h"
#import "DBTEAMLOGFileRequestCloseDetails.h"
#import "DBTEAMLOGFileRequestCreateDetails.h"
#import "DBTEAMLOGFileRequestReceiveFileDetails.h"
#import "DBTEAMLOGFileRequestRemoveDeadlineDetails.h"
#import "DBTEAMLOGFileRequestsChangePolicyDetails.h"
#import "DBTEAMLOGFileRequestsEmailsEnabledDetails.h"
#import "DBTEAMLOGFileRequestsEmailsRestrictedToTeamOnlyDetails.h"
#import "DBTEAMLOGFileRequestSendDetails.h"
#import "DBTEAMLOGFileRequestsPolicy.h"
#import "DBTEAMLOGFileRestoreDetails.h"
#import "DBTEAMLOGFileRevertDetails.h"
#import "DBTEAMLOGFileRollbackChangesDetails.h"
#import "DBTEAMLOGFileSaveCopyReferenceDetails.h"
#import "DBTEAMLOGFileUnlikeCommentDetails.h"
#import "DBTEAMLOGFolderLogInfo.h"
#import "DBTEAMLOGGeoLocationLogInfo.h"
#import "DBTEAMLOGGetTeamEventsArg.h"
#import "DBTEAMLOGGetTeamEventsContinueArg.h"
#import "DBTEAMLOGGetTeamEventsContinueError.h"
#import "DBTEAMLOGGetTeamEventsError.h"
#import "DBTEAMLOGGetTeamEventsResult.h"
#import "DBTEAMLOGGoogleSsoChangePolicyDetails.h"
#import "DBTEAMLOGGoogleSsoPolicy.h"
#import "DBTEAMLOGGroupAddExternalIdDetails.h"
#import "DBTEAMLOGGroupAddMemberDetails.h"
#import "DBTEAMLOGGroupChangeExternalIdDetails.h"
#import "DBTEAMLOGGroupChangeManagementTypeDetails.h"
#import "DBTEAMLOGGroupChangeMemberRoleDetails.h"
#import "DBTEAMLOGGroupCreateDetails.h"
#import "DBTEAMLOGGroupDeleteDetails.h"
#import "DBTEAMLOGGroupDescriptionUpdatedDetails.h"
#import "DBTEAMLOGGroupJoinPolicy.h"
#import "DBTEAMLOGGroupJoinPolicyUpdatedDetails.h"
#import "DBTEAMLOGGroupLogInfo.h"
#import "DBTEAMLOGGroupManagementType.h"
#import "DBTEAMLOGGroupMovedDetails.h"
#import "DBTEAMLOGGroupRemoveExternalIdDetails.h"
#import "DBTEAMLOGGroupRemoveMemberDetails.h"
#import "DBTEAMLOGGroupRenameDetails.h"
#import "DBTEAMLOGGroupUserManagementChangePolicyDetails.h"
#import "DBTEAMLOGGroupUserManagementPolicy.h"
#import "DBTEAMLOGHostLogInfo.h"
#import "DBTEAMLOGJoinTeamDetails.h"
#import "DBTEAMLOGLinkAudience.h"
#import "DBTEAMLOGLogoutDetails.h"
#import "DBTEAMLOGMemberAddNameDetails.h"
#import "DBTEAMLOGMemberChangeAdminRoleDetails.h"
#import "DBTEAMLOGMemberChangeEmailDetails.h"
#import "DBTEAMLOGMemberChangeMembershipTypeDetails.h"
#import "DBTEAMLOGMemberChangeNameDetails.h"
#import "DBTEAMLOGMemberChangeStatusDetails.h"
#import "DBTEAMLOGMemberPermanentlyDeleteAccountContentsDetails.h"
#import "DBTEAMLOGMemberRequestsChangePolicyDetails.h"
#import "DBTEAMLOGMemberRequestsPolicy.h"
#import "DBTEAMLOGMemberSpaceLimitsAddExceptionDetails.h"
#import "DBTEAMLOGMemberSpaceLimitsChangePolicyDetails.h"
#import "DBTEAMLOGMemberSpaceLimitsChangeStatusDetails.h"
#import "DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails.h"
#import "DBTEAMLOGMemberStatus.h"
#import "DBTEAMLOGMemberSuggestDetails.h"
#import "DBTEAMLOGMemberSuggestionsChangePolicyDetails.h"
#import "DBTEAMLOGMemberSuggestionsPolicy.h"
#import "DBTEAMLOGMemberTransferAccountContentsDetails.h"
#import "DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails.h"
#import "DBTEAMLOGMicrosoftOfficeAddinPolicy.h"
#import "DBTEAMLOGMissingDetails.h"
#import "DBTEAMLOGMobileSessionLogInfo.h"
#import "DBTEAMLOGNamespaceRelativePathLogInfo.h"
#import "DBTEAMLOGNetworkControlChangePolicyDetails.h"
#import "DBTEAMLOGNetworkControlPolicy.h"
#import "DBTEAMLOGNonTeamMemberLogInfo.h"
#import "DBTEAMLOGNoteAclInviteOnlyDetails.h"
#import "DBTEAMLOGNoteAclLinkDetails.h"
#import "DBTEAMLOGNoteAclTeamLinkDetails.h"
#import "DBTEAMLOGNoteSharedDetails.h"
#import "DBTEAMLOGNoteShareReceiveDetails.h"
#import "DBTEAMLOGOpenNoteSharedDetails.h"
#import "DBTEAMLOGOriginLogInfo.h"
#import "DBTEAMLOGPaperAccessType.h"
#import "DBTEAMLOGPaperChangeDeploymentPolicyDetails.h"
#import "DBTEAMLOGPaperChangeMemberPolicyDetails.h"
#import "DBTEAMLOGPaperChangePolicyDetails.h"
#import "DBTEAMLOGPaperContentAddMemberDetails.h"
#import "DBTEAMLOGPaperContentAddToFolderDetails.h"
#import "DBTEAMLOGPaperContentArchiveDetails.h"
#import "DBTEAMLOGPaperContentChangeSubscriptionDetails.h"
#import "DBTEAMLOGPaperContentCreateDetails.h"
#import "DBTEAMLOGPaperContentPermanentlyDeleteDetails.h"
#import "DBTEAMLOGPaperContentRemoveFromFolderDetails.h"
#import "DBTEAMLOGPaperContentRemoveMemberDetails.h"
#import "DBTEAMLOGPaperContentRenameDetails.h"
#import "DBTEAMLOGPaperContentRestoreDetails.h"
#import "DBTEAMLOGPaperDeploymentPolicy.h"
#import "DBTEAMLOGPaperDocAddCommentDetails.h"
#import "DBTEAMLOGPaperDocChangeMemberRoleDetails.h"
#import "DBTEAMLOGPaperDocChangeSharingPolicyDetails.h"
#import "DBTEAMLOGPaperDocDeleteCommentDetails.h"
#import "DBTEAMLOGPaperDocDeletedDetails.h"
#import "DBTEAMLOGPaperDocDownloadDetails.h"
#import "DBTEAMLOGPaperDocEditCommentDetails.h"
#import "DBTEAMLOGPaperDocEditDetails.h"
#import "DBTEAMLOGPaperDocFollowedDetails.h"
#import "DBTEAMLOGPaperDocMentionDetails.h"
#import "DBTEAMLOGPaperDocRequestAccessDetails.h"
#import "DBTEAMLOGPaperDocResolveCommentDetails.h"
#import "DBTEAMLOGPaperDocRevertDetails.h"
#import "DBTEAMLOGPaperDocSlackShareDetails.h"
#import "DBTEAMLOGPaperDocTeamInviteDetails.h"
#import "DBTEAMLOGPaperDocumentLogInfo.h"
#import "DBTEAMLOGPaperDocUnresolveCommentDetails.h"
#import "DBTEAMLOGPaperDocViewDetails.h"
#import "DBTEAMLOGPaperDownloadFormat.h"
#import "DBTEAMLOGPaperEnabledUsersGroupAdditionDetails.h"
#import "DBTEAMLOGPaperEnabledUsersGroupRemovalDetails.h"
#import "DBTEAMLOGPaperExternalViewAllowDetails.h"
#import "DBTEAMLOGPaperExternalViewDefaultTeamDetails.h"
#import "DBTEAMLOGPaperExternalViewForbidDetails.h"
#import "DBTEAMLOGPaperFolderDeletedDetails.h"
#import "DBTEAMLOGPaperFolderFollowedDetails.h"
#import "DBTEAMLOGPaperFolderLogInfo.h"
#import "DBTEAMLOGPaperFolderTeamInviteDetails.h"
#import "DBTEAMLOGPaperMemberPolicy.h"
#import "DBTEAMLOGPaperPolicy.h"
#import "DBTEAMLOGPaperTaggedValue.h"
#import "DBTEAMLOGParticipantLogInfo.h"
#import "DBTEAMLOGPasswordChangeDetails.h"
#import "DBTEAMLOGPasswordLoginFailDetails.h"
#import "DBTEAMLOGPasswordLoginSuccessDetails.h"
#import "DBTEAMLOGPasswordResetAllDetails.h"
#import "DBTEAMLOGPasswordResetDetails.h"
#import "DBTEAMLOGPathLogInfo.h"
#import "DBTEAMLOGPermanentDeleteChangePolicyDetails.h"
#import "DBTEAMLOGPlacementRestriction.h"
#import "DBTEAMLOGRelocateAssetReferencesLogInfo.h"
#import "DBTEAMLOGRemoveLogoutUrlDetails.h"
#import "DBTEAMLOGRemoveSsoUrlDetails.h"
#import "DBTEAMLOGResellerLogInfo.h"
#import "DBTEAMLOGResellerSupportSessionEndDetails.h"
#import "DBTEAMLOGResellerSupportSessionStartDetails.h"
#import "DBTEAMLOGSessionLogInfo.h"
#import "DBTEAMLOGSfAddGroupDetails.h"
#import "DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails.h"
#import "DBTEAMLOGSfExternalInviteWarnDetails.h"
#import "DBTEAMLOGSfInviteGroupDetails.h"
#import "DBTEAMLOGSfNestDetails.h"
#import "DBTEAMLOGSfTeamDeclineDetails.h"
#import "DBTEAMLOGSfTeamGrantAccessDetails.h"
#import "DBTEAMLOGSfTeamInviteChangeRoleDetails.h"
#import "DBTEAMLOGSfTeamInviteDetails.h"
#import "DBTEAMLOGSfTeamJoinDetails.h"
#import "DBTEAMLOGSfTeamJoinFromOobLinkDetails.h"
#import "DBTEAMLOGSfTeamUninviteDetails.h"
#import "DBTEAMLOGSharedContentAddInviteesDetails.h"
#import "DBTEAMLOGSharedContentAddLinkExpiryDetails.h"
#import "DBTEAMLOGSharedContentAddLinkPasswordDetails.h"
#import "DBTEAMLOGSharedContentAddMemberDetails.h"
#import "DBTEAMLOGSharedContentChangeDownloadsPolicyDetails.h"
#import "DBTEAMLOGSharedContentChangeInviteeRoleDetails.h"
#import "DBTEAMLOGSharedContentChangeLinkAudienceDetails.h"
#import "DBTEAMLOGSharedContentChangeLinkExpiryDetails.h"
#import "DBTEAMLOGSharedContentChangeLinkPasswordDetails.h"
#import "DBTEAMLOGSharedContentChangeMemberRoleDetails.h"
#import "DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails.h"
#import "DBTEAMLOGSharedContentClaimInvitationDetails.h"
#import "DBTEAMLOGSharedContentCopyDetails.h"
#import "DBTEAMLOGSharedContentDownloadDetails.h"
#import "DBTEAMLOGSharedContentDownloadsPolicy.h"
#import "DBTEAMLOGSharedContentRelinquishMembershipDetails.h"
#import "DBTEAMLOGSharedContentRemoveInviteeDetails.h"
#import "DBTEAMLOGSharedContentRemoveLinkExpiryDetails.h"
#import "DBTEAMLOGSharedContentRemoveLinkPasswordDetails.h"
#import "DBTEAMLOGSharedContentRemoveMemberDetails.h"
#import "DBTEAMLOGSharedContentRequestAccessDetails.h"
#import "DBTEAMLOGSharedContentUnshareDetails.h"
#import "DBTEAMLOGSharedContentViewDetails.h"
#import "DBTEAMLOGSharedContentViewerInfoPolicy.h"
#import "DBTEAMLOGSharedFolderChangeConfidentialityDetails.h"
#import "DBTEAMLOGSharedFolderChangeLinkPolicyDetails.h"
#import "DBTEAMLOGSharedFolderChangeMemberManagementPolicyDetails.h"
#import "DBTEAMLOGSharedFolderChangeMemberPolicyDetails.h"
#import "DBTEAMLOGSharedFolderCreateDetails.h"
#import "DBTEAMLOGSharedFolderLinkPolicy.h"
#import "DBTEAMLOGSharedFolderMemberPolicy.h"
#import "DBTEAMLOGSharedFolderMembershipManagementPolicy.h"
#import "DBTEAMLOGSharedFolderMountDetails.h"
#import "DBTEAMLOGSharedFolderTransferOwnershipDetails.h"
#import "DBTEAMLOGSharedFolderUnmountDetails.h"
#import "DBTEAMLOGSharedNoteOpenedDetails.h"
#import "DBTEAMLOGSharingChangeFolderJoinPolicyDetails.h"
#import "DBTEAMLOGSharingChangeLinkPolicyDetails.h"
#import "DBTEAMLOGSharingChangeMemberPolicyDetails.h"
#import "DBTEAMLOGSharingFolderJoinPolicy.h"
#import "DBTEAMLOGSharingLinkPolicy.h"
#import "DBTEAMLOGSharingMemberPolicy.h"
#import "DBTEAMLOGShmodelAppCreateDetails.h"
#import "DBTEAMLOGShmodelCreateDetails.h"
#import "DBTEAMLOGShmodelDisableDetails.h"
#import "DBTEAMLOGShmodelFbShareDetails.h"
#import "DBTEAMLOGShmodelGroupShareDetails.h"
#import "DBTEAMLOGShmodelRemoveExpirationDetails.h"
#import "DBTEAMLOGShmodelSetExpirationDetails.h"
#import "DBTEAMLOGShmodelTeamCopyDetails.h"
#import "DBTEAMLOGShmodelTeamDownloadDetails.h"
#import "DBTEAMLOGShmodelTeamShareDetails.h"
#import "DBTEAMLOGShmodelTeamViewDetails.h"
#import "DBTEAMLOGShmodelVisibilityPasswordDetails.h"
#import "DBTEAMLOGShmodelVisibilityPublicDetails.h"
#import "DBTEAMLOGShmodelVisibilityTeamOnlyDetails.h"
#import "DBTEAMLOGSignInAsSessionEndDetails.h"
#import "DBTEAMLOGSignInAsSessionStartDetails.h"
#import "DBTEAMLOGSmartSyncChangePolicyDetails.h"
#import "DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails.h"
#import "DBTEAMLOGSmartSyncNotOptOutDetails.h"
#import "DBTEAMLOGSmartSyncOptOutDetails.h"
#import "DBTEAMLOGSmartSyncOptOutPolicy.h"
#import "DBTEAMLOGSmartSyncPolicy.h"
#import "DBTEAMLOGSpaceLimitsLevel.h"
#import "DBTEAMLOGSpaceLimitsStatus.h"
#import "DBTEAMLOGSsoChangeCertDetails.h"
#import "DBTEAMLOGSsoChangeLoginUrlDetails.h"
#import "DBTEAMLOGSsoChangeLogoutUrlDetails.h"
#import "DBTEAMLOGSsoChangePolicyDetails.h"
#import "DBTEAMLOGSsoChangeSamlIdentityModeDetails.h"
#import "DBTEAMLOGSsoLoginFailDetails.h"
#import "DBTEAMLOGSsoPolicy.h"
#import "DBTEAMLOGTeamActivityCreateReportDetails.h"
#import "DBTEAMLOGTeamEvent.h"
#import "DBTEAMLOGTeamFolderChangeStatusDetails.h"
#import "DBTEAMLOGTeamFolderCreateDetails.h"
#import "DBTEAMLOGTeamFolderDowngradeDetails.h"
#import "DBTEAMLOGTeamFolderPermanentlyDeleteDetails.h"
#import "DBTEAMLOGTeamFolderRenameDetails.h"
#import "DBTEAMLOGTeamFolderStatus.h"
#import "DBTEAMLOGTeamLinkedAppLogInfo.h"
#import "DBTEAMLOGTeamMemberLogInfo.h"
#import "DBTEAMLOGTeamMembershipType.h"
#import "DBTEAMLOGTeamMergeFromDetails.h"
#import "DBTEAMLOGTeamMergeToDetails.h"
#import "DBTEAMLOGTeamName.h"
#import "DBTEAMLOGTeamProfileAddLogoDetails.h"
#import "DBTEAMLOGTeamProfileChangeLogoDetails.h"
#import "DBTEAMLOGTeamProfileChangeNameDetails.h"
#import "DBTEAMLOGTeamProfileRemoveLogoDetails.h"
#import "DBTEAMLOGTfaAddBackupPhoneDetails.h"
#import "DBTEAMLOGTfaAddSecurityKeyDetails.h"
#import "DBTEAMLOGTfaChangeBackupPhoneDetails.h"
#import "DBTEAMLOGTfaChangePolicyDetails.h"
#import "DBTEAMLOGTfaChangeStatusDetails.h"
#import "DBTEAMLOGTfaConfiguration.h"
#import "DBTEAMLOGTfaPolicy.h"
#import "DBTEAMLOGTfaRemoveBackupPhoneDetails.h"
#import "DBTEAMLOGTfaRemoveSecurityKeyDetails.h"
#import "DBTEAMLOGTfaResetDetails.h"
#import "DBTEAMLOGTimeUnit.h"
#import "DBTEAMLOGTwoAccountChangePolicyDetails.h"
#import "DBTEAMLOGTwoAccountPolicy.h"
#import "DBTEAMLOGUserLinkedAppLogInfo.h"
#import "DBTEAMLOGUserLogInfo.h"
#import "DBTEAMLOGUserNameLogInfo.h"
#import "DBTEAMLOGUserOrTeamLinkedAppLogInfo.h"
#import "DBTEAMLOGWebSessionLogInfo.h"
#import "DBTEAMLOGWebSessionsChangeFixedLengthPolicyDetails.h"
#import "DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails.h"
#import "DBTEAMLOGWebSessionsFixedLengthPolicy.h"
#import "DBTEAMLOGWebSessionsIdleLengthPolicy.h"
#import "DBTEAMPOLICIESEmmState.h"
#import "DBTEAMPOLICIESOfficeAddInPolicy.h"
#import "DBTEAMPOLICIESSharedFolderJoinPolicy.h"
#import "DBTEAMPOLICIESSharedFolderMemberPolicy.h"
#import "DBTEAMPOLICIESSharedLinkCreatePolicy.h"
#import "DBTEAMPOLICIESTeamMemberPolicies.h"
#import "DBTEAMPOLICIESTeamSharingPolicies.h"
#import "DBUSERSAccount.h"
#import "DBUSERSBasicAccount.h"
#import "DBUSERSFullAccount.h"
#import "DBUSERSFullTeam.h"
#import "DBUSERSGetAccountArg.h"
#import "DBUSERSGetAccountBatchArg.h"
#import "DBUSERSGetAccountBatchError.h"
#import "DBUSERSGetAccountError.h"
#import "DBUSERSIndividualSpaceAllocation.h"
#import "DBUSERSName.h"
#import "DBUSERSSpaceAllocation.h"
#import "DBUSERSSpaceUsage.h"
#import "DBUSERSTeam.h"
#import "DBUSERSTeamSpaceAllocation.h"
#import "DBUSERSCOMMONAccountType.h"
#import "DBAppBaseClient.h"
#import "DBTeamBaseClient.h"
#import "DBUserBaseClient.h"
#import "DBSDKImportsGenerated.h"
#import "DBSerializableProtocol.h"
#import "DBStoneBase.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBAUTHAppAuthRoutes.h"
#import "DBAUTHUserAuthRoutes.h"
#import "DBFILESUserAuthRoutes.h"
#import "DBPAPERUserAuthRoutes.h"
#import "DBSHARINGUserAuthRoutes.h"
#import "DBTEAMLOGTeamAuthRoutes.h"
#import "DBTEAMTeamAuthRoutes.h"
#import "DBUSERSUserAuthRoutes.h"
#import "DBAUTHRouteObjects.h"
#import "DBFILESRouteObjects.h"
#import "DBPAPERRouteObjects.h"
#import "DBSHARINGRouteObjects.h"
#import "DBTEAMLOGRouteObjects.h"
#import "DBTEAMRouteObjects.h"
#import "DBUSERSRouteObjects.h"
#import "DBAppClient.h"
#import "DBClientsManager.h"
#import "DBSDKImportsShared.h"
#import "DBTeamClient.h"
#import "DBUserClient.h"
#import "DBGlobalErrorResponseHandler.h"
#import "DBHandlerTypes.h"
#import "DBRequestErrors.h"
#import "DBTasks.h"
#import "DBTasksStorage.h"
#import "DBTransportBaseClient.h"
#import "DBTransportBaseConfig.h"
#import "DBTransportClientProtocol.h"
#import "DBTransportDefaultClient.h"
#import "DBTransportDefaultConfig.h"
#import "DBOAuthManager.h"
#import "DBOAuthResult.h"
#import "DBSDKKeychain.h"
#import "DBSharedApplicationProtocol.h"
#import "DBCustomDatatypes.h"
#import "DBCustomRoutes.h"
#import "DBCustomTasks.h"
#import "DBSDKConstants.h"
#import "ObjectiveDropboxOfficial.h"
#import "ObjectiveDropboxOfficialLib.h"
#import "DBClientsManager+MobileAuth-iOS.h"
#import "DBOAuthMobile-iOS.h"
#import "DBOAuthMobileManager-iOS.h"
#import "DBSDKImports-iOS.h"
#import "DBOfficialAppConnector-iOS.h"
#import "DBOpenWithInfo-iOS.h"

FOUNDATION_EXPORT double ObjectiveDropboxOfficialVersionNumber;
FOUNDATION_EXPORT const unsigned char ObjectiveDropboxOfficialVersionString[];

