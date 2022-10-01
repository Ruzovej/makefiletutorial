all: two one

one:
	# This error will be printed but ignored, and make will continue to run
	-false
	touch one

two:
	# This error will be printed, ignored and make will continue to run, only if it's invoked with `-i` flag
	false
	touch two

.PHONY: clean
clean:
	rm one two