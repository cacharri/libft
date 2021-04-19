/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:50:28 by ialvarez          #+#    #+#             */
/*   Updated: 2021/04/19 20:58:08 by ialvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int n)
{
	int c;

	c = 0;
	if (n < 0)
	{
		n = -n;
		c++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int	c;
	int	p;
	char			*numstr;

	c = 1;
	p = 0;
	numstr = (char *)malloc(ft_size(n) + 1 * sizeof(char));
	if (!numstr)
		return (NULL);
	while (n / c >= 10)
		c = c * 10;
	while (c > 1)
	{
		if (n > 0)
		{
			numstr[p] = ((n % (c * 10)) / c) + '0';
			p++;
		}
		c = c / 10;
	}
	numstr[p] = (n % 10) + '0';
	p++;
	numstr[p] = '\0';
	return (numstr);
}
