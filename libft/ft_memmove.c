
#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src_;

	i = 0;
	dst = (char *)dest;
	src_ = (char *)src;
	if (dst == src_)
		return (NULL);
	else
	{
		while (dst[i] && i < n)
		{
			dst[i] = src_[i];
			i++;
		}
		return (dst);
	}
}
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

int main()
{
	char dest[] = "oldstring";
   	const char src[]  = "newstring";
	char *se = "************************";
	size_t i = 9;
	printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
	printf("after ft_memmove dest = %s, src = %s\n", dest, src);
	printf("address of mememove ft_memmove %p\n",ft_memmove(dest,src,i));

	printf("%s\n",se);

	printf("Before memmove dest = %s, src = %s\n", dest, src);
   	printf("after memmove dest = %s, src = %s\n", dest, src);
	printf("address of mememove %p\n",memmove(dest,src,i));

	return 0;
}