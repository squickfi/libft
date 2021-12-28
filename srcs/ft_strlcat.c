#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	countdst;
	size_t	count;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	countdst = dstlen;
	count = 0;
	while (src[count] && countdst < dstsize - 1)
	{
		dst[countdst] = src[count];
		countdst++;
		count++;
	}
	dst[countdst] = 0;
	return (dstlen + srclen);
}
