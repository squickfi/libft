#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dstdup;
	const unsigned char	*srcdup;
	size_t				count;
	unsigned char		cc;

	dstdup = dst;
	srcdup = src;
	count = 0;
	cc = c;
	while (count < n)
	{
		dstdup[count] = srcdup[count];
		if (srcdup[count] == cc)
		{
			count++;
			return (dstdup + count);
		}
		count++;
	}
	return (NULL);
}
