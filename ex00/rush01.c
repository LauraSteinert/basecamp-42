/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:28:52 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/03 22:57:18 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_is_line(int x, int y);
void	ft_print(int x, int y, int x_max, int y_max);
char	ft_select_caractere(int x, int y, int x_max, int y_max);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		ft_print(x, y, x, y);
}

int		ft_is_line(int x, int y)
{
	if ((x == 1 && y != 1) || (x != 1 && y == 1))
		return (1);
	else
		return (0);
}

void	ft_print(int x, int y, int x_max, int y_max)
{
	while (y > 0)
	{
		while (x >= 0)
		{
			if (x != 0)
				ft_putchar(ft_select_caractere(x, y, x_max, y_max));
			else
				ft_putchar('\n');
			x--;
		}
		x = x_max;
		y--;
	}
}

char	ft_select_caractere(int x, int y, int x_max, int y_max)
{
	if (ft_is_line(x_max, y_max))
	{
		if (x == x_max && y == y_max)
			return ('/');
		else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
			return ('\\');
		else
			return ('*');
	}
	else
	{
		if ((x == x_max && y == y_max) || (x == 1 && y == 1))
			return ('/');
		else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
			return ('\\');
		else if ((x == x_max || x == 1) || (y == y_max || y == 1))
			return ('*');
		else
			return (' ');
	}
}
