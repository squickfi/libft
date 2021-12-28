#include "libft.h"

static void	join(const char *s1, const char *s2, char *str)
{
	int		count;
	int		subcount;

	count = 0;
	subcount = 0;
	while (s1[count])
	{
		str[subcount] = s1[count];
		subcount++;
		count++;
	}
	count = 0;
	while (s2[count])
	{
		str[subcount] = s2[count];
		subcount++;
		count++;
	}
	str[subcount] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	join(s1, s2, str);
	return (str);
}
