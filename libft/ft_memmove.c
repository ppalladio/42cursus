
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
		ft_memcpy(d, s, len);
	 else{
		i = 0;
        while (len > 0)
		{
			d[len - 1] = s[len -1];
			len--;
		}
	 }
	return (d);
}