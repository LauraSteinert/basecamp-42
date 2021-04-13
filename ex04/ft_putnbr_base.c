/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:44:28 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/13 23:24:22 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (-1);
		j = i + 1;
		if (base[i] == base[j])
			return (-1);
		j++;
		i++;
	}
	if (i < 2)
		return (-1);
	return (i);
}

static char		*ft_string(int nbr, int size, char *base, int digits)
{
	static char nb[32];

	if (nbr > 0)
		nbr = nbr * -1;
	while (digits--)
	{
		nb[digits] = base[(nbr % size) * -1];
		nbr /= size;
	}
	return (nb);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	*nb;
	int		digits;
	int		counter;

	size = ft_check_base(base);
	if (size < 0)
		return ;
	digits = 1;
	counter = nbr;
	while (counter /= size)
		digits++;
	nb = ft_string(nbr, size, base, digits);
	if (nbr < 0)
		write(1, "-", 1);
	write(1, nb, digits);
}
