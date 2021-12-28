#include "libft.h"

void	*ft_memset (void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			count;

	str = b;
	cc = c;
	count = 0;
	while (count < len)
	{
		str[count] = cc;
		count++;
	}
	return (b);
}
