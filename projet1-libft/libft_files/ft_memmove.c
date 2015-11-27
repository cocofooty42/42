/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:40:59 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/25 16:40:35 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char		*src2;
	char			*temp;

	if (!dst || !src)
		return(NULL);
	src2 = src;
	temp = malloc(len * sizeof(*src));
	if (!temp)
		return(NULL);
	ft_memcpy(temp, src2, len);
	ft_memcpy(dst, temp, len);
	return(dst);
}
