comma := ,
empty:=
space := $(empty) $(empty)
foo := a b c
bar := $(subst $(space),$(comma),$(foo))

all: 
	@echo $(bar)

baz := $(subst $(space), $(comma) , $(foo))

bad: 
	# Output is ", a , b , c". Notice the spaces introduced
	@echo $(baz)
