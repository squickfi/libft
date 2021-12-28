#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*lastc;

	lastc = NULL;
	count = 0;
	if (c == 0)
	{
		lastc = (char *)(s + ft_strlen(s));
		return (lastc);
	}
	while (s[count])
	{
		if (s[count] == (char)c)
			lastc = (char *)(s + count);
		count++;
	}
	return (lastc);
}
