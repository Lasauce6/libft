#include "../test.h"

void freeList(t_list *head) {
	if (head)
		freeList((t_list *) head->next);
	free(head);
}

int	main(void)
{
	t_list	*l;

	printf("lstclear\t: ");
	l = ft_lstnew(malloc(1));
	for (int i = 0; i < 10; ++i)
		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
	ft_lstclear(&l, free);
	/* 1 */ check(l == 0);
	printf("\n");
}
