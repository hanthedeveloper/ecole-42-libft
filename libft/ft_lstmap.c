/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:01:22 by haincel           #+#    #+#             */
/*   Updated: 2026/08/15 12:23:56 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fail(t_list **lst, void *ncont, void (*del)(void *))
{
	if (ncont)
		del(ncont);
	ft_lstclear(lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nnode;
	void	*ncont;

	if (!f || !lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		ncont = f(lst->content);
		if (!ncont)
		{
			fail(&head, ncont, del);
			return (NULL);
		}
		nnode = ft_lstnew(ncont);
		if (!nnode)
		{
			fail(&head, ncont, del);
			return (NULL);
		}
		ft_lstadd_back(&head, nnode);
		lst = lst->next;
	}
	return (head);
}
