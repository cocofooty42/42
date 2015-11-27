/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 12:31:50 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 16:49:57 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 1;
	while (i < n || src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
