/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:26:40 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/27 13:38:14 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	char *ft_strmap(char const *s, char (*f)(char))
{
	unsigned int i;
	char *str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) +1);
	if (str == NULL)
		return NULL;

	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}

	return(str);
}
