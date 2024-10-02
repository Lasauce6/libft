#include "../test.h"

int	main(void)
{
	printf("isascii\t\t: ");
	/* 1 */ check(!ft_isascii(-1));
	/* 2 */ check(ft_isascii(0));
	/* 3 */ check(ft_isascii(127));
	/* 4 */ check(!ft_isascii(128));
	printf("\n");
}
