/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 21:16:56 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/24 12:52:31 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	rot42(char c)
{
	int		j;
	char	start;

	start = c;
	j = 1;
	if (start == ' ' || start >= '0')
		return (c);
	while (j <= 16)
	{
		if (start == 'z' || start == 'Z')
		{
			if (start == 'z')
				start = 'a';
			else
				start = 'A';
			j++;
		}
		start++;
		j++;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = rot42(str[i]);
		i++;
	}
	return (str);
}
