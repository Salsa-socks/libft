/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blenkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:27 by blenkosi            #+#    #+#             */
/*   Updated: 2019/05/30 12:23:33 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	if (haystack == '\0' && needle == '\0')
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j <= len && needle[j] == haystack[i + j])
		{
			if (needle[j + i] != '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
