/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:45:03 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/11 16:51:48 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int i =Á;
    printf("%d\n",ft_isascii(i));
	printf("%d\n",isascii(i));}
	