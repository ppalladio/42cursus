
#include "libft.h"
void *ft_memmove(void* dst, const void* src, size_t len)  
{  
    char *dstptr = (char *)dst;
	char *srcptr = (char *)src;  
    size_t	i;

	i = 0;
	if (srcptr < dstptr)
	{
		while (len >= 0)
		{
			dstptr[len] = srcptr[len];
			len--;
			return (dstptr);
		}
	}
	else if (srcptr > dstptr)
	{
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
			return (dstptr);
		}
	}
	return (dstptr);
}

// int main () {
// 	char dest[] = "oldng";
// const char src[]  = "neffwinga";
// char des[] = "oldng";
// const char sr[]  = "neffwinga";
// size_t i =7;
// printf("Before memmove dest = %s, src = %s\n", dest, src);
// printf("address of ft_memmove%p\t\n",memmove(dest, src, i));
// printf("After ft_memmove dest = %s, src = %s\n", dest, src);
// printf("Before memmove des = %s, sr = %s\n", des, sr);
// printf("address of memmove%p\t\n",memmove(des, sr, i));
// printf("After memmove des = %s, sr = %s\n", des, sr);

//    return(0);
// }