/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:24:47 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 14:03:42 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ar;
	unsigned int	i;

	ar = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ar)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ar[i] = f(i, s[i]);
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
