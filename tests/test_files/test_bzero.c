#include "../test.h"

int	main(void)
{
	char	tab[100];

	printf("bzero\t\t: ");
	memset(tab, 'A', 100);
	ft_bzero(tab, 0);
	/* 1 */ check(tab[0] == 'A');
	ft_bzero(tab, 42);
	int	i = 0;
	while (i < 100 && tab[i] == 0)
	{
		i++;
	}
	/* 2 */ check(i == 42 && tab[42] == 'A');
	memset(tab, 'A', 100);
	tab[0] = 0;
	ft_bzero(tab, 42);
	i = 0;
	while (i < 100 && tab[i] == 0)
	{
		i++;
	}
	/* 3 */ check(i == 42);
	printf("\n");
}
