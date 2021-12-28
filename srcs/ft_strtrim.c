#include "libft.h"

static char	*getstr(char *start, int count)
{
	char	*str;

	str = malloc((count + 1) * sizeof(char));
	if (str)
		ft_strlcpy(str, start, count + 1);
	return (str);
}

static int	isfromset(char c, const char *set)
{
	int	count;

	count = 0;
	while (set[count])
	{
		if (set[count] == c)
			return (1);
		count++;
	}
	return (0);
}

static int	howmanyc(char *start, const char *set)
{
	int	count;

	count = ft_strlen(start);
	if (count > 0)
		count--;
	while (isfromset(start[count], set) && count > 0)
		count--;
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	char	*start;
	int		count;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	count = 0;
	while (isfromset(s1[count], set) && s1[count])
		count++;
	str = getstr(start + count, howmanyc(start + count, set) + 1);
	return (str);
}
