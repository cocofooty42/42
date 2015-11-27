/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 09:02:28 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 15:15:25 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	str = (char*)malloc(sizeof(*str) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}
