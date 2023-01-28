/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:12:45 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/28 18:29:16 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	// int len;
	void *d;
	d = NULL;
    // len = 0;
	char *pD = d;
	pD = (char*)malloc(sizeof(char)*size);
	// while(src[len])
	// {
	// 	len++;
	// }

	// printf("%lu\n%lu", len,size);
	i = 0;
	if (pD != src)
	{
		j = 0;
		while (dst[i] && i < size - 1)
		{
			pD[i] = src[j];
			i++;
			j++;
		}
		pD[-1] ='\0';
		free(pD);
		return (*src);
	}
	else
		return (0);
}

int main()
{
	char d[6];
	char s[] = "abcdefghijklmnopqr";
	size_t i = 6;
	int r = strlcpy(d, s, i);
	int ft_r = ft_strlcpy(d, s, i);
	printf("FT!!Copied '%s' into '%s', length %d\n",s,d,ft_r);
	printf("Copied '%s' into '%s', length %d\n",s,d,r);
	printf("%lu\n", ft_strlcpy(d, s, i));
	printf("%lu\n", strlcpy(d, s, i));
	return 0;
}

// #include <stdio.h>
// #include <string.h>

// void test(int size)
// {
//     char string[] = "Helhere, Venus";
//     char buffer[19];
//     int r;

//     r = strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %d\n",
//             string,
//             buffer,
//             r
//           );
// }

// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);

//     return(0);
// }