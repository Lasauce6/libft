#include "../test.h"

int	main(void)
{
	char	s[] = "ratiomaxis";
	char	s2[] = "smaxiratios";
	char	s3[] = "";

	printf("strrchr\t\t: ");
	/* 1 */ check(ft_strrchr(s, 'r') == s);
	/* 2 */ check(ft_strrchr(s, 'a') == s + 6);
	/* 3 */ check(ft_strrchr(s2, 's') == s2 + 10);
	/* 4 */ check(ft_strrchr(s, 'z') == NULL);
	/* 5 */ check(ft_strrchr(s, 0) == s + strlen(s));
	/* 6 */ check(ft_strrchr(s, 'r' + 256) == s);
	char * empty = (char*)calloc(1, 1);
	/* 7 */ check(ft_strrchr(empty, 'V') == NULL); free(empty);
	/* 8 */ check(ft_strrchr(s3, 0) == s3);
	printf("\n");
}
