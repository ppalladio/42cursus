/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:57:40 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 14:00:49 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 95 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int main()
// {
// 	int c = 73;
// 	printf("%c\n",ft_toupeer(c));
// 	printf("%c\n",toupper(c));
// 	return 0;
// }