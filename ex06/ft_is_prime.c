/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:22:36 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/14 19:44:04 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int divisible;

	i = 1;
	divisible = 0;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (i <= nb)
	{
		if ((nb % i) == 0)
			divisible++;
		i++;
	}
	if (divisible == 2)
		return (1);
	else
		return (0);
}
