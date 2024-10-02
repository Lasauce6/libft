#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include "../libft.h"

#ifdef __unix__
# include <malloc.h>
#endif
#ifdef __APPLE__
# include <malloc/malloc.h>
#endif

void	check(int b);
void	mcheck(void *p, size_t req_size);

#endif
