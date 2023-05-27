
#include "get_next_line.h"
#include <fcntl.h>
char print_line(char *c)
{
	return c[0];
}

char *get_next_line(int fd)
{
	ssize_t n;
	size_t i;
	char *buff;

	n = 0;
	buff = calloc(BUFFER_SIZE, 1);

	if (fd <= 0)
	{
		free(buff);
		return NULL;
	}
	while (1)
	{
		i = read(fd, buff + n, 1);
		if (i < 1)
		{
			if (n > 0)
			{
				buff[n] = '\0';
				return buff;
			}
			else
			{
				free(buff);
				return NULL;
			}
		}
		if (buff[n] == '\n')
		{
			buff[n + 1] = '\0';
			return buff;
		}
		n += i;
	}
}

int main()
{
	int fd;
	char *str;

	fd = open("./test.txt", O_RDONLY);
	if (fd == -1)
		return -1;
	while (1)
	{
		str = get_next_line(fd);
		if (str == NULL)
			return -1;
		printf("%s", str);
		free(str);
	}
	return 0;
}