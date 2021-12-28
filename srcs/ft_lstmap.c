#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*ret;
	t_list	*retfirst;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	retfirst = ret;
	temp = lst;
	while (temp)
	{
		ret->content = f(temp->content);
		ret->next = malloc(sizeof(t_list));
		if (!ret->next)
		{
			ft_lstclear(&retfirst, del);
			return (NULL);
		}
		ret = ret->next;
		temp = temp->next;
	}
	ret->next = NULL;
	return (retfirst);
}
