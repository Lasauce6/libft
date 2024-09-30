#include "test.h"

void	test_isalnum(void)
{
	printf("isalnum : ");
	check(!ft_isalnum('0' - 1));
	check(ft_isalnum('0'));
	check(!ft_isalnum('9' + 1));
	check(ft_isalnum('9'));
	check(!ft_isalnum('a' - 1));
	check(ft_isalnum('a'));
	check(!ft_isalnum('z' + 1));
	check(ft_isalnum('z'));
	check(!ft_isalnum('A' - 1));
	check(ft_isalnum('A'));
	check(!ft_isalnum('Z' + 1));
	check(ft_isalnum('Z'));
	prinf("\n");
}
