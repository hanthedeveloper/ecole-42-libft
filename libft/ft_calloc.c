/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:57:31 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 13:44:14 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ar;

	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (nmemb > ((size_t) -1) / size)
		return (NULL);
	ar = (unsigned char *)malloc(nmemb * size);
	if (!ar)
		return (NULL);
	ft_bzero(ar, (nmemb * size));
	return (ar);
}
