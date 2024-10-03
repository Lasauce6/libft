#include "../test.h"

void freeList(t_list *head) {
	if (head)
		freeList((t_list *) head->next);
	free(head);
}

int	main(void)
{
	t_list	*l;

	printf("letdelone\t: ");
	l = ft_lstnew(malloc(1));
	ft_lstdelone(l, free);
	l = 0;
	printf("\n");
}
