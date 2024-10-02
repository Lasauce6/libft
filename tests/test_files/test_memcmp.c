#include "../test.h"

int	main(void)
{
	char	s[] = {-128, 0, 127, 0};
	char	scp[] = {-128, 0, 127, 0};
	char	s2[] = {0, 0, 127, 0};
	char	s3[] = {0, 0, 42, 0};

	printf("memcmp\t\t: ");
	/* 1 */ check(!ft_memcmp(s, scp, 4));
	/* 2 */ check(!ft_memcmp(s, s2, 0));
	/* 3 */ check(ft_memcmp(s, s2, 1) > 0);
	/* 4 */ check(ft_memcmp(s2, s, 1) < 0);
	/* 5 */ check(ft_memcmp(s2, s3, 4) != 0);
	printf("\n");
}
