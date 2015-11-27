/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:12:46 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 11:56:22 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1b;
	const char	*s2b;

	s1b = s1;
	s2b = s2;
	return(ft_strncmp((char*)s1b, (char*)s2b, n));
}
