
#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1 = (unsigned char *)str1;
	unsigned char *s2 = (unsigned char *)str2;
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
			i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "ABCdEFd";
// 	char str2[] = "ABCDEF";
// 	size_t i;

// 	i = 7;

// 	printf("%d\n", ft_memcmp(str1, str2, i));
// 	printf("%d\n", memcmp(str1, str2, i));

// 	if (ft_memcmp(str1, str2, i) > 0)
// 	{
// 		printf("str2 is less than str1\n");
// 	}
// 	else if (ft_memcmp(str1, str2, i) < 0)
// 	{
// 		printf("str1 is less than str2\n");
// 	}
// 	else
// 	{
// 		printf("str1 is equal to str2\n");
// 	}
// 	// original:
// 	char Nstr1[] = "ABCdEFd";
// 	char Nstr2[15] = "ABCDEF";
// 	int ret;
// 	int j = 7;

// 	if (memcmp(Nstr1, Nstr2, j - 1) > 0)
// 	{
// 		printf("str2 is less than str1\n");
// 	}
// 	else if (ret < 0)
// 	{
// 		printf("str1 is less than str2\n");
// 	}
// 	else
// 	{
// 		printf("str1 is equal to str2\n");
// 	}

// 	return (0);
// }