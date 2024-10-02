#include "../test.h"

int	main(void)
{
	char	*s;
	char	*str;

	printf("substr\t\t: ");
	s = ft_substr("maxiratios", 0, 99999);
	/* 1 */ check(!strcmp(s, "maxiratios"));
	/* 2 */ mcheck(s, strlen("maxiratios") + 1);
	free(s);
	s = ft_substr("maxiratios", 1, 1);
	/* 3 */ check(!strcmp(s, "a"));
	/* 4 */ mcheck(s, 2);
	free(s);
	s = ft_substr("maxiratios", 100, 1);
	/* 5 */ check(!strcmp(s, ""));
	/* 6 */ mcheck(s, 1);
	free(s);
	str = strdup("1");
	s = ft_substr(str, 42, 42000000);
	/* 7 */ check(!strcmp(s, ""));
	/* 8 */ mcheck(s, 1); free(s); free(str);
	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
	/* 9 */ check(!strcmp(s, "9"));
	/* 10 */ mcheck(s, 2);
	free(s);
	free(str);
	s = ft_substr("42", 0, 0);
	/* 11 */ check(!strcmp(s, ""));
	/* 12 */ mcheck(s, 1);
	free(s);
	s = ft_substr("BONJOUR LES PATISSIERS !", 8, 16);
	/* 13 */ check(!strcmp(s, "LES PATISSIERS !"));
	/* 14 */ mcheck(s, 17);
	free(s);
	s = ft_substr("test", 1, 2);
	/* 15 */ check(!strcmp(s, "es"));
	/* 16 */ mcheck(s, 3);
	free(s);
	printf("\n");
}
