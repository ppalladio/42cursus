
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_s;
	size_t len_d;

	i = 0;
	len_s = 0;
	len_d = 0;
	while (src[len_s])
		len_s++;
	while (dst[len_d])
		len_d++;
	if (size == 0 || !dst)
		return (len_s);
	else
	{
		while (i < (size - len_s - 1) && i < len_s)
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
	}
	if (len_d < size)
		return (len_d + len_s);
	else
		return (size + len_s);
}

// int main()
// {
// 	char dst[] = "This is ";
// 	char src[] = "a potentially long string";
// 	int r = 0;

// 	printf("%zu\n", ft_strlcat(dst, src, r));
	// printf("%s\n", dst);
	// puts(buffer);
	// printf("Value returned: %d\n", r);
	// if (r > size)
	// 	puts("String truncated");
	// else
	// 	puts("String was fully copied");

	// return (0);
// }

// This is a poten
// Value returned: 33
// String truncated

// If you modify Line 9 to change the size variable (and buffer size) to 64, the buffer is now large enough to accommodate the concatenated strings. Here’s the updated output:

// This is a potentially long string
// Value returned: 33
// String was fully copied
