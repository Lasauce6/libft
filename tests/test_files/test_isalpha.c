#include "../test.h"

int	main(void)
{
	printf("isalpha\t\t: ");
	/* 1 */ check(!ft_isalpha('a' - 1));
	/* 2 */ check(ft_isalpha('a'));
	/* 3 */ check(!ft_isalpha('z' + 1));
	/* 4 */ check(ft_isalpha('z'));
	/* 5 */ check(!ft_isalpha('A' - 1));
	/* 6 */ check(ft_isalpha('A'));
	/* 7 */ check(!ft_isalpha('Z' + 1));
	/* 8 */ check(ft_isalpha('Z'));
	printf("\n");
}
