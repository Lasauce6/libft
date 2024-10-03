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

	printf("lstsize\t\t: ");
	l = 0;
	/* 1 */ check(ft_lstsize(l) == 0);
	ft_lstadd_front(&l, ft_lstnew((void *) 1));
	/* 2 */ check(ft_lstsize(l) == 1);
	ft_lstadd_front(&l, ft_lstnew((void *) 2));
	/* 3 */ check(ft_lstsize(l) == 2);
	freeList(l);
	printf("\n");
}
