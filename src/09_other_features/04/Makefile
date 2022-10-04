.DELETE_ON_ERROR:
all: one two
	touch all

one:
	touch one
	-false

two:
	touch two
	false

.PHONY:
clean:
	rm -f all one two