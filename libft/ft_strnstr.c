// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strnstr.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/01/19 19:54:06 by yupeng            #+#    #+#             */
// /*   Updated: 2023/01/31 12:00:15 by yupeng           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// // simplistic algorithm with O(n2) worst case

// #include "libft.h"

// char	*ft_strnstr(const char *h, const char *n, size_t len)
// {
// 	const char *pN;
// 	const char *pH;
// 	size_t len_n;

// 	pN = n;
// 	len_n = 0;
// 	printf("%c\n",*n++);
// 	while (pN[len_n])
// 	{
// 		len_n++;
// 	}
// 	if (!pN)
// 	{
// 		return pH;
// 	}
// 	else
// 	printf("%zu\n", len_n);
// 	{
// 		while (len_n < len)
// 		{
// 		     if(pH[len_n] == pN[len_n])
// 			  	return 
// 			len--;
// 			h++;
// 		}
// 	}
// 	return NULL;
// }


// int main()
// {
// 	char *str = "my oh my oh my";
// 	char *str1 = "my";
// 	size_t len = 6;
// 	printf("%s\n", ft_strnstr(str, str1, len));
// 	printf("%s\n", strnstr(str, str1, len));
// 	return (0);
// }