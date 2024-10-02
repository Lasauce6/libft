#include "../test.h"

int	main(void)
{
	printf("isdigit\t\t: ");
	/* 1 */ check(!ft_isdigit('0' - 1));
	/* 2 */ check(ft_isdigit('0'));
	/* 3 */ check(!ft_isdigit('9' + 1));
	/* 4 */ check(ft_isdigit('9'));
	printf("\n");
}
