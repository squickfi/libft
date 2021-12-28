#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	new_len;
	char	*str;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
