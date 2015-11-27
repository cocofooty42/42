/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 22:50:57 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/24 12:49:20 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ia(char c)
{
	if (47 < c && c < 58)
		return (1);
	else if (64 < c && c < 91)
		return (2);
	else if (96 < c && c < 123)
		return (3);
	return (0);
}

char	*ft_capitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 2;
	if (ia(str[0]) == 3 && str[1] > 0)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ia(str[i - 1]) < 1 && ia(str[i]) == 3 && ia(str[i + 1]) > 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
