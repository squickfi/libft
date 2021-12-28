#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sdup;
	unsigned char		cdup;
	size_t				count;

	sdup = s;
	cdup = c;
	count = 0;
	while (count < n)
	{
		if (sdup[count] == cdup)
			return ((void *)s + count);
		count++;
	}
	return (NULL);
}
