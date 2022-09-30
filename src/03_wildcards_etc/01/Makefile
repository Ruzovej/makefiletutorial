# Print out file information about every .c file
print: $(wildcard *.c)
	ls -lAh  $?

c_files:
	echo "int main() { return 0; }" > main.c
	echo "int main() { return 0; }" > main.cc
	echo "int main() { return 0; }" > main.cxx
	echo "int main() { return 0; }" > main.cpp
	echo "// TODO make some lib ..." > lib.c