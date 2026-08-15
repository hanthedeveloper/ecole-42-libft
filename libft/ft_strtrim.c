/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:24:30 by haincel           #+#    #+#             */
/*   Updated: 2026/08/15 12:04:26 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ar;
	int		first;
	int		last;
	int		i;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] && check(s1[first], set))
		first++;
	while (last >= first && check(s1[last], set))
		last--;
	ar = (char *)malloc((last - first + 2) * sizeof(char));
	if (!ar)
		return (NULL);
	i = 0;
	while (first <= last)
		ar[i++] = s1[first++];
	ar[i] = '\0';
	return (ar);
}
