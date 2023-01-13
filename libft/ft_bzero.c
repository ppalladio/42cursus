/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:54:35 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/11 17:27:34 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
void	ft_bzero(void *s, size_t n)
{
	int	i;

	char	*j = s;
	i = 0;
	if (n!=0)
	{
		while (i <= n)
		{
			j[i] = 0;
			i++;
		}
	}
		j[n] = *"\0";
		s = &j;
}



int main()
{
	void	*s;
	int i = 5;
	
	printf("%f\n",ft_bzero(s,i));
	printf("%s\n",bzero(s,i));
}