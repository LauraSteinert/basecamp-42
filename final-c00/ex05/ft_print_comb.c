/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:22:41 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/04 02:21:42 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_write(char use)
{
	write(1, &use, 1);
}

void	ft_print_in_order(int first, int second, int third)
{
	ft_char_write(first);
	ft_char_write(second);
	ft_char_write(third);
	if (first != 7 && second != 8 && third != 9)
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = '0';
	second = '1';
	third = '2';
	while (first <= '7')
	{
		while (second <= '8')
		{
			while (third <= '9')
			{
				ft_print_in_order(first, second, third);
				third++;
			}
			third = ++second + 1;
		}
		second = ++first;
	}
}
