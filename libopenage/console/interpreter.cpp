// Copyright 2015-2015 the openage authors. See copying.md for legal info.

#include "interpreter.h"

namespace openage {
namespace console {

pyinterface::PyIfFunc<void, std::string> interpreter_push;
pyinterface::PyIfFunc<std::string> interpreter_pull;

}} // openage::console