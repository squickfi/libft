#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1dup;
	unsigned char	*s2dup;
	size_t			count;

	if (n == 0)
		return (0);
	s1dup = (unsigned char *)s1;
	s2dup = (unsigned char *)s2;
	count = 0;
	while (s1dup[count] && count < n - 1 && s1dup[count] == s2dup[count])
		count++;
	return (s1dup[count] - s2dup[count]);
}
