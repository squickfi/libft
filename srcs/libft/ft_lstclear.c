#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *lst;
	if (lst && *lst)
	{
		while (temp1)
		{
			temp2 = temp1->next;
			if (del)
				del(temp1->content);
			free (temp1);
			temp1 = temp2;
		}
	}
	*lst = NULL;
}
