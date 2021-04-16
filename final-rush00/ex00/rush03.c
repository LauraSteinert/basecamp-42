/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:53:38 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/04 22:48:32 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_verify(int col_y, int lin_x, const int x, const int y);

void	rush(const int x, const int y)
{
	int col_y;
	int lin_x;

	if (x > 0 && y > 0)
	{
		col_y = 1;
		while (col_y <= y)
		{
			lin_x = 1;
			while (lin_x <= x)
			{
				ft_verify(col_y, lin_x, x, y);
				lin_x = lin_x + 1;
			}
			ft_putchar('\n');
			col_y = col_y + 1;
		}
	}
}

void	ft_verify(int col_y, int lin_x, const int x, const int y)
{
	if ((lin_x == 1 && col_y == 1) || (lin_x == 1 && col_y == y))
		ft_putchar('A');
	else if ((lin_x == x && col_y == 1) || (lin_x == x && col_y == y))
		ft_putchar('C');
	else if ((col_y < y && col_y > 1) && (lin_x < x && lin_x > 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
}
