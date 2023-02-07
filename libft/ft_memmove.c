
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	size_t i;

	if (d == s)
		return dst;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}

	else
	{;
		while (len > 0)
		{
			d[len-1] = s[len-1];
			len--;
		}
	}
	return d;
}

// int main()
// {
// 	char dest[] = "oldng";
// 	const char src[] = "neffwinga";
// 	char des[] = "oldng";
// 	const char sr[] = "neffwinga";
// 	size_t i = 6;
// 	printf("Before memmove dest = %s, src = %s\n", dest, src);
// 	printf("address of ft_memmove%p\t\n", memmove(dest, src, i));
// 	printf("After ft_memmove dest = %s, src = %s\n", dest, src);
// 	printf("Before memmove des = %s, sr = %s\n", des, sr);
// 	printf("address of memmove%p\t\n", memmove(des, sr, i));
// 	printf("After memmove des = %s, sr = %s\n", des, sr);

// 	return (0);
// }