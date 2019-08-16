/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:42:35 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/14 10:51:27 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_repetitions(char a, char *base)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (base[i])
	{
		if (base[i] == a)
			k++;
		if (k > 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_base(unsigned int num, char *base, unsigned int size_base)
{
	if (num > size_base - 1)
	{
		ft_print_base(num / size_base, base, size_base);
		ft_print_base(num % size_base, base, size_base);
	}
	else
		ft_putchar(base[num]);
}

int	check_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if ((base[i] > 32 && base[i] < 127) &&
				(base[i] > 47 || base[i] < 42) &&
				(base[i] != 37) &&
				(check_repetitions(base[i], base) == 0))
		{
			if (base[i + 1] == '\0' && i >= 1)
				return (1);
		}
		else
			return (0);
		i++;
	}
	return (0);
}

