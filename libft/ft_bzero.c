/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:54:35 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/18 18:24:37 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	char	*j = s;

	i = 0;
	if (n!=0)
	{
		while (i <= n)
		{
			j[i] = ;
			i++;
		}
	}
	j[i]= '\0';
}

int main()
{
	void *s = "asc";
	int i = 5;
	
	printf("%f\n",ft_bzero(s,i));
	printf("%s\n",bzero(s,i));
}