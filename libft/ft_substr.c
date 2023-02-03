
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ch;
	char *sub;
	unsigned int i;
	unsigned int len_s;

	len_s = 0;
	while(s[len_s])
		len_s++;
	i=0;
	sub = (char *)s;
	sub = (char *)malloc(sizeof(char)*(len_s-start+1));
	if (sub== NULL)
		return NULL;

}