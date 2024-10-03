#include "../test.h"

void	freeList(t_list *head)
{
	if (head)
		freeList((t_list *) head->next);
	free(head);
}
void	add_one(void * p)
{
	++*(int*) p;
}

int	main(void)
{
	printf("lstiter\t\t: ");
	int	tab[] = {0, 1, 2, 3};
	t_list	*l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	ft_lstiter(l, add_one);
	t_list	*tmp = l;
	/* 1 2 3 4 */ for (int i = 0; i < 4; ++i)
	{
		check(*(int *) tmp->content == i + 1);
		tmp = (t_list *) tmp->next;
	}
	freeList(l);
	printf("\n");
}
