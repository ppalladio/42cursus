
// #include "libft.h"

// char *ft_itoa(int n)
// {
// 	char *str;
// 	int i;
// 	int sign;
// 	char *result;
// 	const char *p;
// 	p = (const char *)n;
// 	i = 0;
// 	sign = 1;
// 	result = NULL;
// 	str = (char *)malloc(sizeof(char) * ((ft_strlen(p) + 1)));

// 	if (!str || !n)
// 		return NULL;
// 	if (str[i] == '-')
// 		sign = -1;
// 	i++;
// 	while (str[i])
// 	{
// 		result = str[i]*10 + result - '0';
// 		i++;
// 	}
// 	return ((result));
// }