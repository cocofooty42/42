/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:01:52 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 11:58:52 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*s1b;
	const char	*s2b;
	size_t		i;
	int			i_t;

	s1b = s1;
	s2b = s2;
	i = 0;
	i_t = 0;
	while (i < n && s1b[i] != '\0')
	{
		if (s1b[i] == s2b[i_t])
		{
			i_t = i;
			while(s1b[i] == s2b[i - i_t] && s2b[i - i_t] != '\0')
				i++;
			if (s2b[i - i_t] == '\0')
				return ( (char*)s1 + i_t);
			i = i_t;
		}
		i++;
	}
	return(NULL);
}
