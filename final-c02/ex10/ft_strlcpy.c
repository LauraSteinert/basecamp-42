/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:26:59 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/07 20:16:58 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	size = size - 1;
	if(size >= 0){
		while (i < size && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	i = 0;
	while(src[i] != '\0')
		i++;
	return (i);
}
