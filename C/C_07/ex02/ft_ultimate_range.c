/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:35:46 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/21 11:12:39 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
	{
		return (-1);
	}
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	range[0] = tab;
	return (max - min);
}
