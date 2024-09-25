#pragma once

#ifndef __linux__
    #if defined( RUNGE_EXPORTS )
        #define DLL_RUNGE_EXPORT __declspec(dllexport)
    #else // !BUILDING_DLL
        #define DLL_RUNGE_EXPORT __declspec(dllimport)
    #endif // BUILDING_DLL
#else
    #define DLL_RUNGE_EXPORT
#endif // __linux__