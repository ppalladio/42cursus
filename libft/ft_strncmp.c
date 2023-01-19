/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:50 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/19 19:52:57 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int	j;

	i = 0;

	while (s1[i] && s2[i] )
	{
		j = 0;
		if(i < n)
			j += s1[i] - s2[i];
		i++;
	}
	return (j);
}

int main()
{
	const char    *s1 = "ssedads";
	const char    *s2 = "swsdsadas";
    size_t n = 9;

	printf("%d\n",ft_strncmp(s1,s2,n));
	printf("%d\n",strncmp(s1,s2,n));
	return (0);
}
