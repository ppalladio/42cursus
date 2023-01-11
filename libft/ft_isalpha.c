/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:04:20 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/11 16:44:14 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}


#include<ctype.h>
#include<stdio.h>
int main(void)
{
	unsigned char c = 'c';
	printf("%d\n", ft_isalpha(c));
	printf("%d" ,isalpha(c));
}