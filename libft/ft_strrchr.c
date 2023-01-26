// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strrchr.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/01/18 22:09:32 by marvin            #+#    #+#             */
// /*   Updated: 2023/01/26 14:03:55 by yupeng           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// char *ft_strrchr(const char *s, int c)
// {
// 	int i;
// 	int j;
// 	char *str;
// 	i = 0;

// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			j = 0;
// 			str[j] = c;
// 			j++;
// 		}
// 		i++;
// 	}

// 	if (*str)
// 		return &str[-1];
// 	else
// 		return NULL;
// }

// // int main()
// // {
// // 	char *s = "abc";
// // 	int c = 99;
// // 	printf("%p\n", ft_strrchr(s, c));
// // 	printf("%p\n", strrchr(s, c));
// // 	return 0;
// // }