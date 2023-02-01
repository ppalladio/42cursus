/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:54:06 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/31 12:00:15 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simplistic algorithm with O(n2) worst case

#include "libft.h"

char *ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*(char *)n)
		return ((char *)h);
	else
	{
		while (i < len && *h)
		{
			if (n[0] == h[i])
				while (h[i + j] == n[j] && i + j < len)
				{
					if (*h)
						return ((char *)&h[i]);
					j++;
				}
			i++;
		}
	}
	return (NULL);
}

int main()
{
	char *str = "my f oh my sd  as  oh my";
	char *str1 = "d";
	size_t len = 6;
	printf("%s\n", ft_strnstr(str, str1, len));
	printf("%s\n", strnstr(str, str1, len));
	return (0);
}