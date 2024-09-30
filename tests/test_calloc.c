#include "test.h"

void	test_calloc(void)
{
	void	*p = ft_calloc(2, 2);
	char	e[] = {0, 0, 0, 0};
	
	printf("calloc : ");
	check(!memcmp(p, e, 4));
	free(p);
	check(ft_calloc(-1, -1) == NULL);
	check(ft_calloc(INT_MAX, INT_MAX) == NULL);
	check(ft_calloc(INT_MIN, INT_MIN) == NULL);
	p = ft_calloc(0, 0);
	check(p != NULL); free(p);
	p = ft_calloc(0, 4);
	check(p != NULL); free(p);
	p = ft_calloc(4, 0);
	check(p != NULL); free(p);
	p = ft_calloc(-4, -4);
	check(p != NULL); free(p);
	p = ft_calloc(0, -4);
	check(p != NULL); free(p);
	p = ft_calloc(-4, 0); free(p);
	check(ft_calloc(-4, 2) == NULL);
	check(ft_calloc(4, -2) == NULL);
	printf("\n");
}
