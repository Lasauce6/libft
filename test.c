#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int i;
	printf("### TESTS ###\n");

	printf("\n### ft_memset ###\n");
	char	str[11];
	char	str2[11];
	ft_memset((void *) str, 'q', 10);
	memset((void *) str2, 'q', 10);
	str[10] = '\0';
	str2[10] = '\0';
	printf("memset :\n%s\nft_memset :\n%s\n", str2, str);

	printf("\n### ft_memcpy ###\n");
	int	src[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	src2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	memcpy(src2, src2 + 2, 8 * sizeof(int));
	ft_memcpy(src, src + 2, 8 * sizeof(int));
	printf("memcpy :\n");
	i = -1;
	while (++i < 10)
		printf("%d ", src2[i]);
	printf("\nft_memcpy :\n");
	i = -1;
	while (++i < 10)
		printf("%d ", src[i]);


	printf("\n\n### ft_memmove ###\n");
	int	s[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	s2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	memmove(s2 + 2, s2, 8 * sizeof(int));
	ft_memmove(s + 2, s, 8 * sizeof(int));
	printf("memmmove :\n");
	i = -1;
	while (++i < 10)
		printf("%d ", s2[i]);
	i = -1;
	printf("\nft_memmove :\n");
	while (++i < 10)
		printf("%d ", s[i]);

	printf("\n\n### ft_strchr ###\n");
	const char	*string = "bonjour tout le monde je suis moi";
	printf("strchr :\n%d\n", strchr(string, '\0')[0]);
	printf("ft_strchr :\n%d\n", ft_strchr(string, '\0')[0]);

	printf("\n### ft_strrchr ###\n");
	printf("strrchr :\n%d\n", strrchr(string, '\0')[0]);
	printf("ft_strrchr :\n%d\n", ft_strrchr(string, '\0')[0]);

	printf("\n### ft_atoi ###\n");
	printf("atoi :\n%d\n", atoi("  \t\n\v\f\r \n-42aeri"));
	printf("ft_atoi :\n%d\n", ft_atoi("  \t\n\v\f\r \n-42aeri"));
	printf("atoi :\n%d\n", atoi("+2147483647"));
	printf("ft_atoi :\n%d\n", ft_atoi("+2147483647"));
	printf("atoi :\n%d\n", atoi("-2147483648"));
	printf("ft_atoi :\n%d\n", ft_atoi("-2147483648"));
	printf("atoi :\n%d\n", atoi("--42"));
	printf("ft_atoi :\n%d\n", ft_atoi("--42"));

// TODO: TEST FT_SPLIT

	printf("\n### ft_itoa ###\n");
	printf("ft_itoa :\n%s\n", ft_itoa(-42));
	printf("ft_itoa :\n%s\n", ft_itoa(2147483647));
	printf("ft_itoa :\n%s\n", ft_itoa(-2147483648));
	printf("ft_itoa :\n%s\n", ft_itoa(0));
	printf("ft_itoa :\n%s\n", ft_itoa(9));
	printf("ft_itoa :\n%s\n", ft_itoa(10));
	printf("ft_itoa :\n%s\n", ft_itoa(-999));

}
