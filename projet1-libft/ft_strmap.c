/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:52:03 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/27 15:01:01 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char*))
{
	int		size_s;
	int		i;
	char	*dst;

	size_s = ft_strlen(s);
	dst = malloc(sizeof(char * size_s));
	while (s[i] != '\0')
	{
		dst[i] = f(s);
		s++;
		i++;
	}
	return (dst);
}
