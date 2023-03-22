#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

  new_node = malloc(sizeof(t_list));
    if (new_node == NULL)
        return (NULL);
    new_node-> content = content;
    new_node-> next = NULL;
	    return (new_node);
	}
	
// 	void prin(t_list *lst)
// 	{
// 	  while(lst)
// 	  {printf("%s\n",lst->content);
// 	  lst=lst->next;
// 	  }}
	  
//   int main()
//   {
	
// 	    prin(ft_lstnew("addd"));
//     return(0);
// 	  }