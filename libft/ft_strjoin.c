#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char *new_str = malloc(len1 + len2 + 1);

    if (new_str == NULL)
        return NULL;
    
    ft_strlcpy(new_str, s1,len1);
    ft_strlcpy(new_str + len2, s2,len2);
    new_str[len1 + len2] = '\0';
    return new_str;
}