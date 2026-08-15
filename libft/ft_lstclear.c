#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_lst;

	if (!lst)
		return ;
	while (*lst)
	{
		temp_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_lst;
	}
	*lst = NULL;
}