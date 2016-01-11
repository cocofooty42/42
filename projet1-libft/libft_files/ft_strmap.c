/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:52:03 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 15:33:29 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char*))
{
	int		size;
	int		i;
	char	*dst;

	size = ft_strlen(s);
	dst = malloc(sizeof(char) * size);
	i = 0;
	while (s[i] != '\0')
	{
		dst[i] = f((char)s[i]);
		i++;
	}
	return (dst);
}
