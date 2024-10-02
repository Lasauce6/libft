#include "../test.h"

int	main(void)
{
	int		fd;
	char	s[10];

	printf("putchar_fd\t: ");
	fd = open("fichiaxmax", O_RDWR | O_CREAT);
	ft_putchar_fd('a', fd);
	lseek(fd, SEEK_SET, 0);
	bzero(&s, 10);
	read(fd, s, 2);
	/* 1 */ check(!strcmp(s, "a"));
	close(fd);
	unlink("./fichiaxmax");
	printf("\n");
}
