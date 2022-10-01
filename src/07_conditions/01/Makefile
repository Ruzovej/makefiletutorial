foo = ok
bar = ok

all:
ifeq ($(foo), ok)
ifeq ($(bar), ok)
	echo "1 1"
else
	echo "1 0"
endif
else
ifeq ($(bar), ok)
	echo "0 1"
else
	echo "0 0"
endif
endif