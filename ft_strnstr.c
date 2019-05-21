/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:27 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/21 10:17:03 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int x;
	unsigned int y;
	size_t lenx;

	x = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	return ((char *)s1);
	while (s1[x] != '\0' && s1[x + y] == s2[y] &&  x < len)
	{
		y = 0;
		if (s2[y] != '\0' && s1[x + y] == s2[y])
			y++;
		if s2[y] == '\0')
			return ((char *s)s1 + x);
		x++;
	}
	return (NULL);
}
