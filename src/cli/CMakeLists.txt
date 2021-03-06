# Copyright (c) 2018 The Open-Transactions developers
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(MODULE_NAME opentxs-cli)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories(${OPENSSL_INCLUDE_DIR})

set(cxx-sources
  commands/CmdAcceptAll.cpp
  commands/CmdAcceptInbox.cpp
  commands/CmdAcceptIncoming.cpp
  commands/CmdAcceptInvoices.cpp
  commands/CmdAcceptMoney.cpp
  commands/CmdAcceptPayments.cpp
  commands/CmdAcceptReceipts.cpp
  commands/CmdAcceptTransfers.cpp
  commands/CmdAcknowledgeBailment.cpp
  commands/CmdAcknowledgeConnection.cpp
  commands/CmdAcknowledgeNotice.cpp
  commands/CmdAcknowledgeOutBailment.cpp
  commands/CmdActivitySummary.cpp
  commands/CmdAddAsset.cpp
  commands/CmdAddBitcoinAccount.cpp
  commands/CmdAddContact.cpp
  commands/CmdAddContract.cpp
  commands/CmdAddServer.cpp
  commands/CmdAddSignature.cpp
  commands/CmdAllocateBitcoinAddress.cpp
  commands/CmdArchivePeerReply.cpp
  commands/CmdAssignBitcoinAddress.cpp
  commands/CmdUsageCredits.cpp
  commands/CmdBase.cpp
  commands/CmdBaseAccept.cpp
  commands/CmdBaseInstrument.cpp
  commands/CmdCancel.cpp
  commands/CmdCanMessage.cpp
  commands/CmdChangePw.cpp
  commands/CmdPingNotary.cpp
  commands/CmdCheckNym.cpp
  commands/CmdClearExpired.cpp
  commands/CmdClearRecords.cpp
  commands/CmdConfirm.cpp
  commands/CmdContactName.cpp
  commands/CmdConvertPaymentCode.cpp
  commands/CmdDecode.cpp
  commands/CmdDecrypt.cpp
  commands/CmdDeposit.cpp
  commands/CmdDepositCheques.cpp
  commands/CmdDiscard.cpp
  commands/CmdEditAccount.cpp
  commands/CmdEditAsset.cpp
  commands/CmdEditNym.cpp
  commands/CmdEditServer.cpp
  commands/CmdEncode.cpp
  commands/CmdEncrypt.cpp
  commands/CmdExchangeBasket.cpp
  commands/CmdExportCash.cpp
  commands/CmdExportNym.cpp
  commands/CmdFindNym.cpp
  commands/CmdFindServer.cpp
  commands/CmdGetContact.cpp
  commands/CmdGetContract.cpp
  commands/CmdGetMarkets.cpp
  commands/CmdGetMyOffers.cpp
  commands/CmdGetOffers.cpp
  commands/CmdGetPeerReplies.cpp
  commands/CmdGetPeerReply.cpp
  commands/CmdGetPeerRequest.cpp
  commands/CmdGetPeerRequests.cpp
  commands/CmdHaveContact.cpp
  commands/CmdImportCash.cpp
  commands/CmdImportNym.cpp
  commands/CmdImportOtherNym.cpp
  commands/CmdImportPublicNym.cpp
  commands/CmdImportSeed.cpp
  commands/CmdInbox.cpp
  commands/CmdInpayments.cpp
  commands/CmdIssueAsset.cpp
  commands/CmdKillOffer.cpp
  commands/CmdKillPlan.cpp
  commands/CmdMarkRead.cpp
  commands/CmdMarkUnRead.cpp
  commands/CmdMergeContact.cpp
  commands/CmdModifyNym.cpp
  commands/CmdNewAccount.cpp
  commands/CmdNewAsset.cpp
  commands/CmdNewBasket.cpp
  commands/CmdNewKey.cpp
  commands/CmdNewNymHD.cpp
  commands/CmdNewNymLegacy.cpp
  commands/CmdNewOffer.cpp
  commands/CmdNotifyBailment.cpp
  commands/CmdRequestOutBailment.cpp
  commands/CmdOutbox.cpp
  commands/CmdOutpayment.cpp
  commands/CmdPairNode.cpp
  commands/CmdPairStatus.cpp
  commands/CmdPasswordDecrypt.cpp
  commands/CmdPasswordEncrypt.cpp
  commands/CmdPayDividend.cpp
  commands/CmdPayInvoice.cpp
  commands/CmdPeerStoreSecret.cpp
  commands/CmdPreloadActivity.cpp
  commands/CmdPreloadThread.cpp
  commands/CmdProposePlan.cpp
  commands/CmdRefresh.cpp
  commands/CmdRefreshAccount.cpp
  commands/CmdRefreshAll.cpp
  commands/CmdRefreshNym.cpp
  commands/CmdRegisterContractNym.cpp
  commands/CmdRegisterContractServer.cpp
  commands/CmdRegisterContractUnit.cpp
  commands/CmdRegisterNym.cpp
  commands/CmdRenameNym.cpp
  commands/CmdRequestAdmin.cpp
  commands/CmdRequestBailment.cpp
  commands/CmdRequestConnection.cpp
  commands/CmdSendCash.cpp
  commands/CmdSendCheque.cpp
  commands/CmdSendInvoice.cpp
  commands/CmdSendMessage.cpp
  commands/CmdSendVoucher.cpp
  commands/CmdServerAddClaim.cpp
  commands/CmdSetProfileValue.cpp
  commands/CmdShowAccount.cpp
  commands/CmdShowAccounts.cpp
  commands/CmdShowActive.cpp
  commands/CmdShowAssets.cpp
  commands/CmdShowBalance.cpp
  commands/CmdShowBasket.cpp
  commands/CmdShowContact.cpp
  commands/CmdShowContacts.cpp
  commands/CmdShowCredential.cpp
  commands/CmdShowCredentials.cpp
  commands/CmdShowExpired.cpp
  commands/CmdShowIssuers.cpp
  commands/CmdShowMarkets.cpp
  commands/CmdShowMessagable.cpp
  commands/CmdShowMint.cpp
  commands/CmdShowMyOffers.cpp
  commands/CmdShowNym.cpp
  commands/CmdShowNyms.cpp
  commands/CmdShowOffers.cpp
  commands/CmdShowPayment.cpp
  commands/CmdShowPayable.cpp
  commands/CmdShowPhrase.cpp
  commands/CmdShowProfile.cpp
  commands/CmdShowPurse.cpp
  commands/CmdShowRecords.cpp
  commands/CmdShowSeed.cpp
  commands/CmdShowServers.cpp
  commands/CmdShowThread.cpp
  commands/CmdShowThreads.cpp
  commands/CmdShowUnreadThreads.cpp
  commands/CmdShowWallet.cpp
  commands/CmdShowWords.cpp
  commands/CmdSignContract.cpp
  commands/CmdShowWallet.cpp
  commands/CmdStartIntroductionServer.cpp
  commands/CmdStartServer.cpp
  commands/CmdTransfer.cpp
  commands/CmdTriggerClause.cpp
  commands/CmdVerifyPassword.cpp
  commands/CmdVerifyReceipt.cpp
  commands/CmdVerifySignature.cpp
  commands/CmdWithdrawCash.cpp
  commands/CmdWithdrawVoucher.cpp
  commands/CmdWriteCheque.cpp
  commands/CmdWriteInvoice.cpp
  opentxs.cpp
  main.cpp
  Record.cpp
  RecordList.cpp
)

if (WIN32)
  configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../cmake/winexe.rc.in
    ${CMAKE_CURRENT_BINARY_DIR}/module.rc
    @ONLY
  )

  add_executable(
    ${MODULE_NAME}
    ${cxx-sources}
    ${CMAKE_CURRENT_BINARY_DIR}/module.rc
  )
else()
  add_executable(${MODULE_NAME} ${cxx-sources})
endif()

set_target_properties(${MODULE_NAME} PROPERTIES OUTPUT_NAME "opentxs")

target_link_libraries(${MODULE_NAME}
  ${OPENTXS_LIBRARIES}
  ${OPENTXS_PROTO_LIBRARIES}
  ${PROTOBUF_LITE_LIBRARIES}
  ${OPENSSL_LIBRARIES}
  anyoption
)

install(TARGETS ${MODULE_NAME} DESTINATION bin COMPONENT main)
