#include "../test.h"

int	main(void)
{
	printf("tolower\t\t: ");
	/* 1 */ check(ft_tolower('A' - 1) == 'A' - 1);
	/* 2 */ check(ft_tolower('A') == 'a');
	/* 3 */ check(ft_tolower('Z' + 1) == 'Z' + 1);
	/* 4 */ check(ft_tolower('Z') == 'z');
	printf("\n");
}
