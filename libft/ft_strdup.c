/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:41:34 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 14:01:11 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ar;
	size_t	i;

	i = 0;
	ar = (char *)malloc(ft_strlen(s) + 1);
	if (!ar)
		return (NULL);
	while (s[i])
	{
		ar[i] = s[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
