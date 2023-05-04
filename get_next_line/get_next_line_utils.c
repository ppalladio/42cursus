#include "get_next_line.h"

size_t ft_len(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_bzero(void *s, size_t n)
{
	char *str;
	size_t i;

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

void *ft_calloc(size_t n, size_t size)
{
	int *ptr;

	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

char *ft_strcat(const char *dest, const char *src)
{
	int i;
	int j;
	char *str;
	int total_len;

	i = 0;
	j = 0;
	total_len = ft_len(dest) + ft_len(src);
	str = ft_calloc(total_len + 1, 1);
	if (!str || !dest || !src)
		return NULL;
	while (dest[i])
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j])
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i + j] = '\0';
	return str;
}
