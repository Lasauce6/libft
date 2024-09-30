#include "test.h"

void	test_isdigit(void)
{
	prinft("isdigit :");
	check(!ft_isdigit('0' - 1));
	check(ft_isdigit('0'));
	check(!ft_isdigit('9' + 1));
	check(ft_isdigit('9'));
	printf("\n");
}
