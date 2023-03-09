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
#include "libft.h"


int ft_strncmp(const char *s1, const char *s2, size_t n)
{

	size_t i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] == '\0')
			return (0);
		i++;
	}
	return 0;
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
