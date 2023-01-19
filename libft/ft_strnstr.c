/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:54:06 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/19 21:47:13 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simplistic algorithm with O(n2) worst case

#include "libft.h"
char *ft_strnstr(const char *h, const char *n, size_t len)
{
	char c;
	size_t i;
	size_t len_n;

	c = *n;
	i = 0;
	size_t len_h = 0;
	printf("%c\n",*n++);
	while (n[i])
	{
		len_n++;
		i++;
	}
	if (c == '\0')
	{
		return (char *)h;
	}
	else
	printf("%zu\n", len_n);
	{
		while (len_n <= len)
		{
			if (*h == c)
			{
				i = 1;
				if (i == len)
					return (char *)h;
				if (h[i] != n[i])
					break;
				i++;
			}
			len--;
			h++;
		}
	}
	return NULL;
}


int main()
{
	char *str = "my oh my oh my";
	char *str1 = "my";
	size_t len = 6;
	printf("%s\n", ft_strnstr(str, str1, len));
	printf("%s\n", strnstr(str, str1, len));
	return (0);
}