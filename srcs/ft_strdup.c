#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		length;

	length = ft_strlen(s1);
	s2 = malloc((length + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	s2[length] = 0;
	while (length > 0)
	{
		length--;
		s2[length] = s1[length];
	}
	return (s2);
}
