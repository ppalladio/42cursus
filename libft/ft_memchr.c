
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ch = s;
	size_t i;
	unsigned char uc;
	i = 0;
	uc = (unsigned char)c;
	while(i < n)
	{
		if (ch[i] == c)
			return (ch[i]);
		else
			return 0;
		i++;
	}
}

int main(int argc, char ** argv)                                                
{                                                                               
  char * result;                                                                
                                                                                
  if ( argc != 2 )                                                              
    printf( "Usage: %s string\n", argv[0] );                                    
  else                                                                          
  {                                                                             
    if ((result = (char *)ft_memchr( argv[1], 'x', strlen(argv[1])) ) != NULL)     
      printf( "The string starting with x is %s\n", result );                   
    else                                                                        
      printf( "The letter x cannot be found in the string\n" );                 
  }                                                                             
}           