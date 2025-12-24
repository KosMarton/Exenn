#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Exenn {

	class EXENN_API Log
	{	
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define XN_CORE_TRACE(...) ::Exenn::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define XN_CORE_INFO(...)  ::Exenn::Log::GetCoreLogger()->info(__VA_ARGS__)
#define XN_CORE_WARN(...)  ::Exenn::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define XN_CORE_ERROR(...) ::Exenn::Log::GetCoreLogger()->error(__VA_ARGS__)
#define XN_CORE_FATAL(...) ::Exenn::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define XN_TRACE(...)      ::Exenn::Log::GetClientLogger()->trace(__VA_ARGS__)
#define XN_INFO(...)       ::Exenn::Log::GetClientLogger()->info(__VA_ARGS__)
#define XN_WARN(...)       ::Exenn::Log::GetClientLogger()->warn(__VA_ARGS__)
#define XN_ERROR(...)      ::Exenn::Log::GetClientLogger()->error(__VA_ARGS__)
#define XN_FATAL(...)      ::Exenn::Log::GetClientLogger()->fatal(__VA_ARGS__)