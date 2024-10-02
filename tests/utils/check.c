#include "../test.h"

void	check(int b)
{
	if (b)
	{
		printf("\033[0;32m");
		printf("OK ");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("KO ");
		printf("\033[0m");
	}
}

void	mcheck(void *p, size_t req_size)
{
	void	*p2 = malloc(req_size);
	#ifdef __unix__
	if (malloc_usable_size(p) == malloc_usable_size(p2))
	#endif
	#ifdef __APPLE__
	if (malloc_size(p) == malloc_size(p2))
	#endif
	{
		printf("\033[0;32m");
		printf("MOK ");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("MKO ");
		printf("\033[0m");
	}
}
