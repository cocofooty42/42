/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 19:11:21 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 11:11:00 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		s;
	int		n;

	s = 1;
	n = 0;
	(*str++ == 45) ? s = -1 : *str--;
	(*str++ == 43) ? s = 1 : *str--;
	while (47 < *str && *str < 58)
		n = n * 10 + *str++ - 48;
	return (n * s);
}
