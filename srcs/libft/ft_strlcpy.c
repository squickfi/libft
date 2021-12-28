#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	if (!dst || !src)
		return (0);
	count = 0;
	if (dstsize)
	{
		while (src[count] && dstsize - 1)
		{
			dst[count] = src[count];
			count++;
			dstsize--;
		}
		dst[count] = 0;
	}
	while (src[count])
		count++;
	return (count);
}
