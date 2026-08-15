/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:01:22 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 15:01:58 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nnode;
	char	*ncont;

	if (!f || !lst)
		return NULL;
	head = NULL;
	while (lst)
	{
		ncont = f(lst->content);
		if (!ncont)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		nnode = ft_lstnew(ncont);
		if (!nnode || !nnode->content)
		{
			del(nnode);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, nnode);
		lst = lst->next;
	}
	return (head);
}