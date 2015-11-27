/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 16:11:02 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/24 11:37:56 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int u;
	int t_i;

	i = 0;
	while (str[i] != '\0')
	{
		t_i = i;
		if (to_find[0] == str[i])
		{
			u = 0;
			while (to_find[u] == str[i])
			{
				i++;
				u++;
				if (to_find[u] == '\0')
					return (&str[i - u]);
			}
			i++;
		}
		i = t_i;
	}
	return (0);
}
