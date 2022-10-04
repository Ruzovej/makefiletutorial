#include <iostream>

#include "hdr1.h"
#include "hdrs/hdr2.h"
#include "hdrs/hdr3.h"
#include "hdrs/old_c/hdr_c.h"

int main(int argc, const char *argv[])
{
	using namespace makefile_test;
	std::cout << argv[0] << ":\n";
	std::cout << "  1. " << hdr_index_1 << ", " << hdr_index_2 << ", " << hdr_index_3 << "\n";
	std::cout << "  2. " << foo() << ", " << bar() << "\n";

	auto s = ctor();
	std::cout << "  3. " << s << " ... " << s->i << "\n";
	dtor(s);

	return 0;
}