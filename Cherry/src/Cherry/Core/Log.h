#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cherry {
	class Log
	{
	public:
		static void Init();

		inline static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
	};

}

//Core log macros
#define CH_CORE_TRACE(...)    ::Cherry::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CH_CORE_INFO(...)     ::Cherry::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_WARN(...)     ::Cherry::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_ERROR(...)    ::Cherry::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_CRITICAL(...) ::Cherry::Log::GetCoreLogger()->critical(__VA_ARGS__)