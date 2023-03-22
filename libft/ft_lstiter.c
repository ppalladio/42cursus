#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void*))
{
	while(f && lst)
	{
		while(lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}