#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	count;
	int	words;

	count = 0;
	words = 0;
	while (s[count] == c && c)
		count++;
	while (s[count])
	{
		while (s[count] && s[count] != c)
			count++;
		words++;
		while (s[count] == c && c)
			count++;
	}
	return (words);
}

static char	**freesplit(int temp, char **strs)
{
	while (temp >= 0)
	{
		free(strs[temp]);
		temp--;
	}
	free(strs);
	return (strs);
}

char	**fillarr(const char *s, char **strs, char c)
{
	int	count;
	int	temp;
	int	start;

	count = 0;
	temp = 0;
	while (s[count] == c && c)
		count++;
	while (s[count])
	{
		start = count;
		while (s[count] && s[count] != c)
			count++;
		strs[temp] = ft_substr(s, start, count - start);
		if (!strs[temp])
		{
			freesplit(temp, strs);
			return (NULL);
		}
		temp++;
		while (s[count] == c && c)
			count++;
	}
	strs[temp] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (!fillarr(s, strs, c))
		return (NULL);
	return (strs);
}
