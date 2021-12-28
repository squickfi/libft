#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstdup;
	const unsigned char	*srcdup;
	size_t				count;

	if (dst == src)
		return (dst);
	dstdup = dst;
	srcdup = src;
	count = 0;
	while (count < n)
	{
		dstdup[count] = srcdup[count];
		count++;
	}
	return (dst);
}
