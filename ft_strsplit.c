/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:08:04 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/27 13:49:08 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**strsplit(char const *s, char c)
{
	int centre;
	unsigned int i;

	i = 0;
	centre = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			centre++;
		while (s[i] && (s[i] != '\0')
				i++;
	}
	return (centre);
}
