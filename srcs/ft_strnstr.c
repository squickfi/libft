#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (len && *haystack)
	{
		j = 0;
		while (j < i && j < len && *(unsigned char *)(haystack + j)
				== *(unsigned char*)(needle + j))
		{
			if (*(unsigned char *)(needle + j + 1) == 0)
				return ((char *)haystack);
			j++;
		}
		haystack++;
		len--;
	}
	return ((char *) NULL);
}
