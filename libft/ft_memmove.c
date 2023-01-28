
#include "libft.h"
void *ft_memmove(void* dst, const void* src, size_t len)  
{  
    char *d = (char *)dst;  
    const char *s =( const char*)src;  
    //allocate memory for tmp array  
    char *temp  = (char *)malloc(sizeof(char) * len);  
    if(!temp)  
    {  
        return NULL;  
    }  
    else  
    {  
        size_t i = 0;  
        // Begin with copying the contents  
        //from source to the temp  
		while(i < len ) 
		{
			*(temp + i) = *(s+i);
			++i;
		}
		i=0;
		while(i < len )
		{
			*(d + i) = *(temp + i);
            ++i;
		}
          
        //Use the copied content in temp to move the contents in the destn    
        free(temp); //free the resources allocated to the temp  
    }  
    return dst;  
}

// int main () {
// 	char dest[] = "oldng";
// const char src[]  = "neffwinga";
// char des[] = "oldng";
// const char sr[]  = "neffwinga";
// size_t i =5;
// printf("Before memmove dest = %s, src = %s\n", dest, src);
// printf("address of ft_memmove%p\n",memmove(dest, src, i));
// printf("After ft_memmove dest = %s, src = %s\n", dest, src);
// printf("Before memmove des = %s, sr = %s\n", des, sr);
// printf("address of memmove%p\n",memmove(des, sr, i));
// printf("After memmove des = %s, sr = %s\n", des, sr);

//    return(0);
// }