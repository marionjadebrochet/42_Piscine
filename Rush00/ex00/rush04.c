/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesornay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:17:46 by jesornay          #+#    #+#             */
/*   Updated: 2019/08/03 16:55:02 by jesornay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int largeur)
{
	int i;

	i = 0;
	while (i < largeur)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == largeur - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i = i + 1;
	}
	ft_putchar('\n');
}

void	ft_last_line(int largeur)
{
	int i;

	i = 0;
	while (i < largeur)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == largeur - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i = i + 1;
	}
	ft_putchar('\n');
}

void	ft_between(int largeur)
{
	int i;

	i = 0;
	while (i < largeur)
	{
		if (i == 0 || i == largeur - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i = i + 1;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_first_line(x);
			else if (i == y)
				ft_last_line(x);
			else
				ft_between(x);
			i = i + 1;
		}
	}
}
