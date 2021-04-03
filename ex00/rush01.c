/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:28:52 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/03 00:31:25 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** X é largura Y é altura!!!!!!
*/

void	ft_putchar(char c);

int is_line(int x, int y)
{
	if((x == 1 && y != 1) || (x != 1 && y == 1))
		return (1);
	else 
		return (0);
}

char select_caractere(int x, int y, int x_max, int y_max)
{
	if(is_line(x_max, y_max)) 
	{
		if (x == x_max && y == y_max) 
			return '/';
		else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
			return '\\';
		else
			return '*';
	}
	else
	{
		if (((x == x_max && y == y_max) || (x == 1 && y == 1)) && !is_line(x, y)) 
			return '/';
		else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
			return '\\';
		else if ((x == x_max || x == 1) || (y == y_max || y == 1))
			return '*';
		else
			return ' ';
	}
}

void print(int x, int y, int x_max, int y_max)
{
	while(y > 0) 
	{
		while(x >= 0)
		{
			if(x != 0)
				ft_putchar(select_caractere(x, y, x_max, y_max));
			else
				ft_putchar('\n');
			x--;
		}
		x = x_max;
		y--;
	}
}

void	rush(int x, int y)
{
	print(x, y, x, y);
}
