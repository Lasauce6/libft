#include "../test.h"

int	main(void)
{
	printf("toupper\t\t: ");
	/* 1 */ check(ft_toupper('a' - 1) == 'a' - 1);
	/* 2 */ check(ft_toupper('a') == 'A');
	/* 3 */ check(ft_toupper('z' + 1) == 'z' + 1);
	/* 4 */ check(ft_toupper('z') == 'Z');
	printf("\n");
}
