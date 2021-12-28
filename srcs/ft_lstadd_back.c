#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && *lst)
	{
		temp = ft_lstlast(*lst);
		if (new)
			temp->next = new;
	}
	else if (lst)
		*lst = new;
}
