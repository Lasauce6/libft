CC = cc
CFLAGS = -Wall -Werror -Wextra

UTILS = utils/check.c

TESTS_DIR = test_files/

TESTS = isalpha isdigit isalnum isascii \
		isprint strlen memset bzero \
		memcpy memmove strlcpy strlcat \
		toupper tolower strchr strrchr \
		strncmp memchr memcmp strnstr \
		atoi calloc strdup substr \
		strjoin strtrim split itoa \
		strmapi striteri putchar_fd \
		putstr_fd putendl_fd putnbr_fd

t: $(TESTS)

$(TESTS): %: start
	@$(CC) $(CFLAGS) $(UTILS) $(TESTS_DIR)test_$*.c -L../ -lft && ./a.out && rm -f a.out

start: 
	make -C ../ && make clean -C ../

clean:
	make -C ../ fclean

fclean: clean

.PHONY: start t clean fclean
