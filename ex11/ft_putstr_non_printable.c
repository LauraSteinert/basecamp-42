/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:21:10 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/07 20:13:12 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(int c)
{
	char *hex;
	char hexa[2];

	hex = "0123456789abcdef";
	hexa[1] = hex[c % 16];
	c = c / 16;
	hexa[0] = hex[c % 16];
	write(1, &hexa[0], 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] >= 127)
		{
			ft_write('\\');
			ft_print_hexa(str[i]);
		}
		else
		{
			ft_write(str[i]);
		}
		i++;
	}
}
