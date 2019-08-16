/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:38:27 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/06 17:28:42 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	writeme(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	comparateur(char a, char b, char c, char d)
{
	if (a <= c && b < d)
	{
		writeme(a, b, c, d);
	}
}

void	condition(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					comparateur(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	condition(a, b, c, d);
}

int main()
{
	ft_print_comb2();
	return (0);
}
