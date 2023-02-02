/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:35:12 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/31 16:02:03 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src_;

	i = 0;
	dst = (char *)dest;
	src_ = (char *)src;
	if (!dst || !src)
		return (NULL);
	else
	{
		while (dst[i] && i < n)
		{
			dst[i] = src_[i];
			i++;
		}
		return (dst);
	}
}
//? why dont we compare the length of src and dest

// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	char *d = dest;
// 	const char *s = src;
// 	char *t;
// 	size_t i;

// 	i = 0;
// 	t = (char *)malloc(sizeof(char) * n);
// 	if (d == s && !s)
// 		return (NULL);
// 	else
// 	{
// 		while (s[i] && i < n)
// 		{
// 			t[i] = s[i];
// 			d[i] = t[i];
// 			i++;
// 		}
// 		free(t);
// 		return (d);
// 	}
// }
// //? IF THE LEN OF SRC IS LONGER THAN DEST THEN THE FT WILL PRINT TWICE SRC


// int main () {
// 	const char src[] = "SOMESTRINGSSSSSSSSSSSSS";
// 	char dest[] = "longstring";
// 	int i = 5;
// 	printf("src = %s\n", src);
// 	printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, i);
// 	printf("After memcpy dest = %s\n", dest);

// 	const char s[] = "SOMESTRINGSSSSSSSSSSSSS";
// 	char d[]= "longstring";
// 	printf("Before memcpy dest = %s\n", d);
// 	memcpy(d, s, i);
// 	printf("After memcpy dest = %s\n", d);

// return(0);
// }