/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:34:51 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/02 15:30:29 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char now;

	now = 'a';
	while (now <= 'z')
	{
		write(STDOUT_FILENO, &now, 1);
		now++;
	}
}
