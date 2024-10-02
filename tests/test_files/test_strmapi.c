#include "../test.h"

char	add_one(unsigned int i, char c)
{
	return (i + c);
}

int	main(void)
{
	char	*s;

	printf("strmapi\t\t: ");
	s = ft_strmapi("1234", add_one);
	/* 1 */ check(!strcmp(s, "1357"));
	/* 2 */ mcheck(s, strlen("1357") + 1);
	free(s);
	s = ft_strmapi("", add_one);
	/* 3 */ check(!strcmp(s, ""));
	/* 4 */ mcheck(s, strlen("") + 1);
	free(s);
	printf("\n");
}
