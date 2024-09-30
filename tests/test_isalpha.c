#include "test.h"

void	test_isalpha(void)
{
	printf("isalpha : ");
	check(!ft_isalpha('a' - 1));
	check(ft_isalpha('a'));
	check(!ft_isalpha('z' + 1));
	check(ft_isalpha('z'));
	check(!ft_isalpha('A' - 1));
	check(ft_isalpha('A'));
	check(!ft_isalpha('Z' + 1));
	check(ft_isalpha('Z'));
	printf("\n");
}
