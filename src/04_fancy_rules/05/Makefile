obj_files = foo.result bar.o lose.o

all: blah
# Note: PHONY is important here. Without it, implicit rules will try to build the executable "all", since the prereqs are ".o" files.
.PHONY: all

blah: $(obj_files)
	$(CC) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o : %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

%.result : %.raw
	touch $@

clean:
	rm -f $(obj_files) blah