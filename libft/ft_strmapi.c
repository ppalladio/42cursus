#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *ch;
	i = 0;

	if (!s || !f)
		return NULL;
	if (!(ch = (char *)malloc(ft_strlen(s) + 1)))
		return NULL;
	while (s[i])
	{

		ch[i] = f(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}

// This implementation first checks if both the input string s and the function pointer f are non-NULL. If either is NULL, the function returns NULL. Then, it allocates memory for the result string using malloc, and checks if the allocation succeeded. If the allocation failed, the function returns NULL. Then, it iterates through each character of the input string s, and applies the function f to each character, passing its index i as the first argument and the character as the second argument. The result of each application is stored in the corresponding character of the result string. Finally, the implementation returns the result string.