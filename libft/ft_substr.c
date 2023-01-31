
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ch;
	char *src;
	size_t i;
	size_t st;
	src = (char *)s;

	st = (size_t)start;
	ch = (char *)malloc(sizeof(char) * len);
	i = 0;

	while (s[i])
	{
		while (ch[i])
			while (st < len)
			{
				ch[i] = s[st];
				st++;
			}
		i++;
	}

}