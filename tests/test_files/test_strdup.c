#include "../test.h"

int	main(void)
{
	char	*s;

	printf("strdup\t\t: ");
	s = ft_strdup("coucou");
	/* 1 */ check(!strcmp(s, "coucou"));
	/* 2 */ mcheck(s, strlen("coucou") + 1);
	free(s);
	s = ft_strdup("");
	/* 3 */ check(!strcmp(s, ""));
	/* 4 */ mcheck(s, 1);
	free(s);
	printf("\n");
}
