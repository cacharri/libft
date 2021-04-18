/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:01:20 by ialvarez          #+#    #+#             */
/*   Updated: 2021/04/18 21:13:13 by ialvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int xu;
	int as;
	char	**dst;
	char	const *dir;

	if (!s)
	  	return (NULL);
	dir = &s[0];
	i = 0;
	while (*dir)
	{
	  	if (*dir != c && *dir - 1 == c)
			i++;
		dir++;
	}
	dst = (char **)malloc(i + 1 * sizeof(char *));
	i = 0;
	while (*dir)
	{
		if (*dir != c)
			i++;
		if ((*dir == c || *dir + 1 == '\0') && *dir != c)
		{
			*dst = (char *)malloc(i + 1 * sizeof(char));
			dst++;
			i = 0;
		}
		dir++;
	}
	(*dst) = NULL;
	i = 0;
	as = 0;
	while (*dir)
	{
		xu = 0;
		while (*dir != c)
		{
			dst[i][as] = *dir;
			xu = 1;
			as++;
			dir++;
		}
		if (*dir == c && xu == 1)
		{
	  		dst[i][as] = '\0';
			as = 0;
			i++;
			dir++;
		}
	}
	return (dst);
	free(dst);
}
