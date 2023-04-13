#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *end;

	if (&lst == NULL)
		*lst = new;
	else
	{
		end = ft_lstlast(*lst);
		end->next = new;
	}

}