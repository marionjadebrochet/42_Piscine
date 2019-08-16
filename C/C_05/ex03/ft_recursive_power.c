/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:43:35 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/11 13:46:06 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 0;
	if (power == 0)
		return (1);
	if (power <= 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
