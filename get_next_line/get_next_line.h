/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:53:49 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/09 19:00:05 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE 
# define BUFFER_SIZE 1042
# endif

char	*get_next_line(int fd);

size_t	ft_len(const char *str);
void	*ft_calloc(size_t n, size_t size);
void	ft_bzero(void *s, size_t n);
char *ft_strcat(char *dest, const char *src);
char *ft_free(char *buffer, char *str);

#endif
