/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:12:17 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/16 19:25:36 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while(b[len] && i<=len)
	{
		b[i] = c;
		i++;
	}
}

int main()
{
	char a[50];
	void *b = a[20];
	int c = 1;
	size_t len = 10;

    printf("%p\n", *ft_memset(*b,c,len));
	printf("%p\n",*memset(*b,c,len));
}