/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:44:45 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/03 00:53:16 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		is_line(int x, int y);
void	rush(int x, int y);
void	print(int x, int y, int x_max, int y_max);
char	select_caractere(int x, int y, int x_max, int y_max);

#endif
