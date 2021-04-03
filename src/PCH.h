#pragma once

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"
#include "quickjs.h"
#include "quickjs-libc.h"
#include "storage/quickjs-storage.h"
#include "PluginsFuncts.h"
#include <Windows.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/msvc_sink.h>

using namespace std::literals;

namespace logger = SKSE::log;

#define DLLEXPORT __declspec(dllexport)
