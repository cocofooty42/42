/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:54:01 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/12 14:06:49 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(s));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\n')
	{
		if (s[i] == ' ' && s[i] == '\n' && s[i] == '\t' && s[i] == ',')
			i++;
		else
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dest);
}
