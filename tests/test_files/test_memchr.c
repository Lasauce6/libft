#include "../test.h"

int	main(void)
{
	char	s[] = {0, 1, 2, 3, 4 , 5};

	printf("memchr\t\t: ");
	/* 1 */ check(ft_memchr(s, 0, 0) == NULL);
	/* 2 */ check(ft_memchr(s, 0, 1) == s);
	/* 3 */ check(ft_memchr(s, 2, 3) == s + 2);
	/* 4 */ check(ft_memchr(s, 6, 6) == NULL);
	/* 5 */ check(ft_memchr(s, 2 + 256, 3) == s + 2);
	printf("\n");
}
