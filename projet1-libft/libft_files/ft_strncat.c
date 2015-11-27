/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:30:20 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 16:46:44 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		size_dest;
	size_t	i;
	char	*s1b;
	char	*s2b;

	s1b = s1;
	s2b = (char*)s2;
	i = 0;
	size_dest = ft_strlen(s1b);
	while(i < n && s2b[i] != '\0')
	{
		s2b[size_dest + 1] = s1b[i];
		i++;
		size_dest++;
	}
	s2b[size_dest + 1] = '\0';
	return((char*)s2);
}
