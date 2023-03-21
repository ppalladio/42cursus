// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *new_lst = (t_list *)malloc(sizeof(t_list));
	new_lst->content = new;
	new_lst->next = (*lst);
	*lst = new_lst;

}