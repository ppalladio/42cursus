#include "get_next_line.h"

size_t	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	if (n != 0)
	{
		while (str[i] && i < n)
		{
			str[i] = 0;
			i++;
		}
	}
}

void	*ft_calloc(size_t n, size_t size)
{
	int	*ptr;

	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}


