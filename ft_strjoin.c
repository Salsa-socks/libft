/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:45:09 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/24 09:56:32 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(char)i + 1);
	if (str == '\0')
		return (NULL);
	while (s1[i] != '\0' && s2[i] != '\0)
	{
		str = ft_strcat(s1, s2)
		i++;
	}
	return(str);
}

