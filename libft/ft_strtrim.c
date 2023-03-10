
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t len;
	char *result;

	start = 0;
	if (!s1 || !set)
		return NULL;
	if (!*s1)
		return ft_strdup("");
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return NULL;
	ft_strlcpy(result, &s1[start], len + 1);
	result[len] = '\0';
	return result;
}