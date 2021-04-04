/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:53:18 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/04 15:37:54 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_is_line(int x, int y);
void	ft_print(int x, int y, int x_max, int y_max);
char	ft_select_caractere(int x, int y, int x_max, int y_max);

void	rush(int x, int y)
{
	ft_print(x, y, x, y);
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
	if ((x == x_max || x == 1) && (y == y_max || y == 1))
		return ('o');
	else if ((x == x_max || x == 1) &&  (y < y_max && y > 1))
		return ('|');
	else if ((x < x_max && x > 1) && (y == y_max || y == 1))
		return ('-');
	else
		return (' ');
}
