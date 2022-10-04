#include "hdr_c.h"

#include <stdlib.h>

struct pod *ctor()
{
	struct pod *res = malloc(sizeof(struct pod));
	res->i          = 666;
	return res;
}

void dtor(struct pod *to_delete)
{
	free(to_delete);
}