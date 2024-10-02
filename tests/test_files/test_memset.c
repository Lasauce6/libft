#include "../test.h"

int	main(void)
{
	char	tab[100];

	printf("memset\t\t: ");
	memset(tab, 0, 100);
	ft_memset(tab, 'A', 0);
	/* 1 */ check(tab[0] == 0);
	ft_memset(tab, 'A', 42);
	int	i = 0;
	while (i < 100 && tab[i] == 'A')
		i++;
	/* 2 */ check(i == 42 && tab[42] == 0);
	printf("\n");
}
