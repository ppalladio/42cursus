#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int len1 = ft_strlen(s1);
	int len2 = ft_strlen(s2);
	int i = 0;
	int j = 0;
	char *new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s1 || !s2)
		return NULL;
	if (new_str == NULL)
		return NULL;
	while (s1[i] && i < (len1))
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] && j < (len2))
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	new_str[i] = '\0';
	return new_str;
}