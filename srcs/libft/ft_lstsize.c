#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	if (!lst)
		return (0);
	temp = lst;
	count = 0;
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	return (count + 1);
}
