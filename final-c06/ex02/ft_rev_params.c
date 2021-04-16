/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:29:09 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/15 13:02:40 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int args_c, char *argv[])
{
	int i;

	i = 1;
	if (args_c < 1)
		return (0);
	i = args_c - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
