/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:28:52 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/02 23:01:53 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** X é largura Y é altura!!!!!!
*/

void	rush(int x, int y)
{
	int x_max; /* Máximo de largura */
	int y_max; /* Máximo de altura*/

	x_max = x; 
	y_max = y;
	while(y > 0) // enquanto tiver altura pra ir, faz isso
	{
		while(x >= 0) //enquanto tiver largura pra ir, faz isso
		{
			if(x == x_max || y == 1) 
			{
				ft_putchar('\\'); 
			}
			else if(x == 1 || y == y_max)
			{
				ft_putchar('/');
			}
			
		}
	}
}
