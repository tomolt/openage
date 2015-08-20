# Copyright 2015-2015 the openage authors. See copying.md for legal info.

from code import InteractiveConsole

class Backend(InteractiveConsole):
	def __init__(self, *args):
		InteractiveConsole.__init__(*args)
		self.more = 0
		self.out = ""
		self.write("OpenAge v0.3.0 Interactive Console")
		self.write(">>> ")

	def i_push(self, data):
		more = self.push(data)
		if more:
			self.write(">>> ")
		else:
			self.write("... ")

	def i_pull(self):
		data = self.out
		self.out = ""
		return data

	def write(self, data):
		self.out += data

backend = Backend()
