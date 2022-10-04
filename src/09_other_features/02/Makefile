# https://www.gnu.org/software/make/manual/html_node/General-Search.html
vpath %.h ../headers ../other-directory

some_binary: ../headers blah.h bleh.h
	touch some_binary

../headers:
	mkdir ../headers

blah.h:
	touch ../headers/blah.h

some_file: 
	@echo This line is too long, so \
		it is broken up into multiple lines

clean:
	rm -rf ../headers
	rm -f some_binary
