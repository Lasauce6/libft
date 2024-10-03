#include "../test.h"

int	main(void)
{
	t_list *l;

	printf("lstnew\t\t: ");
	l = ft_lstnew((void *) 42);
	/* 1 */ check(l->content == (void *) 42);
	/* 2 */ check(l->next == 0);
	/* 3 */ mcheck(l, sizeof(t_list));
	free(l);
	printf("\n");
}
