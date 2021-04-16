/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:44:51 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/14 22:51:48 by lsteiner         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (i);
}
