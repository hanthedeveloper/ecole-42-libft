/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 12:02:56 by haincel           #+#    #+#             */
/*   Updated: 2026/08/15 12:03:02 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
