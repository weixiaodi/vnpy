.def("reqAuthenticate", &TdApi::reqAuthenticate)
.def("reqUserLogin", &TdApi::reqUserLogin)
.def("reqUserPasswordUpdate", &TdApi::reqUserPasswordUpdate)
.def("reqOrderInsert", &TdApi::reqOrderInsert)
.def("reqOrderAction", &TdApi::reqOrderAction)
.def("reqExerciseOrderInsert", &TdApi::reqExerciseOrderInsert)
.def("reqExerciseOrderAction", &TdApi::reqExerciseOrderAction)
.def("reqLockInsert", &TdApi::reqLockInsert)
.def("reqForQuoteInsert", &TdApi::reqForQuoteInsert)
.def("reqCombActionInsert", &TdApi::reqCombActionInsert)
.def("reqQueryMaxOrderVolume", &TdApi::reqQueryMaxOrderVolume)
.def("reqQueryLockVolume", &TdApi::reqQueryLockVolume)
.def("reqQueryExerciseVolume", &TdApi::reqQueryExerciseVolume)
.def("reqQryPosition", &TdApi::reqQryPosition)
.def("reqQryTradingAccount", &TdApi::reqQryTradingAccount)
.def("reqQryOrder", &TdApi::reqQryOrder)
.def("reqQryTrade", &TdApi::reqQryTrade)
.def("reqQryExercise", &TdApi::reqQryExercise)
.def("reqQryLock", &TdApi::reqQryLock)
.def("reqQryCombAction", &TdApi::reqQryCombAction)
.def("reqQryPositionCombineDetail", &TdApi::reqQryPositionCombineDetail)
.def("reqQryInstrument", &TdApi::reqQryInstrument)
.def("reqQryCoveredShort", &TdApi::reqQryCoveredShort)
.def("reqQryExerciseAssign", &TdApi::reqQryExerciseAssign)
.def("reqTransfer", &TdApi::reqTransfer)
.def("reqQryTransfer", &TdApi::reqQryTransfer)
.def("reqQueryBankBalance", &TdApi::reqQueryBankBalance)
.def("reqQueryBankAccount", &TdApi::reqQueryBankAccount)
.def("reqQueryBillContent", &TdApi::reqQueryBillContent)
.def("reqBillConfirm", &TdApi::reqBillConfirm)
.def("reqQryMargin", &TdApi::reqQryMargin)
.def("reqQryCommission", &TdApi::reqQryCommission)
.def("reqQryExchangeRate", &TdApi::reqQryExchangeRate)
.def("reqQryPositionDetail", &TdApi::reqQryPositionDetail)
.def("reqQrySysConfig", &TdApi::reqQrySysConfig)
.def("reqQryDepthMarketData", &TdApi::reqQryDepthMarketData)

.def("onFrontConnected", &TdApi::onFrontConnected)
.def("onFrontDisconnected", &TdApi::onFrontDisconnected)
.def("onRspAuthenticate", &TdApi::onRspAuthenticate)
.def("onRspUserLogin", &TdApi::onRspUserLogin)
.def("onRspUserPasswordUpdate", &TdApi::onRspUserPasswordUpdate)
.def("onRspErrorOrderInsert", &TdApi::onRspErrorOrderInsert)
.def("onRspOrderAction", &TdApi::onRspOrderAction)
.def("onRspErrorExerciseOrderInsert", &TdApi::onRspErrorExerciseOrderInsert)
.def("onRspExerciseOrderAction", &TdApi::onRspExerciseOrderAction)
.def("onRspErrorLockInsert", &TdApi::onRspErrorLockInsert)
.def("onRspForQuoteInsert", &TdApi::onRspForQuoteInsert)
.def("onRspErrorCombActionInsert", &TdApi::onRspErrorCombActionInsert)
.def("onRspQueryMaxOrderVolume", &TdApi::onRspQueryMaxOrderVolume)
.def("onRspQueryLockVolume", &TdApi::onRspQueryLockVolume)
.def("onRspQueryExerciseVolume", &TdApi::onRspQueryExerciseVolume)
.def("onRspQryPosition", &TdApi::onRspQryPosition)
.def("onRspQryTradingAccount", &TdApi::onRspQryTradingAccount)
.def("onRspQryOrder", &TdApi::onRspQryOrder)
.def("onRspQryTrade", &TdApi::onRspQryTrade)
.def("onRspQryExercise", &TdApi::onRspQryExercise)
.def("onRspQryLock", &TdApi::onRspQryLock)
.def("onRspQryCombAction", &TdApi::onRspQryCombAction)
.def("onRspQryPositionCombineDetail", &TdApi::onRspQryPositionCombineDetail)
.def("onRspQryInstrument", &TdApi::onRspQryInstrument)
.def("onRspQryCoveredShort", &TdApi::onRspQryCoveredShort)
.def("onRspQryExerciseAssign", &TdApi::onRspQryExerciseAssign)
.def("onRspTransfer", &TdApi::onRspTransfer)
.def("onRspQryTransfer", &TdApi::onRspQryTransfer)
.def("onRspQueryBankBalance", &TdApi::onRspQueryBankBalance)
.def("onRspQueryBankAccount", &TdApi::onRspQueryBankAccount)
.def("onRspQueryBillContent", &TdApi::onRspQueryBillContent)
.def("onRspBillConfirm", &TdApi::onRspBillConfirm)
.def("onRspQryMargin", &TdApi::onRspQryMargin)
.def("onRspQryCommission", &TdApi::onRspQryCommission)
.def("onRspQryPositionDetail", &TdApi::onRspQryPositionDetail)
.def("onRspQryExchangeRate", &TdApi::onRspQryExchangeRate)
.def("onRspQrySysConfig", &TdApi::onRspQrySysConfig)
.def("onRspQryDepthMarketData", &TdApi::onRspQryDepthMarketData)
.def("onRtnTrade", &TdApi::onRtnTrade)
.def("onRtnOrder", &TdApi::onRtnOrder)
.def("onRtnExercise", &TdApi::onRtnExercise)
.def("onRtnCombAction", &TdApi::onRtnCombAction)
.def("onRtnLock", &TdApi::onRtnLock)
;