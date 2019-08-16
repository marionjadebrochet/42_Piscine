/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:20:46 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/11 13:43:06 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
