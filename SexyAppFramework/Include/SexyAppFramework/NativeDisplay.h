#pragma once

#include <SexyAppFramework/Common.h>

namespace Sexy
{

	///////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////
	class NativeDisplay
	{
	public:
		int mRGBBits;
		ulong mRedMask;
		ulong mGreenMask;
		ulong mBlueMask;
		int mRedBits;
		int mGreenBits;
		int mBlueBits;
		int mRedShift;
		int mGreenShift;
		int mBlueShift;

	public:
		NativeDisplay();
		virtual ~NativeDisplay();
	};

}; // namespace Sexy
