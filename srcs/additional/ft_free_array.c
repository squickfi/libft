#include "libft.h"

char	**ft_free_char_array_and_return_null(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

int	**ft_free_int_array_and_return_null(int **arr, int size)
{
	while (size)
	{
		free(arr[size - 1]);
		size--;
	}
	free(arr);
	return (NULL);
}
