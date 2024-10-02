#include "../test.h"

int	main(void)
{
	char	s[] = "ratiomaxis";

	printf("strchr\t\t: ");
	/* 1 */ check(ft_strchr(s, 'r') == s);
	/* 2 */ check(ft_strchr(s, 'a') == s + 1);
	/* 3 */ check(ft_strchr(s, 'z') == 0);
	/* 4 */ check(ft_strchr(s, 0) == s + strlen(s));
	/* 5 */ check(ft_strchr(s, 'r' + 256) == s);
	printf("\n");
}
