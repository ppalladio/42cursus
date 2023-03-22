
#include "libft.h"

int nlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	if (n != 0)
		i++;
	return (i);
}

char *ft_itoa(int n)
{
	char *res;
	int i;
	int sign;

	if (n <= -2147483648)
        return (ft_strdup("-2147483648"));
	i = nlen(n);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (i >= 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (sign)
		res[0] = '-';
	return (res);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }