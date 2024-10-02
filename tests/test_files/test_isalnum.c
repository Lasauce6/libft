#include "../test.h"

int	main(void)
{
	printf("isalnum\t\t: ");
	/* 1 */ check(!ft_isalnum('0' - 1));
	/* 2 */ check(ft_isalnum('0'));
	/* 3 */ check(!ft_isalnum('9' + 1));
	/* 4 */ check(ft_isalnum('9'));
	/* 5 */ check(!ft_isalnum('a' - 1));
	/* 6 */ check(ft_isalnum('a'));
	/* 7 */ check(!ft_isalnum('z' + 1));
	/* 8 */ check(ft_isalnum('z'));
	/* 9 */ check(!ft_isalnum('A' - 1));
	/* 10 */ check(ft_isalnum('A'));
	/* 11 */ check(!ft_isalnum('Z' + 1));
	/* 12 */ check(ft_isalnum('Z'));
	printf("\n");
}
