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
	if (!*(char *)n)
		return ((char *)h);
	else
	{
		i = 0;
		while (i < len && h[i])
		{
			j = 0;
			while (h[i + j] == n[j] && i + j < len)
			{
				j++;
				if (j == strlen(n))
					return ((char *)&h[i]);
				while (h[i + j])
					break;
			}
			i++;
		}
	}
	return (NULL);
}

// int main()
// {
// 	char *str;
// 	char *str1 = "y";
// 	size_t len = 10;
// 	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
//         ft_print_result("NULL");
//     else
//         ft_print_result(str);
// 	printf("%s\n", ft_strnstr(str, str1, len));
// 	printf("%s\n", strnstr(str, str1, len));
// 	return (0);
// }