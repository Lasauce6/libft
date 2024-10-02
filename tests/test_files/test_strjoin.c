#include "../test.h"

int	main(void)
{
	char	*s;

	printf("strjoin\t\t: ");
	s = ft_strjoin("maxi", "ratios");
	/* 1 */ check(!strcmp(s, "maxiratios"));
	/* 2 */ mcheck(s, strlen("maxiratios") + 1);
	free(s);
	s = ft_strjoin("", "42");
	/* 3 */ check(!strcmp(s, "42"));
	/* 4 */ mcheck(s, strlen("") + strlen("42") + 1);
	free(s);
	s = ft_strjoin("42", "");
	/* 5 */ check(!strcmp(s, "42"));
	/* 6 */ mcheck(s, strlen("42") + strlen("") + 1);
	free(s);
	s = ft_strjoin("", "");
	/* 7 */ check(!strcmp(s, ""));
	/* 8 */ mcheck(s, strlen("") + strlen("") + 1);
	free(s);
	printf("\n");
}
