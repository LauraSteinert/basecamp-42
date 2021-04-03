/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushT.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:53:38 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/03 22:39:30 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_verify(int col_x, int lin_y, int x, int y)
{
	if ((col_x == y || col_x == 1) && (col_x == y))
	{
		ft_putchar('A');
	}
	else if ((lin_y == 1 || col_x == 1) && (lin_y == x))
	{
		ft_putchar('C');
	}
	else if ((col_x < y && col_x > 1) && (lin_y < x && lin_y > 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int col_x;
	int lin_y;

	col_x = 1;
	while (col_x <= y)
	{
		lin_y = 1;
		while (lin_y <= x)
		{
			ft_verify(col_x, lin_y, x, y);
			lin_y = lin_y + 1;
		}
		ft_putchar('\n');
		col_x = col_x + 1;
	}
}
