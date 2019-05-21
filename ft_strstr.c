/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:35:05 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/21 10:08:59 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[x] != '\0')
	{
		y = 0;
		if (s2[y] != '\0' && s1[x + y] == s2[y])
			y++;
		if (s2[y] == '\0')
			return ((char *s)s1 + x);
		x++;
	}
	return (NULL);
}
