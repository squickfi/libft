#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	return (temp);
}
