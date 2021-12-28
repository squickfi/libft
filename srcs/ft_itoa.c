#include "libft.h"

static int	ft_newn(unsigned int *n2, int n)
{
	if (n < 0)
	{
		*n2 = -n;
		return (1);
	}
	else
	{
		*n2 = n;
		return (0);
	}
}

static int	howmanychars(int n, int count)
{
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				count;
	int				sign;
	unsigned int	n2;

	count = 0;
	sign = ft_newn(&n2, n);
	count = howmanychars(n, count);
	count += sign;
	str = malloc((count + 2) * sizeof(char));
	if (!str)
		return (NULL);
	str[count + 1] = 0;
	while (count > 0)
	{
		str[count] = n2 % 10 + '0';
		n2 /= 10;
		count--;
	}
	if (sign)
		str[count] = '-';
	else
		str[count] = n2 % 10 + '0';
	return (str);
}
