/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:50:19 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/12 13:50:54 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		signe;
	int		tmp;
	int		nb;
	char	*res;

	nb = 2;
	if (n < 0)
		signe = -1;
	tmp = n;
	while (tmp != 0)
	{
		nb++;
		tmp /= 10;
	}
	res = malloc(sizeof(char) * nb);
	if (signe == -1)
		res[0] = '-';
	nb--;
	while (n != 0)
	{
		res[nb--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
