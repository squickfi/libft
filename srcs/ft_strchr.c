#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sdup;
	int		count;

	sdup = (char *)s;
	count = 0;
	if (c == 0)
		return (sdup + ft_strlen(s));
	while (s[count])
	{
		if (s[count] == (char)c)
			return (sdup + count);
		count++;
	}
	return (NULL);
}
