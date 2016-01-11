/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:38:33 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 15:22:12 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (size + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (i < size)
			dest[i] = '\0';
		dest[i + 1] = '\0';
		return (dest);
	}
}
