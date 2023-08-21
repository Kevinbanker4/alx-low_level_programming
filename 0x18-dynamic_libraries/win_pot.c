#define _GNU_SOURCE
#include <dlfcn.h>
typedef int (*origin_puts)(const char *str);
int puts(const char *str)
{
	origin_puts orig;
	orig = (origin_puts)dlsym(RTLD_NEXT, "puts");
	return orig("--> Please make me win!");
}
