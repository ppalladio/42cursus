
#include "libft.h"
#include <string.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_s;
	size_t len_d;

	i = 0;
	len_s = 0;
	len_d = 0;

	while (dst[len_d])
		len_d++;
	while (src[len_s])
		len_s++;
	if (size == 0)
		return (len_d + len_s);
	if (size <= len_s)
	{
		while (len_s <= size)
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[-1] = '\0';
		return (len_d + size - 1);
	}
	else
		return (size + len_d - 1);
}

// int main()
// {
// 	char dst[] = "1223";
// 	char src[] = "ab2344";
// 	int r = 2;
// 	printf("%lu\n", ft_strlcat(dst, src, r));
// 	// printf("%s\n", dst);
// 	// char d[] = "12";
// 	// char s[] = "ab";
// 	// printf("%u\n", strlcat(d,s,r));
// 	// printf("%s\n", d);

// 	return (0);
// }

// // This is a poten
// // Value returned: 33
// // String truncated

// // If you modify Line 9 to change the size variable (and buffer size) to 64, the buffer is now large enough to accommodate the concatenated strings. Here’s the updated output:

// // This is a potentially long string
// // Value returned: 33
// // String was fully copied
