#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstdup;
	const unsigned char	*srcdup;

	if (dst == src)
		return (dst);
	dstdup = dst;
	srcdup = src;
	if (dstdup > srcdup)
	{
		while (len > 0)
		{
			len--;
			dstdup[len] = srcdup[len];
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
