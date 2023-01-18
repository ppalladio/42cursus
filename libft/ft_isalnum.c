/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:07:13 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/16 15:38:43 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include<ctype.h>
#include<stdio.h>
int main()
{
	int c = '*';
	printf("%d\n",ft_isalnum(c));
	printf("%d\n",isalnum(c));
}

// RETURN VALUE
//        The values returned are //!nonzero 
//if the character c falls into the tested class, and zero if not.