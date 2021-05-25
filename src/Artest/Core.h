#pragma once

#ifdef AT_PLATFORM_WINDOWS
	#ifdef AT_BUILD_DLL
		#define ARTEST_API __declspec(dllexport)
	#else
		#define ARTEST_API __declspec(dllexport)	
	#endif
#else
	#error ARTEST only support Windows only
#endif