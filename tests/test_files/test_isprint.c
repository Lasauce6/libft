#include "../test.h"

int	main(void)
{
	printf("isprint\t\t: ");
	/* 1 */ check(!ft_isprint(' ' - 1));
	/* 2 */ check(ft_isprint(' '));
	/* 3 */ check(!ft_isprint('~' + 1));
	/* 4 */ check(ft_isprint('~'));
	printf("\n");
}
