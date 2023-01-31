/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:50 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/19 19:52:57 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t len(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int sum;
	size_t len_1;
	size_t len_2;

	i = 0;
	len_1 = len(s1);
	len_2 = len(s2);
	sum = 0;
	// while(s1[len_1])
	// 	len_1++;
	// while(s2[len_2])
	// 	len_2++;
	if ((i <= len_1 && i <= len_2) && (n <= len_1 && n <= len_2))
	{
		while (++i <= n)
			sum += s2[i] - s1[i];
	}
	else if ((i <= len_1 && i <= len_2) && (n >= len_1 || n >= len_2))
	{
		if (len_1 < len_2)
		{
			while (++i <= len_1)
				sum += s2[i] - s1[i];
		}
		if (len_2 < len_1)
		{
			while (++i <= len_2)
				sum += s2[i] - s1[i];
		}
	}
	return (sum);
}

int main()
{
	const char *s1 = "ssedadweqws";
	const char *s2 = "swsdasdcwdds";
	size_t n = 5;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
}
