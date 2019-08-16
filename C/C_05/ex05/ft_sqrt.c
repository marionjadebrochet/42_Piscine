/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:28:18 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/11 18:36:10 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}