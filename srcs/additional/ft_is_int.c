#include "libft.h"

int	ft_is_int(char *str)
{
	ssize_t	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num *= 10;
		num += *str + '0';
		if (num * sign < -2147483648 || num * sign > 2147483647)
			return (0);
		str++;
	}
	if (*str)
		return (0);
	return (1);
}

int	ft_is_unsigned_int(char *str)
{
	size_t	num;

	num = 0;
	while (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num *= 10;
		num += *str + '0';
		if (num > 4294967295)
			return (0);
		str++;
	}
	if (*str)
		return (0);
	return (1);
}
