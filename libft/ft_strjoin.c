/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:59:26 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 14:01:38 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ar;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ar = (char *)malloc((s1len + s2len + 1));
	if (!ar)
		return (NULL);
	ft_memcpy(&ar[0], s1, s1len);
	ft_memcpy(&ar[s1len], s2, s2len);
	ar [s1len + s2len] = '\0';
	return (ar);
}
