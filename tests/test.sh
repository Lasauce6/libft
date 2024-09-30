make
cc -Wall -Werror -Wextra -I. -L. -lft test.c -o test
make fclean
./test
rm -f test
