#pragma once

#include <SexyAppFramework/SexyAppBase.h>

namespace Sexy
{
	class InternetManager;
	class BetaSupport;

	class SexyApp : public SexyAppBase
	{
	public:
		InternetManager* mInternetManager;
		BetaSupport* mBetaSupport;
		std::string mReferId;
		std::string mVariation;
		ulong mDownloadId;
		std::string mRegSource;
		ulong mLastVerCheckQueryTime;
		bool mSkipAd;
		bool mDontUpdate;
		int mBuildNum;
		std::string mBuildDate;
		std::string mUserName;
		std::string mRegUserName;
		std::string mRegCode;
		bool mIsRegistered;
		bool mBuildUnlocked;
		int mTimesPlayed;
		int mTimesExecuted;
		bool mTimedOut;
	public:
		virtual void UpdateFrames();
		virtual void WriteToRegistry();
		virtual void ReadFromRegistry();
		virtual bool CheckSignature(const Buffer& theBuffer, const std::string& theFileName);
		virtual bool ShouldCheckForUpdate();
		virtual void UpdateCheckQueried();
		virtual void URLOpenSucceeded(const std::string& theURL);
	public:
		SexyApp();
		virtual ~SexyApp();
		bool Validate(const std::string& theUserName, const std::string& theRegCode);
		virtual bool OpenRegisterPage(DefinesMap theDefinesMap);
		virtual bool OpenRegisterPage();
		virtual void PreDisplayHook();
		virtual void InitPropertiesHook();
		virtual void Init();
		virtual void PreTerminate();
		virtual bool OpenHTMLTemplate(const std::string& theTemplateFile, const DefinesMap& theDefinesMap);
		virtual void OpenUpdateURL();
		virtual void HandleCmdLineParam(const std::string& theParamName, const std::string& theParamValue);
		virtual std::string GetGameSEHInfo();
		virtual void GetSEHWebParams(DefinesMap* theDefinesMap);
	};
	extern SexyApp* gSexyApp;
};
