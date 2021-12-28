#include "libft.h"

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
