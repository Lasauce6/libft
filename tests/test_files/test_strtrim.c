#include "../test.h"

int	main(void)
{
	char	*s;

	printf("strtrim\t\t: ");
	s = ft_strtrim("   xxxmaxiratios", " x");
	/* 1 */ check(!strcmp(s, "maxiratios"));
	/* 2 */ mcheck(s, strlen("maxiratios") + 1);
	free(s);
	s = ft_strtrim("maxiratios   xxx", " x");
	/* 3 */ check(!strcmp(s, "maxiratios"));
	/* 4 */ mcheck(s, strlen("maxiratios") + 1);
	free(s);
	s = ft_strtrim("   xxxmaxiratios   xxx", " x");
	/* 5 */ check(!strcmp(s, "maxiratios"));
	/* 6 */ mcheck(s, strlen("maxiratios") + 1);
	free(s);
	s = ft_strtrim("   xxx   xxx", " x");
	/* 7 */ check(!strcmp(s, ""));
	/* 8 */ mcheck(s, 1);
	free(s);
	s = ft_strtrim("", "123");
	/* 9 */ check(!strcmp(s, ""));
	/* 10 */ mcheck(s, 1);
	free(s);
	s = ft_strtrim("123", "");
	/* 11 */ check(!strcmp(s, "123"));
	/* 12 */ mcheck(s, 4);
	free(s);
	s = ft_strtrim("", "");
	/* 13 */ check(!strcmp(s, ""));
	/* 14 */ mcheck(s, 1);
	free(s);	
	s = ft_strtrim("abcdba", "acb");
	/* 15 */ check(!strcmp(s, "d"));
	/* 16 */ mcheck(s, 2);
	free(s);
	printf("\n");
}
