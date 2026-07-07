#ifndef __D3D8HELPER_H__
#define __D3D8HELPER_H__

#include <string>
#define WIN32_LEAN_AND_MEAN
#include "windows.h"

namespace Sexy
{
	bool GetD3D8AdapterInfo(GUID &theGUID, std::string &theDriver, std::string &theDescription);
}

#endif