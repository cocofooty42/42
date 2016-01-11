/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:32:17 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 11:29:57 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlat(char *dst, char *src, size_t size)
{
	int		i;
	char	*dst2;
	char	*src2;

	dst2 = dst;
	src2 = src;
	i = 0;
	size++;
	while (src[i] != '\0')
	{
		dst2[size + i] = src2[i];
		i++;
	}
	dst2[size + i + 1] = '\0';
	return (sizeof(dst));
}
