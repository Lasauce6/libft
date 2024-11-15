#include "../test.h"

int	main(void)
{
	char	dest[100];

	printf("memcpy\t\t: ");
	memset(dest, 'A', 100);
	ft_memcpy(dest, "coucou", 0);
	/* 1 */ check(dest[0] == 'A');
	char	*res = (char *) ft_memcpy(dest, NULL, 0);
	/* 2 */ check(res == dest && dest[0] == 'A');
	char	src[] = {0, 0};
	ft_memcpy(dest, src, 2);
	int	i = 0;
	while (i < 100 && dest[i] == 0)
	{
		i++;
	}
	/* 3 */ check(i == 2 && dest[2] == 'A');
	printf("\n");
}
