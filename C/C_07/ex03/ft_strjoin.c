/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:01:39 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/21 11:20:59 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(char *sep, char **strs, int size)
{
	int	i;
	int	c;
	int	j;
	int	t;

	c = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (strs[j][i])
		{
			i++;
			c++;
		}
		i = 0;
		j++;
	}
	t = 0;
	while (sep[t])
		t++;
	return (c + (size - 1) * t);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		t;
	int		p;

	i = -1;
	t = -1;
	dest = 0;
	if (size == 0)
		return (dest);
	if (!(dest = malloc(sizeof(char) * (ft_length(sep, strs, size)) + 1)))
		return (dest);
	while (strs[++i])
	{
		p = -1;
		while (strs[i][++p])
			dest[++t] = strs[i][p];
		if (i >= size - 1)
			break ;
		p = -1;
		while (sep[++p])
			dest[++t] = sep[p];
	}
	dest[t + 1] = '\0';
	return (dest);
}
