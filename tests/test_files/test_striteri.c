#include "../test.h"

void	iter(unsigned int i, char *s)
{
	*s += i;
}

int	main(void)
{
	printf("striteri\t: ");
	{
		char s[] = "";
		ft_striteri(s, iter);
		/* 1 */ check(!strcmp(s, ""));
	}
	{
		char s[] = "0";
		ft_striteri(s, iter);
		/* 2 */ check(!strcmp(s, "0"));
	}
	{
		char s[] = "0000000000";
		ft_striteri(s, iter);
		/* 3 */ check(!strcmp(s, "0123456789"));
	}
	printf("\n");
}
