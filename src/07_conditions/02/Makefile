nullstring =
foo = $(nullstring) # end of line; there is a space here

all:
	@echo foo \"$(foo)\"
	@echo nullstring \"$(nullstring)\"
ifeq ($(strip $(foo)),)
	@echo "foo is empty after being stripped"
endif
ifeq ($(nullstring),)
	@echo "nullstring doesn't even have spaces"
endif