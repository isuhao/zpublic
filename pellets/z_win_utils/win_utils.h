#pragma once

#include "win_utils_header.h"
#include "clipboard.hpp"
#include "directory.hpp"
#include "file_version.hpp"
#include "ini.hpp"
#include "path.hpp"

#ifdef Z_WIN_UTILS_USE

using namespace zl::WinUtils;

#else

#ifndef Z_WIN_UTILS_NOUSE
using namespace zl;
#endif

#endif