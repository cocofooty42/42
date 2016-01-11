/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:25:43 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 15:22:37 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (len - (int)start));
	if (dest == NULL)
		return (NULL);
	else
	{
		i = start;
		while (i < len)
		{
			dest[i] = (char)s[i];
			i++;
		}
		return (dest);
	}
}
