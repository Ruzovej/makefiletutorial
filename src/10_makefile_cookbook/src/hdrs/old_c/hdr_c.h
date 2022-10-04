#pragma once

struct pod
{
	int i;
};

#ifdef __cplusplus
extern "C"
{
#endif

struct pod *ctor();
void        dtor(struct pod *);

#ifdef __cplusplus
}
#endif