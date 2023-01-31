
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ch = (unsigned char*)s;
	unsigned char *uc = NULL;
	while(n && !s)
	{
		if (*ch != (unsigned char) c)
			ch++;
		else
			uc = ch;
			break;
		n--;
	}
	return (uc);
}

// int main(int argc, char ** argv)                                                
// {                                                                               
//   char * result;                                                                
                                                                                
//   if ( argc != 2 )                                                              
//     printf( "Usage: %s string\n", argv[0] );                                    
//   else                                                                          
//   {                                                                             
//     if ((result = (char *)ft_memchr( argv[1], 'x', strlen(argv[1])) ) != NULL)     
//       printf( "The string starting with x is %s\n", result );                   
//     else                                                                        
//       printf( "The letter x cannot be found in the string\n" );                 
//   }                                                                             
// }           