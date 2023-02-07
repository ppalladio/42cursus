#include "libft.h"

void ft_putnbr_fd(int n, int fd)

{
	if (fd==1)
		write(fd, &n, sizeof(int));
}