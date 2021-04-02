/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:28:52 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/02 23:56:36 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** X é largura Y é altura!!!!!!
*/

// [5,3]

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_max; /* Máximo de largura */
	int y_max; /* Máximo de altura*/

	x_max = x;
	y_max = y;

	//if((x_max == 1 && y_max != 1) || (x_max != 1 && y_max == 1))

	while(y > 0) // enquanto tiver altura pra ir, faz isso
	{
		while(x >= 0) //enquanto tiver largura pra ir, faz isso
		{
			if(x == 0)
			{
				ft_putchar('\n');
			}
			else if((x == x_max && y == y_max) || (x == 1 && y == 1))
			{
				ft_putchar('/');
			}
			else if((x == 1 && y == y_max) || (x == x_max && y == 1)) 
			{
				ft_putchar('\\'); 
			}
			else if ((x == x_max || x == 1) || (y == y_max || y == 1))
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
		x--;
		}
		x = x_max;
		y--;
	}
}
