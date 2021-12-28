#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		count;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (s[count])
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = 0;
	return (str);
}
