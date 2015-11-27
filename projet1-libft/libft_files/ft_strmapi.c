/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:01:34 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/27 15:11:09 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s char (*f)(unsigned int, char))
{
	int				size_s;
	unsigned int	i;
	char			*dst;

	size_s = ft_strlen(s);
	dst = malloc(sizeof(char * size_s));
	while (s[i] != '\0')
	{
		dst[i] = f(i, s);
		s++;
		i++;
	}
	return (dst);
}
