#include "../test.h"

void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

int	main(void)
{
	t_list	*l;

	printf("lstlast\t\t: ");
	l = 0;
	/* 1 */ check(ft_lstlast(l) == 0);
	ft_lstadd_back(&l, ft_lstnew((void *) 1));
	/* 2 */ check(ft_lstlast(l)->content == (void *) 1);
	ft_lstadd_back(&l, ft_lstnew((void *) 2));
	/* 3 */ check(ft_lstlast(l)->content == (void *) 2);
	/* 4 */ check(ft_lstlast(l)->next == 0);
	freeList(l);
	printf("\n");
}
