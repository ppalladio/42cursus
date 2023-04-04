
#include "libft.h"



int nlen(int n)
{
	int i;
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	if (0 <= n <= 9)
	{
		i++;
	}
	return (i);
}



char *ft_itoa(int n)
{
	char *result;
	int sign;
	int i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = nlen(n);
	result = (char *)malloc(i + 1);
	if (!result)
		return NULL;
	result[i] = '\0';
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = 0;
	}
	while (i > 0)
	{
		result[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (!sign)
	{
		result[0] = '-';
	}
	return result;
}


// int main()
// {
// 	int i = -10;
// 	printf("%s\n",ft_itoa(i));
// }