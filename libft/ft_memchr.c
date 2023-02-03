
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ch;
	unsigned char *ptrc;
	size_t i;

	ch = (unsigned char *)s;
	ptrc = NULL;
	i = 0;
	if (n == 0)
		return (ptrc);
	if (i <= n)
	{
		while (ch[i])
		{
			if (ch[i] != c)
				i++;
			else
			{
				ptrc = &ch[i];
				break;
			}
		}
	}
	return (ptrc);
}

// int	main()
// {
// 	char result[] = "my2str1ng";
// 	int i;
// 	i = '2';
// 	size_t t;
// 	t = 4;
// 	printf("%p\n", ft_memchr(result, i, t));
// 	printf("%p\n", memchr(result, i, t));
// }