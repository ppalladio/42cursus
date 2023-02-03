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

// size_t sum1(char *s1, char *s2, size_t i)
// {
// 	size_t len_s;
// 	size_t i;

// 	i = 0;
// 	len_s = len(s1);
// 	while (s1[len_s])
// 	{
// 		if (s1[i] != s2[i])
// 			i += s1[i] - s2[i];
// 		i++;
// 	}
// 	return i;
// }

// size_t sum2(char *s1, char *s2, size_t i)
// {
// 	size_t len_s;
// 	size_t i;

// 	i = 0;
// 	len_s = len(s2);
// 	while (s2[len_s])
// 	{
// 		if (s1[i] != s2[i])
// 			i += s1[i] - s2[i];
// 		i++;
// 	}
// 	return i;
// }
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int sum;
	size_t len_1;
	size_t len_2;

	i = 0;
	sum = 0;
	len_1 = len(s1);
	len_2 = len(s1);
	while (s2[len_2])
		len_2++;
	if (len_1 < n)
	{
		while (s1[len_1])
			if (s1[i] != s2[i])
				i += s1[i] - s2[i];
		i++;
	}
	else if (len_2 < n)
	{
		while (s2[len_2])
			if (s1[i] != s2[i])
				i += s1[i] - s2[i];
		i++;
	}
	return i;
}

// int main()
// {
// 	const char *s1 = "ssedadweqws";
// 	const char *s2 = "swsdasdcwdds";
// 	size_t n = 5;

// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// 	return (0);
// }
