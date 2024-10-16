CC = cc
CFLAGS = -Wall -Werror -Wextra -g

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

BONUS = lstnew lstadd_front lstsize \
		lstlast lstadd_back lstdelone \
		lstclear lstiter lstmap

UNAME = $(shell uname -s)
ifeq ($(UNAME), Linux)
	VALGRIND = valgrind -q --leak-check=full
endif

t: $(TESTS)

b: $(BONUS)

a: t b

$(TESTS): %: start
	@$(CC) $(CFLAGS) $(UTILS) $(TESTS_DIR)test_$*.c -L../ -lft && $(VALGRIND) ./a.out && rm -fr a.out*

$(BONUS): %: start_bonus
	@$(CC) $(CFLAGS) $(UTILS) $(TESTS_DIR)test_$*.c -L../ -lft && $(VALGRIND) ./a.out && rm -fr a.out*

start: 
	make -C ../

start_bonus:
	make bonus -C ../

clean:
	make -C ../ fclean

fclean: clean

.PHONY: start start_bonus t b a clean fclean
