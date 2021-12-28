#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	count;

	count = 0;
	if (s)
	{
		while (s[count])
		{
			ft_putchar_fd(s[count], fd);
			count++;
		}
	}
}
