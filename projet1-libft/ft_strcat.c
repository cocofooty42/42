/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 17:57:57 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 16:46:11 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (dest[i] != '\0')
		if (dest[i] == '\0')
		{
			dest[i] = src[j];
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
				i++;
			}
			dest[i + 1] = '\0';
		}
	i++;
	return (dest);
}
