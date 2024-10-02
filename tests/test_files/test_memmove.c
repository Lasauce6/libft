#include "../test.h"

int	main(void)
{
	char	s[] = {65, 66, 67, 68, 69, 0, 42};
	char	s0[] = {0, 0, 0, 0, 0, 0, 0};
	char	sCp[] = {65, 66, 67, 68, 69, 0, 42};
	char	sRes[] = {67, 68, 67, 68, 69, 0, 42};
	char	sRes2[] = {67, 67, 68, 68, 69, 0, 42};

	printf("memmove\t\t: ");
	/* 1 */ check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7));
	/* 2 */ check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCp, 7));
	/* 3 */ check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sRes, 7));
	/* 4 */ check(ft_memmove(sRes + 1, sRes, 2) == sRes + 1 && !memcmp(sRes, sRes2, 7));
	printf("\n");
}
