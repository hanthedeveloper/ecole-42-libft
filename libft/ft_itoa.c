/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:45:32 by haincel           #+#    #+#             */
/*   Updated: 2026/08/14 13:45:32 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i = 1;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ar;
	int			i;
	int			len;
	long		nb;

	len = intlen(n);
	ar = (char *)malloc(sizeof(char) * (len + 1));
	if (!ar)
		return (NULL);
	nb = n;
	i = len - 1;
	ar[len] = '\0';
	if (nb < 0)
	{
		ar[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		ar[0] = '0';
	while (nb > 0)
	{
		ar[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ar);
}
