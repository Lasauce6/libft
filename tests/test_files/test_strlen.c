#include "../test.h"

int	main(void)
{
	printf("strlen\t\t: ");
	/* 1 */ check(ft_strlen("123") == 3);
	/* 2 */ check(ft_strlen("") == 0);
	printf("\n");
}
