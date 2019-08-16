/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrochet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:03:53 by mbrochet          #+#    #+#             */
/*   Updated: 2019/08/04 18:19:52 by mbrochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

void	ft_comp_char(char *str, int i)
{
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	else if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strupcase(str);
	while (str[i])
	{
		i++;
		while (str[i])
		{
			ft_comp_char(str, i);
			i++;
		}
	}
	return (str);
}
