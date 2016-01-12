/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 19:11:21 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/12 14:12:43 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	j = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (s1[i++] != '\0')
		{
			dest[j] = s1[i];
			j++;
		}
		i = 0;
		while (s2[i++] != '\0')
		{
			dest[j] = s2[i];
			j++;
		}
		dest[i + 1] = '\0';
		return (dest);
	}
}
