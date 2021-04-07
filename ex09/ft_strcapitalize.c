/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:24:04 by lsteiner          #+#    #+#             */
/*   Updated: 2021/04/06 17:26:15 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lower_case(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int start;

	i = 0;
	start = 1;
	ft_lower_case(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (start == 1)
			{
				str[i] = str[i] - 32;
				start = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			start = 0;
		else
			start = 1;
		i++;
	}
	return (str);
}
