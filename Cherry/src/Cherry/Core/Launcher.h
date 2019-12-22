#pragma once

#include "Core.h"
#include "Log.h"
#include <iostream>


#ifdef CH_PLATFORM_WINDOWS

int launch()//int argc, char** argv)
{
	Cherry::Log::Init();
	Cherry::Log::GetCoreLogger()->info("Initialized Log!");
	return 0;
};


#endif
