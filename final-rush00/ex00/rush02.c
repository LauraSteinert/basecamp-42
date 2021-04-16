/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:53:38 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/04 23:20:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_verify(int lin_x, int col_y, const int x, const int y);

void	rush(const int x, const int y)
{
	int col_y;
	int lin_x;

	if (x > 0 && y > 0)
	{
		lin_x = 1;
		while (lin_x <= y)
		{
			col_y = 1;
			while (col_y <= x)
			{
				ft_verify(lin_x, col_y, x, y);
				col_y = col_y + 1;
			}
			ft_putchar('\n');
			lin_x = lin_x + 1;
		}
	}
}

void	ft_verify(int lin_x, int col_y, const int x, const int y)
{
	if ((lin_x == y || lin_x == 1) && (col_y == 1))
		ft_putchar('A');
	else if ((lin_x == y || lin_x == 1) && (col_y == x))
		ft_putchar('C');
	else if ((lin_x < y && lin_x > 1) && (col_y < x && col_y > 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
}
