#include "libft.h"



int nlen(int n)
{
	int i;
	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}



char *ft_itoa(int n)
{
	int len;
	char *str;
	int sign;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	len = nlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (len >= 0)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}