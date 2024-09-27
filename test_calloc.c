#include "libft.h"
#include <stdio.h>
#include <limits.h>

char	*test(int i)
{
	if (i)
		return ("OK");
	else
		return ("KO");
}

int	main(void)
{
	printf("%s\n", test(ft_calloc(INT_MIN, INT_MIN) == NULL));
}
