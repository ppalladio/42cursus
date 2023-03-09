
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	i = 0;

	if (!s)
		return NULL;
	if (start >= (unsigned int)(ft_strlen(s)))
		return "";
	sub = malloc(len + 1);
	if (!sub)
		return NULL;
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return sub;
}

// int main()
// {
// 	const char *s = "abcde";
// 	unsigned int i = 3;
// 	size_t len = 3;

// 	printf("%p\n",ft_substr(s,i,len));
// }


// This implementation starts by checking if the input string s is NULL. If it is, the function returns NULL. 
// Then it checks if the start index is greater than or equal to the length of the input string. 
// If it is, the function returns an empty string "". 
// If both of these checks pass, the function uses malloc to allocate memory for the new substring. 
// If the allocation fails, the function returns NULL. 
// Finally, the function copies len characters from the input string starting at index start 
// into the newly allocated memory and adds a null terminator '\0' to the end of the substring.