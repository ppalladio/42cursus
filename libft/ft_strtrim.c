
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *s;
	int i = 0;
	int len1=0;
	int len2 =0;

	while(s[len1])
		len1++;
	while(set[len2])
		len2++;
	s= (char *)malloc(len1-len2);

	if (s == NULL)
		return NULL;
	while(s1[i]&& i<len1-len2)
		{s[i];}

}