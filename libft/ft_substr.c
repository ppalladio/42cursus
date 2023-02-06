
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ch;
	char *sub;
	unsigned int i;
	unsigned int len_s;

	len_s = 0;
	while (s[len_s])
		len_s++;
	i = 0;
	sub = (char *)s;
	sub = (char *)malloc((len_s - start));
	if (sub == NULL)
		return NULL;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return sub;
}

int main()
{
	const char *s = "abcde";
	unsigned int i = 3;
	size_t len = 3;

	printf("%p\n",ft_substr(s,i,len));
}