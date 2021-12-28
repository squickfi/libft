#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1dup;
	const unsigned char	*s2dup;
	size_t				count;

	s1dup = s1;
	s2dup = s2;
	count = 0;
	while (count < n)
	{
		if (s1dup[count] != s2dup[count])
			return (s1dup[count] - s2dup[count]);
		count++;
	}
	return (0);
}
