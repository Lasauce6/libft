#include "../test.h"

void freeList(t_list *head)
{
	if (head)
		freeList((t_list *) head->next);
	free(head);
}

int	main(void)
{
	t_list	*l;
	t_list	*l2;

	printf("lstadd_back\t: ");
	l = 0;
	l2 = 0;
	ft_lstadd_back(&l, ft_lstnew((void *) 1));
	/* 1 */ check(l->content == (void *) 1);
	/* 2 */ check(l->next == 0);
	ft_lstadd_back(&l, ft_lstnew((void *) 2));
	/* 3 */ check(l->content == (void *) 1);
	/* 4 */ check(((t_list *) (l->next))->content == (void *) 2);
	/* 5 */ check(((t_list *) (l->next))->next == 0);
	ft_lstadd_back(&l2, ft_lstnew((void *) 3));
	ft_lstadd_back(&l2, ft_lstnew((void *) 4));
	ft_lstadd_back(&l, l2);
	/* 6 */ check(l->content == (void *) 1);
	/* 7 */ check(((t_list *) (l->next))->content == (void *) 2);
	/* 8 */ check(((t_list *) (((t_list *) (l->next))->next))->content == (void *) 3);
	/* 9 */ check(((t_list *) ((t_list *) (((t_list *) (l->next))->next))->next)->content == (void *) 4);
	/* 10 */ check(((t_list *) ((t_list *) (((t_list *) (l->next))->next))->next)->next == 0);
	freeList(l);
	printf("\n");
}
