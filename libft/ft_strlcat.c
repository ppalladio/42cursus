
#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);
	size_t n = size - dlen - 1;

	if (n == 0)
	{
		return dlen + slen;
	}

	size_t i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';

	return dlen + slen;
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
