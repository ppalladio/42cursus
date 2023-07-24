
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif 

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
bool	ft_strchr(const char *str, int ch);
void	*ft_calloc(size_t nitems, size_t size);

#endif