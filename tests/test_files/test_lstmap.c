#include "../test.h"

void	freeList(t_list *head) {
	if (head)
		freeList((t_list *) head->next);
	free(head);
}

void	*add_one(void *p) {
	void	*r = malloc(sizeof(int));

	*(int *) r = *(int *) p + 1;
	return (r);
}

int	main(void)
{
	printf("lstmap\t\t: ");
	int tab[] = {0, 1, 2, 3};
	t_list	*l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list	*m = ft_lstmap(l, add_one, free);
	t_list	*tmp = l;
	/* 1 2 3 4 */ for (int i = 0; i < 4; ++i)
	{
		check(*(int *) tmp->content == i);
		tmp = (t_list *) tmp->next;
	}
	tmp = m;
	/* 5 6 7 8 */ for (int i = 0; i < 4; ++i)
	{
		check(*(int *) tmp->content == i + 1);
		tmp = (t_list *) tmp->next;
	}
	freeList(l);
	ft_lstclear(&m, free);
	printf("\n");
}
