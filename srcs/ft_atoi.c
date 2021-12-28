#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\r')
		return (1);
	else if (c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	num;
	int	sign;

	count = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[count]))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = 0;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		num *= 10;
		num += str[count] - '0';
		count++;
	}
	if (sign)
		return (num);
	return (-num);
}
