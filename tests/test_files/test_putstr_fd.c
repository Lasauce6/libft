#include "../test.h"

int	main(void)
{
	int		fd;
	char	s[10];

	printf("putstr_fd\t: ");
	fd = open("fichiaxmax", O_RDWR | O_CREAT);
	ft_putstr_fd("42", fd);
	lseek(fd, SEEK_SET, 0);
	bzero(&s, 10);
	read(fd, s, 3);
	/* 1 */ check(!strcmp(s, "42"));
	close(fd);
	unlink("./fichiaxmax");
	printf("\n");
}
