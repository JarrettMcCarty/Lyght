#pragma once

#ifdef LT_PLATFORM_WINDOWS
	#ifdef LT_BUILD_DLL
		#define LYGHT_API __declspec(dllexport)
	#else
		#define LYGHT_API __declspec(dllimport)
	#endif
#else Lyght only supports windows// 0
#endif // 
