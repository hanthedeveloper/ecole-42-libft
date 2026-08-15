/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 12:04:08 by haincel           #+#    #+#             */
/*   Updated: 2026/08/15 12:04:12 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
				i++;
			word++;
		}
	}
	return (word);
}

static char	**ft_free(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	*word_to_array(char const *start, char const *end)
{
	char	*wa;
	int		i;

	wa = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!wa)
		return (NULL);
	i = 0;
	while (start < end)
	{
		wa[(i)] = *start;
		i++;
		start++;
	}
	wa[i] = '\0';
	return (wa);
}

char	**ft_split(char const *s, char c)
{
	char			**ar;
	char const		*start;
	int				i;

	ar = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!ar)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			ar[i] = word_to_array(start, s);
			if (!ar[i])
				return (ft_free(ar));
			i++;
		}
	}
	ar[i] = NULL;
	return (ar);
}
