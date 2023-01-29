
#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char *s1 = str1;
	const char *s2 = str2;
	size_t i;
	unsigned char c;

	i=0;
	if (!s1 || !s2)
		return (0);
	else if (n == 0)
		return (0);
	else
	{
		while(s1[i] && i < n)
		{
			c += s1[i] -s2[i];
			i++;
		}
		return (c);
	}
}


int main () {
   char str1[] = "ABCDEFd" ;
   char str2[]= "ABCDEF";
   size_t i;

   i=7;

   printf("%hhu\n",ft_memcmp(str1, str2, i));

   if(ft_memcmp(str1, str2, i) > 0) {
      printf("str2 is less than str1\n");
   } else if(ft_memcmp(str1, str2, i) < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }
// original:
   char Nstr1[]="ABCDEFd";
   char Nstr2[15]="ABCDEF";
   int ret;
	int j = 7;


	memcmp(Nstr1, Nstr2, j-1);

   if(	memcmp(Nstr1, Nstr2, j-1) > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   

   return(0);
}