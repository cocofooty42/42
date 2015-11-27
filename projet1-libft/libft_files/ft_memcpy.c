/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:54:01 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 12:00:19 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*ch1;
	char		*ch2;

	i = 0;
	ch1 = src;
	ch2 = dest;
	while (i < n)
	{
		ch2[i] = ch1[i];
		i++;
	}
	return (dest);
}
