#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	if (lst && f && del)
	{
		while (lst)
		{
			f(new_list = lst->content);
			del(lst = lst->content);
			lst = lst->next;
		}
	}
}