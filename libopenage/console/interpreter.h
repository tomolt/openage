// Copyright 2015-2015 the openage authors. See copying.md for legal info.

#ifndef OPENAGE_CONSOLE_INTERPRETER_H_
#define OPENAGE_CONSOLE_INTERPRETER_H_

#include "../pyinterface/functional.h"

// pxd: from libcpp.string cimport string
#include <string>

namespace openage {
namespace console {

// pxd: PyIfFunc1[void, string] interpreter_push
extern pyinterface::PyIfFunc<void, std::string> interpreter_push;
// pxd: PyIfFunc0[string] interpreter_pull
extern pyinterface::PyIfFunc<std::string> interpreter_pull;

}} // openage::console

#endif
