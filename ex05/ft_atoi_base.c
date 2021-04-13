/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:48:07 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/13 23:26:26 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static char		*ft_putnbr_base(int nbr, char *base)
{
	char	*nb;
	int		size;
	int		digits;
	int		counter;

	size = ft_check_base(base);
	if (size < 0)
		return (0);
	digits = 1;
	counter = nbr;
	while (counter /= size)
		digits++;
	nb = ft_string(nbr, size, base, digits);
	return (nb);
}

int				ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	long int	value;
	char		*nb;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == ' ' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i])
	{
		nb = ft_putnbr_base(str[i], base);
		i++;
	}
	i = 0;
	while (nb[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (((int)value) * sign);
}
