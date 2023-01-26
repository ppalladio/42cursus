/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:35:12 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 15:36:45 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src_;

	i = 0;
	dst = (char *)dest;
	src_ = (char *)src;
	if (dst == src_)
		return (NULL);
	else
	{
		while (dst[i] && i < n)
		{
			dst[i] = src_[i];
			i++;
		}
		return (dst);
	}
}
//? why dont we compare the length of src and dest