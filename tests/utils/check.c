#include "../test.h"

int	check(int b)
{
	if (b)
	{
		printf("\033[0;32m");
		printf("OK ");
	}
	else
	{
		printf("\033[1;31m");
		printf("KO ");
	}
}
