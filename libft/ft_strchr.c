/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:06:25 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/28 19:12:50 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	else
	{
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)(&s[i]));
			i++;
		}
		// if (s[i] == c)
		// 		return ((char *)(&s[i]));
	}
	return (NULL);
}

// int main(){

// 	char *s = "abacde as ad s";
// 	int c = 's';
// 	printf("%p\n",ft_strchr(s,c));
// 	printf("%p\n",strchr(s,c));

// printf( "The first occurrence of %c in '%s' is '%s'\n",
//             c, s, ft_strchr(s,c) );
// 	printf( "The first occurrence of %c in '%s' is '%s'\n",
//             c, s, strchr(s,c) );
// 	return 0;
// }