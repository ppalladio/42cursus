
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

bool	ft_strchr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == ch)
			return (true);
	}
	return (false);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	size_t	i;
	char	*alloced;

	total = nmemb * size;
	i = 0;
	alloced = malloc(total);
	if (!alloced)
		return (NULL);
	while (total-- > 0)
		alloced[i++] = '\0';
	return ((void *)alloced);
}