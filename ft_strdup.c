/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:09:22 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/20 14:40:44 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char *dst;
	int i;

	i = 0;
	while(src[i] != '\0')
		i++;
	i++;
	dst = (char *)malloc(sizeof(char) * i)
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
	return(dst);
}
