/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:52:37 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/15 00:42:12 by lsteiner         ###   ########.fr       */
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
	if (args_c == 1)
		return (0);
	while (i < args_c)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
