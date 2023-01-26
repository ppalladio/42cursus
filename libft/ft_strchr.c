/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:06:25 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 14:23:13 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		else
			return (NULL);
		i++;
	}
	return (0);
}

// int main(){

// 	char *s = "abcde";
// 	int c = 96;
// 	printf("%p\n",ft_strchr(s,c));
// 	printf("%p\n",strchr(s,c));
// 	return 0;
// }