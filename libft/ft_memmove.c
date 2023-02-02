
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *ptrd = (char *)dst;
	char *ptrs = (char *)src;
	if (ptrs >= ptrd)
	{
		while (len)
		{
			ptrd[len] = ptrs[len];
			len--;
		}
	}
	else if (ptrd > ptrs)
	{
		ptrd += len +1;
		ptrs += len +1;
		while (len)
		{
			ptrd[len] = ptrs[len];
			len--;
		}
	}
	return	ptrd;
	if (!dst	|| !src)
		return (0);
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