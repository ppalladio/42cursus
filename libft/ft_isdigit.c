/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:18:29 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/11 13:42:30 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned int i)
{
	if (i >= 1 && i <= 9)
		return (1);
	else
		return (0);
}

	// The values returned are //!nonzero if the character c falls into the tested class, and zero if not.