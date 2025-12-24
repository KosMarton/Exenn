#pragma once

#ifdef XN_PLATFORM_WINDOWS
	#ifdef XN_BUILD_DLL
		#define EXENN_API __declspec(dllexport)
	#else
		#define EXENN_API __declspec(dllimport)
	#endif
#else
	#error Exenn only supports Windows!
#endif