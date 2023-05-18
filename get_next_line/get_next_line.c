
#include "get_next_line.h"

char print_line(char *c)
{
	return c[0];
}

char	*get_next_line(int fd)
{
	ssize_t n; 
	size_t i;
	char *buff;
	n = 0;

	buff = calloc(BUFFER_SIZE,1);

	if(fd<=0)
	{
		return NULL;
	}
	while(1)
	{
		i = read(fd, buff+n, 1);
		if(i<1)
		{
			buff[n]='\0';
			return buff;
		}
		if(buff[n]=='\n')
		{
			buff[n+1]='\0';
			return buff;
		}
		n += i;
	}
}

