/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:54:01 by cgirard           #+#    #+#             */
/*   Updated: 2016/01/11 15:23:36 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_strtrim(char const *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\n')
	{
		if (s[i] == ' ' && s[i] == "\n" && s[i] == "\t" && s[i] == ",")
			i++;
		else
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dest);
}
