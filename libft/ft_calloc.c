
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *v;

	v = malloc(size * count);
	if (v == NULL)
		return (NULL);
	ft_bzero(v, count * size);
	return (v);
}