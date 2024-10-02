#include "../test.h"

int	main(void)
{
	int		fd;
	char	s[42];

	printf("putnbr_fd\t: ");
	fd = open("fichiaxmax", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(0, fd);
	lseek(fd, SEEK_SET, 0);
	bzero(s, 42);
	read(fd, s, 2);
	/* 1 */ check(!strcmp(s, "0"));
	close(fd);
	unlink("./fichiaxmax");
	fd = open("fichiaxmax", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(10, fd);
	lseek(fd, SEEK_SET, 0);
	bzero(s, 42);
	read(fd, s, 3);
	/* 2 */ check(!strcmp(s, "10"));
	close(fd);
	unlink("./fichiaxmax");
	fd = open("fichiaxmax", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(2147483647, fd);
	lseek(fd, SEEK_SET, 0);
	bzero(s, 42);
	read(fd, s, 11);
	/* 3 */ check(!strcmp(s, "2147483647")); 
	close(fd);
	unlink("./fichiaxmax");
	fd = open("fichiaxmax", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(-2147483648, fd);
	lseek(fd, SEEK_SET, 0);
	bzero(s, 42);
	read(fd, s, 12);
	/* 4 */ check(!strcmp(s, "-2147483648")); 
	close(fd);
	unlink("./fichiaxmax");
	fd = open("fichiaxmax", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(-42, fd);
	lseek(fd, SEEK_SET, 0);
	bzero(s, 42);
	read(fd, s, 4);
	/* 5 */ check(!strcmp(s, "-42"));
	close(fd);
	unlink("./fichiaxmax");
	printf("\n");
}
