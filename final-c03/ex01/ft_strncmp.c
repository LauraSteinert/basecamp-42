/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:21:15 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/11 14:10:30 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int valor;

	i = 0;
	valor = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		{
			i++;
		}
		valor = (-(s2[i] - s1[i]));
	}
	return (valor);
}
