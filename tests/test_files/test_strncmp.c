#include "../test.h"

int	main(void)
{
	printf("strncmp\t\t: ");
	/* 1 */ check(ft_strncmp("t", "", 0) == 0);
	/* 2 */ check(ft_strncmp("1234", "1235", 3) == 0);
	/* 3 */ check(ft_strncmp("1234", "1235", 4) < 0);
	/* 4 */ check(ft_strncmp("1234", "1235", -1) < 0);
	/* 5 */ check(ft_strncmp("", "", 42) == 0);
	/* 6 */ check(ft_strncmp("Maxiratio", "Maxiratio", 42) == 0);
	/* 7 */ check(ft_strncmp("Maxiratio", "maxiratio", 42) < 0);
	/* 8 */ check(ft_strncmp("Maxiratio", "MaxIratio", 42) > 0);
	/* 9 */ check(ft_strncmp("Maxiratio", "MaxiratiO", 42) > 0);
	/* 10 */ check(ft_strncmp("Maxiratio", "MaxiratioS", 42) < 0);
	/* 11 */ check(ft_strncmp("Maxiratio", "Maxirati", 42) > 0);
	/* 12 */ check(ft_strncmp("", "1", 0) == 0);
	/* 13 */ check(ft_strncmp("1", "", 0) == 0);
	/* 14 */ check(ft_strncmp("", "1", 1) < 0);
	/* 15 */ check(ft_strncmp("1", "", 1) > 0);
	/* 16 */ check(ft_strncmp("", "", 1) == 0);
	printf("\n");
}
