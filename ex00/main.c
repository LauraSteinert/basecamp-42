/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:25:23 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/03 00:46:56 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush01.h"

int	main(int c_args, char **s_args)
{
	int x;
	int y;

	x = s_args[c_args - 2][0] - '0';
	y = s_args[c_args - 1][0] - '0';
	rush(x, y);
	return (0);
}
