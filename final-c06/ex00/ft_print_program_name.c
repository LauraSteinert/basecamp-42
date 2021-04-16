/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:58:34 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/14 23:28:31 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

int		main(int args_c, char *argv[])
{
	int i;

	i = 0;
	if (args_c != 1)
		return (0);
	while (argv[0][i])
	{
		ft_putstr(argv[0][i]);
		i++;
	}
	ft_putstr('\n');
	return (0);
}
