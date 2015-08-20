# Copyright 2015-2015 the openage authors. See copying.md for legal info.

from interpreter import backend
from libcpp.string cimport string
from libopenage.console.interpreter cimport interpreter_push as c_interpreter_push
from libopenage.console.interpreter cimport interpreter_pull as c_interpreter_pull

cdef void interpreter_push(string data) except * with gil:
	backend.i_push(data.decode('UTF-8'))

cdef string interpreter_pull() except * with gil:
	cdef string data = backend.i_pull().encode('UTF-8')
	return data

def setup():
	c_interpreter_push.bind0(interpreter_push)
	c_interpreter_push.bind0(interpreter_pull)
