/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:20:16 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/13 14:18:46 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int			i;
	int			sign;
	long int	value;

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
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (((int)value) * sign);
}
