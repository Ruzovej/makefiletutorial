#include "hdr1.h"

#include "hdrs/hdr2.h"

namespace makefile_test
{
int foo()
{
	return 14 + hdr_index_2;
}
}  // namespace makefile_test