#include "../test.h"

int	main(void)
{
	void	*p = ft_calloc(2, 2);
	char	e[] = {0, 0, 0, 0};
	
	printf("calloc\t\t: ");
	/* 1 */ check(!memcmp(p, e, 4));
	/* 2 */ mcheck(p, 4);
	free(p);
	/* 3 */ check(ft_calloc(-1, -1) == 0);
	/* 4 */ check(ft_calloc(2147483647, 2147483647) == 0);
	/* 5 */ check(ft_calloc(-2147483648, -2147483648) == 0);
	p = ft_calloc(0, 0);
	/* 6 */ check(p != 0);
	free(p);
	p = ft_calloc(0, 4);
	/* 7 */ check(p != 0);
	free(p);
	p = ft_calloc(4, 0);
	/* 8 */ check(p != 0);
	free(p);
	/* 9 */ check(ft_calloc(-4, -2) == 0);
	p = ft_calloc(0, -4);
	/* 10 */ check(p != 0);
	free(p);
	p = ft_calloc(-4, 0);
	/* 11 */ check(p != 0);
	free(p);
	/* 12 */ check(ft_calloc(4, -2) == 0);
	/* 13 */ check(ft_calloc(-4, 2) == 0);
	printf("\n");
}
