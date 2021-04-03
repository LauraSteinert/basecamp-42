/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:53:18 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/03 22:50:27 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_is_line(int x, int y);
void	ft_print(int x, int y, int x_max, int y_max);
char	ft_select_caractere(int x, int y, int x_max, int y_max);

int		is_line(int x, int y)
{
	if ((x != 1 && y == 1))
		return (1);
	else
		return (0);
}

void	rush(int x, int y)
{
	print(x, y, x, y);
}

void	print(int x, int y, int x_max, int y_max)
{
	while (y > 0)
	{
		while (x >= 0)
		{
			if (x != 0)
				ft_putchar(select_caractere(x, y, x_max, y_max));
			else
				ft_putchar('\n');
			x--;
		}
		x = x_max;
		y--;
	}
}

char	select_caractere(int x, int y, int x_max, int y_max)
{
	if (is_line(x_max, y_max))
	{
		if (x == x_max && y == y_max)
			return ('o');
		else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
			return ('o');
		else
			return ('-');
	}
	else
	{
		if ((x == x_max && y == y_max) || (x == x_max && y == 1))
			return ('o');
		else if ((y == y_max && x == 1) || (y == 1 && x == 1))
			return ('o');
		else if ((x == x_max) || (x == 1) || (x_max == 1 && y_max != 1))
			return ('|');
		else if (is_line(x, y) && y_max != 1)
			return ('-');
		else if (x != 1 && y == y_max && y_max != 1)
			return ('-');
		else
			return (' ');
	}
}
